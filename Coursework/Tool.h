#include <cmath>
#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <Windows.h>
#include <vcclr.h>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <stdexcept>
#include <iomanip>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Windows::Forms;


// Клас Tool представляє інструмент та включає в себе його атрибути та методи для зчитування та виведення даних
class Tool {
private:
    string name;
    string type;
    string subtype;
    string producing_country;
    double price;
    string list_reviews;

public:
    int id;  // Ідентифікатор інструменту

    // Конструктор за замовчуванням, ініціалізує об'єкт з порожніми значеннями
    Tool() {
        name = "";
        type = "";
        subtype = "";
        producing_country = "";
        price = 0.0;
        list_reviews = "";
    }

    // Конструктор із параметрами для ініціалізації об'єкту конкретними значеннями
    Tool(string name, string type, string subtype, string producing_country, double price, string review) {
        this->name = name;
        this->type = type;
        this->subtype = subtype;
        this->producing_country = producing_country;
        this->price = price;
        this->list_reviews = review;
    }

    // Конструктор копіювання, створює новий об'єкт, який ідентичний іншому об'єкту
    Tool(const Tool& other_class) {
        this->name = other_class.name;
        this->type = other_class.type;
        this->subtype = other_class.subtype;
        this->producing_country = other_class.producing_country;
        this->price = other_class.price;
        this->list_reviews = other_class.list_reviews;
    }

    // Перевантажений оператор виводу для зручного виведення об'єктів вектору Tool
    friend ostream& operator<<(ostream& out, vector<Tool>& tool) {
        for (int i = 0; i < tool.size(); i++) {
            out << "ID: " << tool[i].id << "\n";
            out << "Name: " << tool[i].name << "\n";
            out << "Type: " << tool[i].type << "\n";
            out << "Subtype: " << tool[i].subtype << "\n";
            out << "Country: " << tool[i].producing_country << "\n";
            out << "Price: " << tool[i].price << "\n";
            out << "Reviews:\n" << tool[i].list_reviews << "\n";
        }
        return out;
    }

    // Перевантажений оператор вводу для зчитування даних з файлу вектору Tool
    friend std::istream& operator>>(std::istream& in, std::vector<Tool>& tools) {
        std::string line;
        Tool tool;

        // Зчитування даних рядка за рядком
        while (std::getline(in, line)) {
            // Перевірка наявності ключового слова та визначення відповідного поля
            if (line.find("Name: ") == 0) {
                tool.name = line.substr(6); // Відкидаємо "Name: "
            }
            else if (line.find("Type: ") == 0) {
                tool.type = line.substr(6); // Відкидаємо "Type: "
            }
            else if (line.find("Subtype: ") == 0) {
                tool.subtype = line.substr(9); // Відкидаємо "Subtype: "
            }
            else if (line.find("Country: ") == 0) {
                tool.producing_country = line.substr(9); // Відкидаємо "Country: "
            }
            else if (line.find("Price: ") == 0) {
                std::string currently = line.substr(7);
                // Встановлюємо точність на два десяткові знаки після коми
                tool.price = std::stod(currently);
            }
            else if (line.find("Reviews:") == 0) {
                String^ reviews = "";
                // Зчитування відгуків до кінця файлу
                while (std::getline(in, line)) {
                    if (line.empty()) {
                        break; // Вихід при зустрічі порожнього рядка (кінець блоку відгуків)
                    }
                    reviews += gcnew String(line.c_str()) + Environment::NewLine;
                    tool.list_reviews = msclr::interop::marshal_as<std::string>(reviews);
                }
                tools.push_back(Tool(tool));
                tool.list_reviews = "";
            }
        }
        return in;
    }

    // Оператор менше (<): Порівнює об'єкт типу Tool за ціною.
    bool operator<(const Tool& tool) const {
        return price < tool.price;
    }

    // Оператор більше (>): Порівнює об'єкт типу Tool за ціною.
    bool operator>(const Tool& tool) const {
        return price > tool.price;
    }

    // Метод GetInfo: Отримує інформацію про інструмент та передає її за посиланням.
    void GetInfo(std::string& Name, std::string& Type, std::string& Subtype, std::string& Country, double& Price, string& Rev) {
        Name = name;
        Type = type;
        Subtype = subtype;
        Country = producing_country;
        Price = price;
        Rev = list_reviews;
    }

    // Метод PrintToolInfo: Виводить інформацію про інструмент на консоль за вказаним ідентифікатором.
    void PrintToolInfo(int id) const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Subtype: " << subtype << std::endl;
        std::cout << "Country: " << producing_country << std::endl;
        std::cout << "Price: " << price << std::endl;

        // Додамо виведення відгуків
        std::cout << "Reviews:" << std::endl;
        std::istringstream reviews_stream(list_reviews);
        std::string review;
        while (std::getline(reviews_stream, review)) {
            std::cout << review << std::endl;
        }

