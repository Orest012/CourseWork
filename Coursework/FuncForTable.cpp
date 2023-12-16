#include "MyLib.h"



void print() {
	 cout << "It is my func";
	 Tool obj();
}

// ������� ��� ���������� ����� � DataGridView �� ���������� ������� ����������� ��� �����������
void FuncForReadTable(DataGridView^ ToolList, vector<Tool>& tools, vector<string>& name, vector<string>& type, vector<string>& subtype, vector<string>& country, vector<double>& price, vector<string>& review, vector<int>& id) {
    for (int i = 0; i < ToolList->RowCount; i++) {
        DataGridViewRow^ row = ToolList->Rows[i];
        if (row->Cells["ID"]->Value != nullptr) {
            id.push_back(Convert::ToInt32(row->Cells["ID"]->Value));
            int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

            // ��������� ���� ��� �� ����� �������� �� ������� �� �� ��������� �������
            String^ nameStr = Convert::ToString(row->Cells["Name"]->Value);
            String^ typeStr = Convert::ToString(row->Cells["Type"]->Value);
            String^ subtypeStr = Convert::ToString(row->Cells["Subtype"]->Value);
            String^ countryStr = Convert::ToString(row->Cells["Country"]->Value);
            String^ reviewsStr = Convert::ToString(row->Cells["Reviews"]->Value);
            String^ read_price = Convert::ToString(row->Cells["Price $"]->Value);

            // ������������ System::String^ � std::string
            std::string priceStdString = msclr::interop::marshal_as<std::string>(read_price);

            // ������� ���� �� ������
            std::replace(priceStdString.begin(), priceStdString.end(), ',', '.');

            // ������������ std::string � double
            price.push_back(stod(priceStdString));

            name.push_back(msclr::interop::marshal_as<std::string>(nameStr));
            type.push_back(msclr::interop::marshal_as<std::string>(typeStr));
            subtype.push_back(msclr::interop::marshal_as<std::string>(subtypeStr));
            country.push_back(msclr::interop::marshal_as<std::string>(countryStr));
            review.push_back(msclr::interop::marshal_as<std::string>(reviewsStr));
        }
    }

    // ������� ��'���� Tool, �������������� ������ ���������� �� ������� �� �� ������� �����������
    for (int i = 0; i < name.size(); i++) {
        tools.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
    }
}

// ������� ��� ������ ����� � ������� � DataTable
void FuncForWriteTable(DataTable^ table, vector<Tool> tools, vector<int> id) {
    table->Clear();
    for (int i = 0; i < tools.size(); i++) {
        if (i < id.size()) {
            Tool tool = tools[i];
            string name, type, subtype, country, reviews;
            double price;

            // ��������� ���������� ��� ����������
            tool.GetInfo(name, type, subtype, country, price, reviews);

            // ������� ����� DataRow �� �������� ���� ����������� ��� ����������
            DataRow^ row = table->NewRow();
            row["ID"] = id[i];
            row["Name"] = gcnew System::String(name.c_str());
            row["Type"] = gcnew System::String(type.c_str());
            row["Subtype"] = gcnew System::String(subtype.c_str());
            row["Country"] = gcnew System::String(country.c_str());
            row["Price $"] = price;
            row["Reviews"] = gcnew System::String(reviews.c_str());

            // ������� DataRow �� DataTable
            table->Rows->Add(row);
        }
    }
}

// ������� ��� ��������, �� � DataGridView �������
bool CheckEmptyTable(DataGridView^ ToolList) {
    if (ToolList->RowCount == 0) {
        // �������� ������� EmptyTable, ���� DataGridView �������
        throw EmptyTable();
        int a;  // ��� �����, �������, ���������� � ���� ���� ���������
        return true;
    }

    // �������� ����� ����� �� �������� ������� �������
    bool ch = true;
    for (int i = 0; i < ToolList->RowCount; i++) {
        DataGridViewRow^ row = ToolList->Rows[i];
        int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

        // ��������� ���� ��� �� ����� ��������
        String^ name = Convert::ToString(row->Cells["Name"]->Value);
        String^ type = Convert::ToString(row->Cells["Type"]->Value);
        String^ subtype = Convert::ToString(row->Cells["Subtype"]->Value);
        String^ country = Convert::ToString(row->Cells["Country"]->Value);
        String^ price = Convert::ToString(row->Cells["Price $"]->Value);
        String^ reviews = Convert::ToString(row->Cells["Reviews"]->Value);

        if (ch == true) {
            // ���� ������ ����� �� �� ������ ��������, �������� ������� EmptyTable
            if (name == "" && type == "" && subtype == "" && country == "" && price == "" && reviews == "") {
                throw EmptyTable();
                int a;  // ��� �����, �������, ���������� � ���� ���� ���������
                return true;
            }
            else {
                ch = false;
            }
        }
    }
    int a;  // ��� �����, �������, ���������� � ���� ���� ���������
    return false;
}
