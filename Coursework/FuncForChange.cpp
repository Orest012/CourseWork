#include "MyLib.h"
// ������� ��� ���� ���������� ��� ���������� � �������
DataTable^ ChangeInfo(DataGridView^ ToolList, string new_type, string new_subtype, string new_country, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // ��������� ��� ���������� ���������� �������
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];


		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// ������ ������, ��������� �������� ����
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

			// ��������� ���� ��� �� ����� �������� �� ������� �� �� ������
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







// ������� ��� ���� ���� ����������� � �������
DataTable^ PriceChange(DataGridView^ ToolList, double new_price, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // ��������� ��� ���������� ���������� �������
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];

		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// ������ ������, ��������� �������� ����
				found = true;
				row->Cells["Price $"]->Value = new_price;
			}
		}
	}

	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];
		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			// ��������� ���� ��� �� ����� �������� �� ������� �� �� ������
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




// ������� ��� ���� ������ ��� ���������� � �������
DataTable^ RevChange(DataGridView^ ToolList, string new_rev, int index, string filename, DataTable^ table) {
	bool b = false;
	int counter = 0;

	bool found = false; // ��������� ��� ���������� ���������� �������
	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];

		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			if (rowID == index) {
				// ������ ������, ��������� �������� ����
				found = true;
				row->Cells["Reviews"]->Value += gcnew System::String(new_rev.c_str());
			}
		}
	}

	for (int i = 0; i < ToolList->RowCount; i++) {
		DataGridViewRow^ row = ToolList->Rows[i];
		if (row->Cells["ID"]->Value != nullptr) {
			int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

			// ��������� ���� ��� �� ����� �������� �� ������� �� �� ������
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




// ������� ��� ��������� ����������� ������ ��� ���������� � �������
DataTable^ DeleteRev(DataGridView^ ToolList, string ParticularRev, int index, string filename, DataTable^ table) {
	// ���������� ������� ��� ��������� ����� �����������
	vector<Tool> tools;
	vector<string> name, type, subtype, country, review;
	vector<double> price;
	vector<int> id;

	// ������ ������� ��� ������� ����� � ������� �� ���������� �������
	FuncForReadTable(ToolList, tools, name, type, subtype, country, price, review, id);

	// ����������� ������ ��� ��������� �� �������� ��������
	string str = "";
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			str = review[i];
		}
	}

	// ��������� ����� ������ �� ����� ����� �� ���������� �� � ������
	std::vector<std::string> result;
	std::istringstream iss(str);
	std::string line;

	while (std::getline(iss, line, '\n')) {
		// ������ ����� ����� �� �������
		result.push_back(line + '\n');
	}

	// ��������� ����������� ������
	str = "";
	for (int i = 0; i < result.size(); i++) {
		if (result[i] != ParticularRev) {
			str += result[i];
		}
	}

	// ��������� ������� ������ ��� ��������� �����������
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			review[i] = str;
		}
	}

	// ���� ���������� ����� ������
	for (int i = 0; i < review.size(); i++) {
		cout << review[i] << "\n\n";
	}

	// ��������� ������� ����������� � ����� ���� � �������
	for (int i = 0; i < id.size(); i++) {
		if (id[i] == index) {
			tools[i].change_value(name[i], type[i], subtype[i], country[i], price[i], review[i]);
		}
	}

	// ������ ������� ��� ������ �������� ���������� � �������
	FuncForWriteTable(table, tools, id);

	// ���������� �������� �������
	return table;
}