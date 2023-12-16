#include "MyForm.h"
#include <stdio.h>
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Windows::Forms;

void print();
// ������� ��� ������� ����� � DataGridView �� ���������� ������� �� ID
void FuncForReadTable(DataGridView^ ToolList, vector<Tool>& tools, vector<string>& name, vector<string>& type, vector<string>& subtype, vector<string>& country, vector<double>& price, vector<string>& review, vector<int>& id);
// ������� ��� ������ ����� � ������� � DataTable
void FuncForWriteTable(DataTable^ table, vector<Tool> tools, vector<int> id);
// ������� ��� ��������� ������ ����������� �� DataTable
void FuncForWriteTableFromFile(DataTable^ table, Tool tool, int id);
// ������� ��� ������� ����� � ����� �� ID
void FuncForReadFile(vector<Tool>& tool, string filename, vector<int>& id);
// ������� ���������� ����������� �� ����� (�� ���������� ��� ���������)
void selectionSort(bool up, vector<Tool>& arr, int size, vector<int>& id);
// ������� ��������� DataTable �� ������� ����� � DataGridView ��� �����
void CreateTable(DataGridView^ ToolList, DataTable^ table, string filename);
// ��������, �� � DataGridView ������
bool CheckEmptyTable(DataGridView^ ToolList);
// ����� �� ����� �����������
DataTable^ FindByType(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// ����� �� ������� �����������
DataTable^ FindBySubtype(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// ����� �� ������ �����������
DataTable^ FindByName(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// ����� ����������� �� ������ ���������
DataTable^ FindToolByCountry(DataGridView^ ToolList, DataTable^ table, string& result, bool CheckTable, bool CheckFile, const std::string& filename, const std::string& country_to_find);
// ���� ���������� ��� ����������
DataTable^ ChangeInfo(DataGridView^ ToolList, string new_type, string new_subtype, string new_country, int index, string filename, DataTable^ table);
// ���� ���� �����������
DataTable^ PriceChange(DataGridView^ ToolList, double new_price, int index, string filename, DataTable^ table);
// ���� ������ ��� ����������
DataTable^ RevChange(DataGridView^ ToolList, string new_rev, int index, string filename, DataTable^ table);
// ��������� ������ ��� ����������
DataTable^ DeleteRev(DataGridView^ ToolList, string ParticularRev, int index, string filename, DataTable^ table);
// ����� ����������� �� ������
DataTable^ PhraseSearch(DataGridView^ ToolList, DataTable^ table, bool checkFile, bool checkTable, string filename, string textNameStr);

//class DataExcept : public std::exception {};