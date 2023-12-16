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


// ���� Tool ����������� ���������� �� ������ � ���� ���� �������� �� ������ ��� ���������� �� ��������� �����
class Tool {
private:
    string name;
    string type;
    string subtype;
    string producing_country;
    double price;
    string list_reviews;

public:
    int id;  // ������������� �����������

    // ����������� �� �������������, �������� ��'��� � �������� ����������
    Tool() {
        name = "";
        type = "";
        subtype = "";
        producing_country = "";
        price = 0.0;
        list_reviews = "";
    }

    // ����������� �� ����������� ��� ����������� ��'���� ����������� ����������
    Tool(string name, string type, string subtype, string producing_country, double price, string review) {
        this->name = name;
        this->type = type;
        this->subtype = subtype;
        this->producing_country = producing_country;
        this->price = price;
        this->list_reviews = review;
    }

    // ����������� ���������, ������� ����� ��'���, ���� ���������� ������ ��'����
    Tool(const Tool& other_class) {
        this->name = other_class.name;
        this->type = other_class.type;
        this->subtype = other_class.subtype;
        this->producing_country = other_class.producing_country;
        this->price = other_class.price;
        this->list_reviews = other_class.list_reviews;
    }

    // �������������� �������� ������ ��� �������� ��������� ��'���� ������� Tool
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