        cout << "\n\n";
    }

    // Метод CheckList: Перевіряє, чи збігаються слова з інструментом за назвою, типом та підтипом.
    bool CheckList(string word_1, string word_2, string word_3) {
        if (name == word_1) {
            return true;
        }

        if (type == word_2) {
            return true;
        }

        if (subtype == word_3) {
            return true;
        }

        if (name == word_1 && type == word_2) {
            return true;
        }

        if (name == word_1 && subtype == word_3) {
            return true;
        }

        if (type == word_2 && subtype == word_3) {
            return true;
        }

        if (name == word_1 && type == word_2 && subtype == word_3) {
            return true;
        }
        else {
            return false;
        }
    }

    // Метод change_value: Змінює значення всіх атрибутів об'єкта на нові значення.
    void change_value(string new_name, string new_type, string new_suptype, string new_country, double new_price, string new_reviews) {
        name = new_name;
        type = new_type;
        subtype = new_suptype;
        producing_country = new_country;
        price = new_price;
        list_reviews = new_reviews;
    }

    // Метод ChangeTypeSubtype: Змінює значення типу, підтипу та країни на нові значення.
    void ChangeTypeSubtype(string new_type, string new_suptype, string new_country) {
        type = new_type;
        subtype = new_suptype;
        producing_country = new_country;
    }

    // Метод IsCountryMatching: Перевіряє, чи збігається країна об'єкта з заданою країною.
    bool IsCountryMatching(const std::string& country_to_check) const {
        return producing_country == country_to_check;
    }

    // Метод GetName: Повертає назву інструменту.
    string GetName() {
        return name;
    }

    // Метод GetType: Повертає тип інструменту.
    string GetType() {
        return type;
    }

    // Метод GetSubtype: Повертає підтип інструменту.
    string GetSubtype() {
        return subtype;
    }

    // Метод GetCountry: Повертає країну виробника інструменту.
    string GetCountry() {
        return producing_country;
    }

    // Функція CreateTable призначена для створення та заповнення DataTable з даними про інструменти з файлу.
    DataTable^ CreateTable(DataTable^ table, string filename, vector<string>& username, vector<string>& myRev) {
        // Відкриття файлу для читання
        std::ifstream inFile;
        username.clear();
        myRev.clear();

        if (filename == "") {
            // Якщо ім'я файлу не вказано, використовується стандартне "file.txt"
            inFile = ifstream("file.txt");
        }
        else {
            inFile = ifstream(filename);
        }
        
        std::string line;

        // Створення нової DataTable та визначення колонок
        table = gcnew DataTable();
        table->Columns->Add("ID");
        table->Columns->Add("Name");
        table->Columns->Add("Type");
        table->Columns->Add("Subtype");
        table->Columns->Add("Country");
        table->Columns->Add("Price $");
        table->Columns->Add("Reviews");

        // Створення вектора інструментів та читання даних з файлу
        vector<Tool> tools;
        inFile >> tools;
        inFile.close();

        // Відкриття файлу для повторного читання
        std::ifstream in(filename);
        String^ currentLine = ""; // Змінна для зберігання поточного рядку
        vector<int> id;
        vector<string> prices;

        // Парсинг ID та цін інструментів
        while (std::getline(in, line)) {
            String^ strLine = gcnew String(line.c_str());
            if (strLine->StartsWith("ID: ")) {
                int currentId = Convert::ToInt32(strLine->Substring(4));
                id.push_back(currentId);
            }
            else if (strLine->StartsWith("Price: ")) {
                prices.push_back(line.substr(7));
            }
        }

        in.close();

        // Створення векторів для зберігання деталей інструментів
        vector<string> name(tools.size()), type(tools.size()), subtype(tools.size()), country(tools.size()), rev(tools.size());
        vector<double> price(tools.size());

        DataRow^ row = nullptr;

        // Заповнення DataTable даними
        for (int i = 0; i < tools.size(); i++) {
            if (row != nullptr) {
                // Додавання рядка у таблицю
                table->Rows->Add(row);
            }
            tools[i].GetInfo(name[i], type[i], subtype[i], country[i], price[i], rev[i]);
            row = table->NewRow();
            // Перетворення даних для DataTable
            String^ dd = msclr::interop::marshal_as<System::String^>(to_string(id[i]));
            String^ nn = msclr::interop::marshal_as<System::String^>(name[i]);
            String^ tt = msclr::interop::marshal_as<System::String^>(type[i]);
            String^ ss = msclr::interop::marshal_as<System::String^>(subtype[i]);
            String^ cc = msclr::interop::marshal_as<System::String^>(country[i]);
            String^ pp = msclr::interop::marshal_as<System::String^>(prices[i]);
            String^ rr = msclr::interop::marshal_as<System::String^>(rev[i]);

            // Заповнення значень рядка
            row["ID"] = dd;
            row["Name"] = nn;
            row["Type"] = tt;
            row["Subtype"] = ss;
            row["Country"] = cc;
            row["Price $"] = pp;
            row["Reviews"] = rr;
        }

        if (row != nullptr) {
            // Додавання останнього рядка у таблицю
            table->Rows->Add(row);
        }

        std::vector<std::string> lines;

        // Розбиття відгуків на ім'я користувача та відгук
        for (int i = 0; i < tools.size(); i++) {
            std::istringstream iss(rev[i]);

            while (!iss.eof()) {
                std::string line;
                std::getline(iss, line, '\n');
                lines.push_back(line);
            }

            // Знаходження роздільника та розбиття на ім'я та відгук
            size_t pos = rev[i].find(" -");
            username.push_back(rev[i].substr(0, pos));
            myRev.push_back(rev[i].substr(pos + 3));

            lines.clear();
        }

        // Повернення заповненої DataTable
        return table;
    }
};
