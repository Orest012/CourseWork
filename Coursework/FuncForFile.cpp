#include "MyLib.h"

// ������� ��� ���������� ����� � ����� �� ���������� ������� ����������� �� ����� �������
void FuncForReadFile(vector<Tool>& tool, string filename, vector<int>& id) {
	// ���������� ������� ��� ��������� ����� ��� ����������� �� ���� ���������
	vector<string> name, type, subtype, country, review;
	vector<double> price;

	// ³������� ����� ��� �������
	ifstream file(filename);
	string line;
	string reviews;
	bool save_tool_info = false;

	// ���������� ����� �� ������
	while (std::getline(file, line)) {
		// �������� �������� ID � �����
		if (line.find("ID: ") != std::string::npos) {
			// ��������� �������� ID � ������
			id.push_back(std::stoi(line.substr(4)));
		}
		// ���������� ����� �����������
		else if (line.find("Name: ") != std::string::npos) {
			name.push_back(line.substr(6));
		}
		// ���������� ���� �����������
		else if (line.find("Type: ") != std::string::npos) {
			type.push_back(line.substr(6));
		}
		// ���������� ������ �����������
		else if (line.find("Subtype: ") != std::string::npos) {
			subtype.push_back(line.substr(9));
		}
		// ���������� ����� ����������� �����������
		else if (line.find("Country: ") != std::string::npos) {
			country.push_back(line.substr(9));
		}
		// ���������� ���� �����������
		else if (line.find("Price: ") != std::string::npos) {
			// ��������� ���� �� ����������� � double
			std::string priceCheck = line.substr(7);
			size_t commaPos = priceCheck.find(",");
			if (commaPos != std::string::npos) {
				priceCheck[commaPos] = '.';
			}
			price.push_back(std::stod(priceCheck));
		}
		// ���������� ������ ��� ����������
		else if (line.find("Reviews:") != std::string::npos) {
			reviews = "";
			save_tool_info = true;
		}
		// ���������� ������� ����� ������ �� ��������� ���� �� ������ ������
		else if (!line.empty() && save_tool_info) {
			reviews += line + "\n";
		}
		// ���������� ������ ������ � ������
		else if (line.empty()) {
			review.push_back(reviews);
		}
	}

	// ���������� ������� ����������� � ���������� ������
	for (int i = 0; i < name.size(); i++) {
		cout << "\nPrice = " << price[i] << "\n";
		tool.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
	}

	// �������� �����
	file.close();
}

// ������� ��� ������ ���������� ��� ���������� � ����� � �������
void FuncForWriteTableFromFile(DataTable^ table, Tool tool, int id) {
	// ���������� ������ ��� ��������� ���������� ��� ����������
	string name, type, subtype, country, reviews;
	double price;

	// ��������� ���������� ��� ����������
	tool.GetInfo(name, type, subtype, country, price, reviews);

	// ��������� ������ ����� ������� �� ���������� ���� ����������
	DataRow^ row = table->NewRow();
	row["ID"] = id;
	row["Name"] = gcnew System::String(name.c_str());
	row["Type"] = gcnew System::String(type.c_str());
	row["Subtype"] = gcnew System::String(subtype.c_str());
	row["Country"] = gcnew System::String(country.c_str());
	row["Price $"] = price;
	row["Reviews"] = gcnew System::String(reviews.c_str());

	// ��������� ����� �� �������
	table->Rows->Add(row);
}