    // �������������� �������� ����� ��� ���������� ����� � ����� ������� Tool
    friend std::istream& operator>>(std::istream& in, std::vector<Tool>& tools) {
        std::string line;
        Tool tool;

        // ���������� ����� ����� �� ������
        while (std::getline(in, line)) {
            // �������� �������� ��������� ����� �� ���������� ���������� ����
            if (line.find("Name: ") == 0) {
                tool.name = line.substr(6); // ³������� "Name: "
            }
            else if (line.find("Type: ") == 0) {
                tool.type = line.substr(6); // ³������� "Type: "
            }
            else if (line.find("Subtype: ") == 0) {
                tool.subtype = line.substr(9); // ³������� "Subtype: "
            }
            else if (line.find("Country: ") == 0) {
                tool.producing_country = line.substr(9); // ³������� "Country: "
            }
            else if (line.find("Price: ") == 0) {
                std::string currently = line.substr(7);
                // ������������ ������� �� ��� �������� ����� ���� ����
                tool.price = std::stod(currently);
            }
            else if (line.find("Reviews:") == 0) {
                String^ reviews = "";
                // ���������� ������ �� ���� �����
                while (std::getline(in, line)) {
                    if (line.empty()) {
                        break; // ����� ��� ������� ���������� ����� (����� ����� ������)
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

    // �������� ����� (<): ������� ��'��� ���� Tool �� �����.
    bool operator<(const Tool& tool) const {
        return price < tool.price;
    }

    // �������� ����� (>): ������� ��'��� ���� Tool �� �����.
    bool operator>(const Tool& tool) const {
        return price > tool.price;
    }

    // ����� GetInfo: ������ ���������� ��� ���������� �� ������ �� �� ����������.
    void GetInfo(std::string& Name, std::string& Type, std::string& Subtype, std::string& Country, double& Price, string& Rev) {
        Name = name;
        Type = type;
        Subtype = subtype;
        Country = producing_country;
        Price = price;
        Rev = list_reviews;
    }

    // ����� PrintToolInfo: �������� ���������� ��� ���������� �� ������� �� �������� ���������������.
    void PrintToolInfo(int id) const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Subtype: " << subtype << std::endl;
        std::cout << "Country: " << producing_country << std::endl;
        std::cout << "Price: " << price << std::endl;

        // ������ ��������� ������
        std::cout << "Reviews:" << std::endl;
        std::istringstream reviews_stream(list_reviews);
        std::string review;
        while (std::getline(reviews_stream, review)) {
            std::cout << review << std::endl;
        }

        cout << "\n\n";
    }

    // ����� CheckList: ��������, �� ��������� ����� � ������������ �� ������, ����� �� �������.
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

    // ����� change_value: ����� �������� ��� �������� ��'���� �� ��� ��������.
    void change_value(string new_name, string new_type, string new_suptype, string new_country, double new_price, string new_reviews) {
        name = new_name;
        type = new_type;
        subtype = new_suptype;
        producing_country = new_country;
        price = new_price;
        list_reviews = new_reviews;
    }

    // ����� ChangeTypeSubtype: ����� �������� ����, ������ �� ����� �� ��� ��������.
    void ChangeTypeSubtype(string new_type, string new_suptype, string new_country) {
        type = new_type;
        subtype = new_suptype;
        producing_country = new_country;
    }

    // ����� IsCountryMatching: ��������, �� �������� ����� ��'���� � ������� ������.
    bool IsCountryMatching(const std::string& country_to_check) const {
        return producing_country == country_to_check;
    }

    // ����� GetName: ������� ����� �����������.
    string GetName() {
        return name;
    }

    // ����� GetType: ������� ��� �����������.
    string GetType() {
        return type;
    }

    // ����� GetSubtype: ������� ����� �����������.
    string GetSubtype() {
        return subtype;
    }

    // ����� GetCountry: ������� ����� ��������� �����������.
    string GetCountry() {
        return producing_country;
    }

    // ������� CreateTable ���������� ��� ��������� �� ���������� DataTable � ������ ��� ����������� � �����.
    DataTable^ CreateTable(DataTable^ table, string filename, vector<string>& username, vector<string>& myRev) {
        // ³������� ����� ��� �������
        std::ifstream inFile;
        username.clear();
        myRev.clear();

        if (filename == "") {
            // ���� ��'� ����� �� �������, ��������������� ���������� "file.txt"
            inFile = ifstream("file.txt");
        }
        else {
            inFile = ifstream(filename);
        }
        
        std::string line;

        // ��������� ���� DataTable �� ���������� �������
        table = gcnew DataTable();
        table->Columns->Add("ID");
        table->Columns->Add("Name");
        table->Columns->Add("Type");
        table->Columns->Add("Subtype");
        table->Columns->Add("Country");
        table->Columns->Add("Price $");
        table->Columns->Add("Reviews");

        // ��������� ������� ����������� �� ������� ����� � �����
        vector<Tool> tools;
        inFile >> tools;
        inFile.close();

        // ³������� ����� ��� ���������� �������
        std::ifstream in(filename);
        String^ currentLine = ""; // ����� ��� ��������� ��������� �����
        vector<int> id;
        vector<string> prices;

        // ������� ID �� ��� �����������
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

        // ��������� ������� ��� ��������� ������� �����������
        vector<string> name(tools.size()), type(tools.size()), subtype(tools.size()), country(tools.size()), rev(tools.size());
        vector<double> price(tools.size());

        DataRow^ row = nullptr;

        // ���������� DataTable ������
        for (int i = 0; i < tools.size(); i++) {
            if (row != nullptr) {
                // ��������� ����� � �������
                table->Rows->Add(row);
            }
            tools[i].GetInfo(name[i], type[i], subtype[i], country[i], price[i], rev[i]);
            row = table->NewRow();
            // ������������ ����� ��� DataTable
            String^ dd = msclr::interop::marshal_as<System::String^>(to_string(id[i]));
            String^ nn = msclr::interop::marshal_as<System::String^>(name[i]);
            String^ tt = msclr::interop::marshal_as<System::String^>(type[i]);
            String^ ss = msclr::interop::marshal_as<System::String^>(subtype[i]);
            String^ cc = msclr::interop::marshal_as<System::String^>(country[i]);
            String^ pp = msclr::interop::marshal_as<System::String^>(prices[i]);
            String^ rr = msclr::interop::marshal_as<System::String^>(rev[i]);

            // ���������� ������� �����
            row["ID"] = dd;
            row["Name"] = nn;
            row["Type"] = tt;
            row["Subtype"] = ss;
            row["Country"] = cc;
            row["Price $"] = pp;
            row["Reviews"] = rr;
        }

        if (row != nullptr) {
            // ��������� ���������� ����� � �������
            table->Rows->Add(row);
        }

        std::vector<std::string> lines;

        // �������� ������ �� ��'� ����������� �� �����
        for (int i = 0; i < tools.size(); i++) {
            std::istringstream iss(rev[i]);

            while (!iss.eof()) {
                std::string line;
                std::getline(iss, line, '\n');
                lines.push_back(line);
            }

            // ����������� ���������� �� �������� �� ��'� �� �����
            size_t pos = rev[i].find(" -");
            username.push_back(rev[i].substr(0, pos));
            myRev.push_back(rev[i].substr(pos + 3));

            lines.clear();
        }

        // ���������� ��������� DataTable
        return table;
    }
};
