#include "MyLib.h"



void print() {
	 cout << "It is my func";
	 Tool obj();
}

// Функція для зчитування даних з DataGridView та заповнення векторів інформацією про інструменти
void FuncForReadTable(DataGridView^ ToolList, vector<Tool>& tools, vector<string>& name, vector<string>& type, vector<string>& subtype, vector<string>& country, vector<double>& price, vector<string>& review, vector<int>& id) {
    for (int i = 0; i < ToolList->RowCount; i++) {
        DataGridViewRow^ row = ToolList->Rows[i];
        if (row->Cells["ID"]->Value != nullptr) {
            id.push_back(Convert::ToInt32(row->Cells["ID"]->Value));
            int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

            // Отримайте інші дані із інших стовпців та додайте їх до відповідних векторів
            String^ nameStr = Convert::ToString(row->Cells["Name"]->Value);
            String^ typeStr = Convert::ToString(row->Cells["Type"]->Value);
            String^ subtypeStr = Convert::ToString(row->Cells["Subtype"]->Value);
            String^ countryStr = Convert::ToString(row->Cells["Country"]->Value);
            String^ reviewsStr = Convert::ToString(row->Cells["Reviews"]->Value);
            String^ read_price = Convert::ToString(row->Cells["Price $"]->Value);

            // Конвертувати System::String^ в std::string
            std::string priceStdString = msclr::interop::marshal_as<std::string>(read_price);

            // Замінити кому на крапку
            std::replace(priceStdString.begin(), priceStdString.end(), ',', '.');

            // Конвертувати std::string в double
            price.push_back(stod(priceStdString));

            name.push_back(msclr::interop::marshal_as<std::string>(nameStr));
            type.push_back(msclr::interop::marshal_as<std::string>(typeStr));
            subtype.push_back(msclr::interop::marshal_as<std::string>(subtypeStr));
            country.push_back(msclr::interop::marshal_as<std::string>(countryStr));
            review.push_back(msclr::interop::marshal_as<std::string>(reviewsStr));
        }
    }

    // Створіть об'єкти Tool, використовуючи зібрану інформацію та додайте їх до вектору інструментів
    for (int i = 0; i < name.size(); i++) {
        tools.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
    }
}

// Функція для запису даних з векторів у DataTable
void FuncForWriteTable(DataTable^ table, vector<Tool> tools, vector<int> id) {
    table->Clear();
    for (int i = 0; i < tools.size(); i++) {
        if (i < id.size()) {
            Tool tool = tools[i];
            string name, type, subtype, country, reviews;
            double price;

            // Отримайте інформацію про інструмент
            tool.GetInfo(name, type, subtype, country, price, reviews);

            // Створіть новий DataRow та заповніть його інформацією про інструмент
            DataRow^ row = table->NewRow();
            row["ID"] = id[i];
            row["Name"] = gcnew System::String(name.c_str());
            row["Type"] = gcnew System::String(type.c_str());
            row["Subtype"] = gcnew System::String(subtype.c_str());
            row["Country"] = gcnew System::String(country.c_str());
            row["Price $"] = price;
            row["Reviews"] = gcnew System::String(reviews.c_str());

            // Додайте DataRow до DataTable
            table->Rows->Add(row);
        }
    }
}

// Функція для перевірки, чи є DataGridView порожнім
bool CheckEmptyTable(DataGridView^ ToolList) {
    if (ToolList->RowCount == 0) {
        // Викличте виняток EmptyTable, якщо DataGridView порожній
        throw EmptyTable();
        int a;  // Цей рядок, здається, непотрібний і може бути видалений
        return true;
    }

    // Перевірте кожен рядок на наявність порожніх значень
    bool ch = true;
    for (int i = 0; i < ToolList->RowCount; i++) {
        DataGridViewRow^ row = ToolList->Rows[i];
        int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

        // Отримайте інші дані із інших стовпців
        String^ name = Convert::ToString(row->Cells["Name"]->Value);
        String^ type = Convert::ToString(row->Cells["Type"]->Value);
        String^ subtype = Convert::ToString(row->Cells["Subtype"]->Value);
        String^ country = Convert::ToString(row->Cells["Country"]->Value);
        String^ price = Convert::ToString(row->Cells["Price $"]->Value);
        String^ reviews = Convert::ToString(row->Cells["Reviews"]->Value);

        if (ch == true) {
            // Якщо перший рядок має всі порожні значення, викличте виняток EmptyTable
            if (name == "" && type == "" && subtype == "" && country == "" && price == "" && reviews == "") {
                throw EmptyTable();
                int a;  // Цей рядок, здається, непотрібний і може бути видалений
                return true;
            }
            else {
                ch = false;
            }
        }
    }
    int a;  // Цей рядок, здається, непотрібний і може бути видалений
    return false;
}
