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
// Функція для читання даних з DataGridView та заповнення векторів та ID
void FuncForReadTable(DataGridView^ ToolList, vector<Tool>& tools, vector<string>& name, vector<string>& type, vector<string>& subtype, vector<string>& country, vector<double>& price, vector<string>& review, vector<int>& id);
// Функція для запису даних з векторів у DataTable
void FuncForWriteTable(DataTable^ table, vector<Tool> tools, vector<int> id);
// Функція для додавання одного інструменту до DataTable
void FuncForWriteTableFromFile(DataTable^ table, Tool tool, int id);
// Функція для читання даних з файлу та ID
void FuncForReadFile(vector<Tool>& tool, string filename, vector<int>& id);
// Функція сортування інструментів за типом (за зростанням або спаданням)
void selectionSort(bool up, vector<Tool>& arr, int size, vector<int>& id);
// Функція створення DataTable та читання даних з DataGridView або файлу
void CreateTable(DataGridView^ ToolList, DataTable^ table, string filename);
// Перевірка, чи є DataGridView пустим
bool CheckEmptyTable(DataGridView^ ToolList);
// Пошук за типом інструменту
DataTable^ FindByType(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// Пошук за підтипом інструменту
DataTable^ FindBySubtype(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// Пошук за назвою інструменту
DataTable^ FindByName(DataGridView^ ToolList, bool CheckFile, bool CheckTable, string& result, string word_1, string word_2, string word_3, string filename, DataTable^ table);
// Пошук інструментів за країною виробника
DataTable^ FindToolByCountry(DataGridView^ ToolList, DataTable^ table, string& result, bool CheckTable, bool CheckFile, const std::string& filename, const std::string& country_to_find);
// Зміна інформації про інструмент
DataTable^ ChangeInfo(DataGridView^ ToolList, string new_type, string new_subtype, string new_country, int index, string filename, DataTable^ table);
// Зміна ціни інструменту
DataTable^ PriceChange(DataGridView^ ToolList, double new_price, int index, string filename, DataTable^ table);
// Зміна відгуку про інструмент
DataTable^ RevChange(DataGridView^ ToolList, string new_rev, int index, string filename, DataTable^ table);
// Видалення відгуку про інструмент
DataTable^ DeleteRev(DataGridView^ ToolList, string ParticularRev, int index, string filename, DataTable^ table);
// Пошук інструментів за фразою
DataTable^ PhraseSearch(DataGridView^ ToolList, DataTable^ table, bool checkFile, bool checkTable, string filename, string textNameStr);

//class DataExcept : public std::exception {};