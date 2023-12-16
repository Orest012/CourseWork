#include "MyLib.h"


// Функція FindByName виконує пошук інструментів за назвою в зазначеному файлі або таблиці.
// Якщо параметр CheckFile встановлений в true, функція виконує пошук у файлі, інакше, якщо CheckTable встановлений в true, - в таблиці.
// Знайдені інструменти додаються у передану DataTable table. Результати пошуку записуються у рядок result, який вказує кількість знайдених інструментів.
DataTable^ FindByName(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів
		bool search = false; // Флаг для визначення, чи був виконаний пошук

		// Вектори для зберігання інформації про інструменти
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// Зчитування даних з файлу та виконання пошуку
		FuncForReadFile(tool, filename, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	else if (CheckTable == true) {
		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів

		// Вектори для зберігання інформації про інструменти
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// Зчитування даних з таблиці та виконання пошуку
		FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				check = true;
				count++;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}


// Функція FindBySubtype виконує пошук інструментів за підтипом в зазначеному файлі або таблиці.
// Якщо параметр CheckFile встановлений в true, функція виконує пошук у файлі, інакше, якщо CheckTable встановлений в true, - в таблиці.
// Знайдені інструменти додаються у передану DataTable table. Результати пошуку записуються у рядок result, який вказує кількість знайдених інструментів.
DataTable^ FindBySubtype(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів
		bool search = false; // Флаг для визначення, чи був виконаний пошук

		// Вектори для зберігання інформації про інструменти
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// Зчитування даних з файлу та виконання пошуку
		FuncForReadFile(tool, filename, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	else if (CheckTable == true) {
		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів

		// Вектори для зберігання інформації про інструменти
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// Зчитування даних з таблиці та виконання пошуку
		FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				check = true;
				count++;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}



// Функція FindByType виконує пошук інструментів за типом в зазначеному файлі або таблиці.
// Якщо параметр CheckFile встановлений в true, функція виконує пошук у файлі, інакше, якщо CheckTable встановлений в true, - в таблиці.
// Знайдені інструменти додаються у передану DataTable table. Результати пошуку записуються у рядок result, який вказує кількість знайдених інструментів.
DataTable^ FindByType(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів

		// Вектори для зберігання інформації про інструменти
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// Зчитування даних з файлу та виконання пошуку
		FuncForReadFile(tool, filename, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	// Умова в else if має помилку (CheckTable = true), правильною є (CheckTable == true).
	// В іншому випадку, умова завжди виконуватиметься, оскільки призначення буде виконано завжди,
	// і ніколи не порівнюється з реальним значенням.
	else if (CheckTable == true) {

		bool check = false;  // Флаг для перевірки, чи потрібно очистити таблицю перед заповненням новими даними
		int count = 0;      // Лічильник знайдених інструментів

		// Вектори для зберігання інформації про інструменти
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// Зчитування даних з таблиці та виконання пошуку
		FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

		for (int i = 0; i < tool.size(); i++) {
			if (tool[i].CheckList(word_1, word_2, word_3)) {
				if (check == false) {
					table->Clear();
				}
				check = true;
				count++;
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення про відсутність знайдених інструментів
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Формування результату пошуку
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}

// Функція для знаходження інструментів за країною в таблиці або файлі
DataTable^ FindToolByCountry(DataGridView^ ToolList, DataTable^ table, string& result, bool CheckTable, bool CheckFile, const std::string& filename, const std::string& country_to_find) {

	// Перевірка, чи потрібно шукати в файлі
	if (CheckFile == true) {
		bool check = false; // Прапорець для перевірки чи був хоча б один збіг
		int count = 0; // Лічильник знайдених інструментів
		bool search = false; // Флаг пошуку

		// Вектори для збереження інформації з файлу
		vector<int> id_1;
		vector<double> price;
		vector<Tool> tool_1;

		// Виклик функції для читання даних з файлу
		FuncForReadFile(tool_1, filename, id_1);

		// Прохід по вектору інструментів з файлу
		for (int i = 0; i < tool_1.size(); i++) {
			// Перевірка, чи співпадає країна інструменту з шуканою країною
			if (tool_1[i].IsCountryMatching(country_to_find)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;

				// Виклик функції для запису даних в таблицю
				FuncForWriteTableFromFile(table, tool_1[i], id_1[i]);
			}
		}

		// Повідомлення, якщо інструмент не знайдено
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("Інструмент не знайдено", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Збереження результату в рядок
		result = "Кількість знайдених інструментів: " + to_string(count);
	}

	// Перевірка, чи потрібно шукати в таблиці
	else if (CheckTable == true) {

		bool check = false; // Прапорець для перевірки чи був хоча б один збіг
		int count = 0; // Лічильник знайдених інструментів

		// Вектори для збереження інформації з таблиці
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// Виклик функції для читання даних з таблиці
		FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

		// Прохід по вектору інструментів з таблиці
		for (int i = 0; i < tool.size(); i++) {
			// Перевірка, чи співпадає країна інструменту з шуканою країною
			if (tool[i].IsCountryMatching(country_to_find)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;

				// Виклик функції для запису даних в таблицю
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// Повідомлення, якщо інструмент не знайдено
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("Інструмент не знайдено", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Збереження результату в рядок
		result = "Кількість знайдених інструментів: " + to_string(count);

	}

	// Повернення зміненої або незміненої таблиці
	return table;
}


// Функція для пошуку вказаного тексту у всіх полях інструментів у таблиці або файлі
DataTable^ PhraseSearch(DataGridView^ ToolList, DataTable^ table, bool checkFile, bool checkTable, string filename, string textNameStr) {
	// Змінні для зберігання інформації про інструменти
	vector<string> name, type, subtype, country, review;
	vector<int> id;
	vector<double> price;
	vector<Tool> tools;
	// Копія переданої таблиці, в якій будуть зберігатися результати пошуку
	DataTable^ new_table = table;

	int ii = 0; // Лічильник знайдених інструментів
	bool tableCheck = true; // Прапорець для перевірки, чи не порожня таблиця

	// Якщо потрібно шукати в файлі
	if (checkFile == true) {
		// Зчитування даних з файлу і заповнення вектору інструментів
		FuncForReadFile(tools, filename, id);
		// Перевірка, чи таблиця не порожня
		if (ToolList->ColumnCount == 0) {
			tableCheck = false;
			System::Windows::Forms::MessageBox::Show("Table is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	// Якщо потрібно шукати в таблиці
	else if (checkTable == true) {
		// Зчитування даних з таблиці і заповнення вектору інструментів
		FuncForReadTable(ToolList, tools, name, type, subtype, country, price, review, id);
	}

	// Пошук у векторі інструментів за вказаним текстом
	if (tableCheck == true) {
		for (int i = 0; i < tools.size(); i++) {
			// Перевірка, чи знайдений текст у будь-якому полі інструменту
			if ((tools[i].GetName().find(textNameStr) != std::string::npos) ||
				(tools[i].GetType().find(textNameStr) != std::string::npos) ||
				(tools[i].GetSubtype().find(textNameStr) != std::string::npos) ||
				(tools[i].GetCountry().find(textNameStr) != std::string::npos)) {
				if (ii == 0) {
					new_table->Clear(); // Очищення результатів, якщо це перший знайдений інструмент
				}
				ii++;
				Tool tool = tools[i];
				string name, type, subtype, country, reviews;
				double price;

				tool.GetInfo(name, type, subtype, country, price, reviews);

				// Створення нового рядка з інформацією про інструмент та його додавання до таблиці результатів
				DataRow^ row = new_table->NewRow();
				row["ID"] = id[i];
				row["Name"] = gcnew System::String(name.c_str());
				row["Type"] = gcnew System::String(type.c_str());
				row["Subtype"] = gcnew System::String(subtype.c_str());
				row["Country"] = gcnew System::String(country.c_str());
				row["Price $"] = price;
				row["Reviews"] = gcnew System::String(reviews.c_str());

				new_table->Rows->Add(row);
			}
		}
	}

	// Повернення таблиці з результатами пошуку
	return new_table;
}

