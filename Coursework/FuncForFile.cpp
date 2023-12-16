#include "MyLib.h"

// Функція для зчитування даних з файлу та заповнення вектора інструментів та інших векторів
void FuncForReadFile(vector<Tool>& tool, string filename, vector<int>& id) {
	// Оголошення векторів для зберігання даних про інструменти та інші параметри
	vector<string> name, type, subtype, country, review;
	vector<double> price;

	// Відкриття файлу для читання
	ifstream file(filename);
	string line;
	string reviews;
	bool save_tool_info = false;

	// Зчитування файлу по рядках
	while (std::getline(file, line)) {
		// Перевірка наявності ID в рядку
		if (line.find("ID: ") != std::string::npos) {
			// Зберігання значення ID в вектор
			id.push_back(std::stoi(line.substr(4)));
		}
		// Зчитування назви інструменту
		else if (line.find("Name: ") != std::string::npos) {
			name.push_back(line.substr(6));
		}
		// Зчитування типу інструменту
		else if (line.find("Type: ") != std::string::npos) {
			type.push_back(line.substr(6));
		}
		// Зчитування підтипу інструменту
		else if (line.find("Subtype: ") != std::string::npos) {
			subtype.push_back(line.substr(9));
		}
		// Зчитування країни виробництва інструменту
		else if (line.find("Country: ") != std::string::npos) {
			country.push_back(line.substr(9));
		}
		// Зчитування ціни інструменту
		else if (line.find("Price: ") != std::string::npos) {
			// Отримання ціни та конвертація у double
			std::string priceCheck = line.substr(7);
			size_t commaPos = priceCheck.find(",");
			if (commaPos != std::string::npos) {
				priceCheck[commaPos] = '.';
			}
			price.push_back(std::stod(priceCheck));
		}
		// Зчитування відгуків про інструмент
		else if (line.find("Reviews:") != std::string::npos) {
			reviews = "";
			save_tool_info = true;
		}
		// Зчитування кожного рядка відгуку та додавання його до строки відгуків
		else if (!line.empty() && save_tool_info) {
			reviews += line + "\n";
		}
		// Збереження строки відгуків у вектор
		else if (line.empty()) {
			review.push_back(reviews);
		}
	}

	// Заповнення вектора інструментів з отриманими даними
	for (int i = 0; i < name.size(); i++) {
		cout << "\nPrice = " << price[i] << "\n";
		tool.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
	}

	// Закриття файлу
	file.close();
}

// Функція для запису інформації про інструмент з файлу у таблицю
void FuncForWriteTableFromFile(DataTable^ table, Tool tool, int id) {
	// Оголошення змінних для зберігання інформації про інструмент
	string name, type, subtype, country, reviews;
	double price;

	// Отримання інформації про інструмент
	tool.GetInfo(name, type, subtype, country, price, reviews);

	// Створення нового рядка таблиці та заповнення його значеннями
	DataRow^ row = table->NewRow();
	row["ID"] = id;
	row["Name"] = gcnew System::String(name.c_str());
	row["Type"] = gcnew System::String(type.c_str());
	row["Subtype"] = gcnew System::String(subtype.c_str());
	row["Country"] = gcnew System::String(country.c_str());
	row["Price $"] = price;
	row["Reviews"] = gcnew System::String(reviews.c_str());

	// Додавання рядка до таблиці
	table->Rows->Add(row);
}
