#include "MyLib.h"
// Функція для зміни інформації про інструмент у таблиці
DataTable^ ChangeInfo(DataGridView^ ToolList, string new_type, string new_subtype, string new_country, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // Прапорець для позначення знайденого індексу
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];


		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// Індекс співпав, оновлюємо значення полів
				found = true;
				row->Cells["Type"]->Value = gcnew System::String(new_type.c_str());
				row->Cells["Subtype"]->Value = gcnew System::String(new_subtype.c_str());
				row->Cells["Country"]->Value = gcnew System::String(new_country.c_str());
			}
		}
	}

	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];
		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			// Отримайте інші дані із інших стовпців та додайте їх до списку
			String^ name = Convert::ToString(row->Cells["Name"]->Value);
			String^ type = Convert::ToString(row->Cells["Type"]->Value);
			String^ subtype = Convert::ToString(row->Cells["Subtype"]->Value);
			String^ country = Convert::ToString(row->Cells["Country"]->Value);
			String^ price = Convert::ToString(row->Cells["Price $"]->Value);
			String^ reviews = Convert::ToString(row->Cells["Reviews"]->Value);
		}
	}

	return table;
}







// Функція для зміни ціни інструменту у таблиці
DataTable^ PriceChange(DataGridView^ ToolList, double new_price, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // Прапорець для позначення знайденого індексу
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];

		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// Індекс співпав, оновлюємо значення полів
				found = true;
				row->Cells["Price $"]->Value = new_price;
			}
		}
	}

	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];
		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			// Отримайте інші дані із інших стовпців та додайте їх до списку
			String^ name = Convert::ToString(row->Cells["Name"]->Value);
			String^ type = Convert::ToString(row->Cells["Type"]->Value);
			String^ subtype = Convert::ToString(row->Cells["Subtype"]->Value);
			String^ country = Convert::ToString(row->Cells["Country"]->Value);
			String^ price = Convert::ToString(row->Cells["Price $"]->Value);
			String^ reviews = Convert::ToString(row->Cells["Reviews"]->Value);
		}
	}
	return table;
}




// Функція для зміни відгуків про інструмент у таблиці
DataTable^ RevChange(DataGridView^ ToolList, string new_rev, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // Прапорець для позначення знайденого індексу
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];

		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// Індекс співпав, оновлюємо значення полів
				found = true;
				row->Cells["Reviews"]->Value += gcnew System::String(new_rev.c_str());
			}
		}
	}

	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];
		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			// Отримайте інші дані із інших стовпців та додайте їх до списку
			String^ name = Convert::ToString(row->Cells["Name"]->Value);
			String^ type = Convert::ToString(row->Cells["Type"]->Value);
			String^ subtype = Convert::ToString(row->Cells["Subtype"]->Value);
			String^ country = Convert::ToString(row->Cells["Country"]->Value);
			String^ price = Convert::ToString(row->Cells["Price $"]->Value);
			String^ reviews = Convert::ToString(row->Cells["Reviews"]->Value);
		}
	}
	return table;
}




// Функція для видалення конкретного відгуку про інструмент з таблиці
DataTable^ DeleteRev(DataGridView^ ToolList, string ParticularRev, int index, string filename, DataTable^ table) {
	// Оголошення векторів для зберігання даних інструментів
	vector<Tool> tools;
	vector<string> name, type, subtype, country, review;
	vector<double> price;
	vector<int> id;

	// Виклик функції для читання даних з таблиці та заповнення векторів
	FuncForReadTable(ToolList, tools, name, type, subtype, country, price, review, id);

	// Знаходження відгуку для видалення за вказаним індексом
	string str = "";
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			str = review[i];
		}
	}

	// Розділення рядка відгуків на окремі рядки та збереження їх у вектор
	std::vector<std::string> result;
	std::istringstream iss(str);
	std::string line;

	while (std::getline(iss, line, '\n')) {
		// Додаємо кожен рядок до вектора
		result.push_back(line + '\n');
	}

	// Видалення конкретного відгуку
	str = "";
	for (int i = 0; i < result.size(); i++) {
		if (result[i] != ParticularRev) {
			str += result[i];
		}
	}

	// Оновлення вектора відгуків для вказаного інструменту
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			review[i] = str;
		}
	}

	// Вивід оновленого рядка відгуків
	for (int i = 0; i < review.size(); i++) {
		cout << review[i] << "\n\n";
	}

	// Оновлення вектора інструментів і запис його у таблицю
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			tools[i].change_value(name[i], type[i], subtype[i], country[i], price[i], review[i]);
		}
	}

	// Виклик функції для запису оновленої інформації у таблицю
	FuncForWriteTable(table, tools, id);

	// Повернення оновленої таблиці
	return table;
}