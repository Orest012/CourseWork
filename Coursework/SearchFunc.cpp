#include "MyLib.h"


// ������� FindByName ������ ����� ����������� �� ������ � ����������� ���� ��� �������.
// ���� �������� CheckFile ������������ � true, ������� ������ ����� � ����, ������, ���� CheckTable ������������ � true, - � �������.
// ������� ����������� ��������� � �������� DataTable table. ���������� ������ ����������� � ����� result, ���� ����� ������� ��������� �����������.
DataTable^ FindByName(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������
		bool search = false; // ���� ��� ����������, �� ��� ��������� �����

		// ������� ��� ��������� ���������� ��� �����������
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// ���������� ����� � ����� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	else if (CheckTable == true) {
		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������

		// ������� ��� ��������� ���������� ��� �����������
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// ���������� ����� � ������� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}


// ������� FindBySubtype ������ ����� ����������� �� ������� � ����������� ���� ��� �������.
// ���� �������� CheckFile ������������ � true, ������� ������ ����� � ����, ������, ���� CheckTable ������������ � true, - � �������.
// ������� ����������� ��������� � �������� DataTable table. ���������� ������ ����������� � ����� result, ���� ����� ������� ��������� �����������.
DataTable^ FindBySubtype(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������
		bool search = false; // ���� ��� ����������, �� ��� ��������� �����

		// ������� ��� ��������� ���������� ��� �����������
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// ���������� ����� � ����� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	else if (CheckTable == true) {
		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������

		// ������� ��� ��������� ���������� ��� �����������
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// ���������� ����� � ������� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}



// ������� FindByType ������ ����� ����������� �� ����� � ����������� ���� ��� �������.
// ���� �������� CheckFile ������������ � true, ������� ������ ����� � ����, ������, ���� CheckTable ������������ � true, - � �������.
// ������� ����������� ��������� � �������� DataTable table. ���������� ������ ����������� � ����� result, ���� ����� ������� ��������� �����������.
DataTable^ FindByType(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table) {

	if (CheckFile == true) {
		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������

		// ������� ��� ��������� ���������� ��� �����������
		vector<int> id;
		vector<double> price;
		vector<Tool> tool;

		// ���������� ����� � ����� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	// ����� � else if �� ������� (CheckTable = true), ���������� � (CheckTable == true).
	// � ������ �������, ����� ������ ����������������, ������� ����������� ���� �������� ������,
	// � ����� �� ����������� � �������� ���������.
	else if (CheckTable == true) {

		bool check = false;  // ���� ��� ��������, �� ������� �������� ������� ����� ����������� ������ ������
		int count = 0;      // ˳������� ��������� �����������

		// ������� ��� ��������� ���������� ��� �����������
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// ���������� ����� � ������� �� ��������� ������
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

		// ����������� ��� ��������� ��������� �����������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("The tool was not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� ������
		result = "Number of tools found: " + to_string(count);
	}

	return table;
}

// ������� ��� ����������� ����������� �� ������ � ������� ��� ����
DataTable^ FindToolByCountry(DataGridView^ ToolList, DataTable^ table, string& result, bool CheckTable, bool CheckFile, const std::string& filename, const std::string& country_to_find) {

	// ��������, �� ������� ������ � ����
	if (CheckFile == true) {
		bool check = false; // ��������� ��� �������� �� ��� ���� � ���� ���
		int count = 0; // ˳������� ��������� �����������
		bool search = false; // ���� ������

		// ������� ��� ���������� ���������� � �����
		vector<int> id_1;
		vector<double> price;
		vector<Tool> tool_1;

		// ������ ������� ��� ������� ����� � �����
		FuncForReadFile(tool_1, filename, id_1);

		// ������ �� ������� ����������� � �����
		for (int i = 0; i < tool_1.size(); i++) {
			// ��������, �� ������� ����� ����������� � ������� ������
			if (tool_1[i].IsCountryMatching(country_to_find)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;

				// ������ ������� ��� ������ ����� � �������
				FuncForWriteTableFromFile(table, tool_1[i], id_1[i]);
			}
		}

		// �����������, ���� ���������� �� ��������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("���������� �� ��������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� � �����
		result = "ʳ������ ��������� �����������: " + to_string(count);
	}

	// ��������, �� ������� ������ � �������
	else if (CheckTable == true) {

		bool check = false; // ��������� ��� �������� �� ��� ���� � ���� ���
		int count = 0; // ˳������� ��������� �����������

		// ������� ��� ���������� ���������� � �������
		vector<Tool> tool;
		vector<string> name, type, subtype, country, review;
		vector<double> price;
		vector<int> id;

		// ������ ������� ��� ������� ����� � �������
		FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

		// ������ �� ������� ����������� � �������
		for (int i = 0; i < tool.size(); i++) {
			// ��������, �� ������� ����� ����������� � ������� ������
			if (tool[i].IsCountryMatching(country_to_find)) {
				if (check == false) {
					table->Clear();
				}
				count++;
				check = true;

				// ������ ������� ��� ������ ����� � �������
				FuncForWriteTableFromFile(table, tool[i], id[i]);
			}
		}

		// �����������, ���� ���������� �� ��������
		if (count == 0) {
			System::Windows::Forms::MessageBox::Show("���������� �� ��������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// ���������� ���������� � �����
		result = "ʳ������ ��������� �����������: " + to_string(count);

	}

	// ���������� ������ ��� �������� �������
	return table;
}


// ������� ��� ������ ��������� ������ � ��� ����� ����������� � ������� ��� ����
DataTable^ PhraseSearch(DataGridView^ ToolList, DataTable^ table, bool checkFile, bool checkTable, string filename, string textNameStr) {
	// ���� ��� ��������� ���������� ��� �����������
	vector<string> name, type, subtype, country, review;
	vector<int> id;
	vector<double> price;
	vector<Tool> tools;
	// ���� �������� �������, � ��� ������ ���������� ���������� ������
	DataTable^ new_table = table;

	int ii = 0; // ˳������� ��������� �����������
	bool tableCheck = true; // ��������� ��� ��������, �� �� ������� �������

	// ���� ������� ������ � ����
	if (checkFile == true) {
		// ���������� ����� � ����� � ���������� ������� �����������
		FuncForReadFile(tools, filename, id);
		// ��������, �� ������� �� �������
		if (ToolList->ColumnCount == 0) {
			tableCheck = false;
			System::Windows::Forms::MessageBox::Show("Table is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	// ���� ������� ������ � �������
	else if (checkTable == true) {
		// ���������� ����� � ������� � ���������� ������� �����������
		FuncForReadTable(ToolList, tools, name, type, subtype, country, price, review, id);
	}

	// ����� � ������ ����������� �� �������� �������
	if (tableCheck == true) {
		for (int i = 0; i < tools.size(); i++) {
			// ��������, �� ��������� ����� � ����-����� ��� �����������
			if ((tools[i].GetName().find(textNameStr) != std::string::npos) ||
				(tools[i].GetType().find(textNameStr) != std::string::npos) ||
				(tools[i].GetSubtype().find(textNameStr) != std::string::npos) ||
				(tools[i].GetCountry().find(textNameStr) != std::string::npos)) {
				if (ii == 0) {
					new_table->Clear(); // �������� ����������, ���� �� ������ ��������� ����������
				}
				ii++;
				Tool tool = tools[i];
				string name, type, subtype, country, reviews;
				double price;

				tool.GetInfo(name, type, subtype, country, price, reviews);

				// ��������� ������ ����� � ����������� ��� ���������� �� ���� ��������� �� ������� ����������
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

	// ���������� ������� � ������������ ������
	return new_table;
}

