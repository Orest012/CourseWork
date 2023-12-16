#pragma once

#include <string>
#include <vcclr.h>
#include <fstream>
#include "Tool.h"
#include <msclr/marshal_cppstd.h>
#include <algorithm>
#include <execution>
#include "MyLib.h"
#include "MyExeption.cpp"

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:














	private: System::Windows::Forms::Button^ Clear;

	private: System::Windows::Forms::Button^ Create;


	private: System::Windows::Forms::DataGridView^ ToolList;













	private: System::Windows::Forms::Button^ Sort;




	private: System::Windows::Forms::Button^ ChangePrice;










	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ FileText;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;




	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::TextBox^ TypeText;
	private: System::Windows::Forms::TextBox^ SubtypeText;
	private: System::Windows::Forms::TextBox^ NameText;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ Pri;
	private: System::Windows::Forms::TextBox^ PriceText;
	private: System::Windows::Forms::Button^ Change;
	private: System::Windows::Forms::TextBox^ ID;
	private: System::Windows::Forms::Label^ ID_1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ New_subtype;
	private: System::Windows::Forms::TextBox^ New_type;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ New_country;
private: System::Windows::Forms::CheckBox^ CheckTable;
private: System::Windows::Forms::CheckBox^ CheckFile;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ SearchByCountry;
private: System::Windows::Forms::TextBox^ Country;
private: System::Windows::Forms::TabPage^ tabPage4;


private: System::Windows::Forms::Button^ DeleteReview;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ UserText;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ ChangeReview;
private: System::Windows::Forms::TextBox^ RevText;
private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;


private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
private: System::Windows::Forms::TextBox^ IdDel;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::CheckBox^ Descending;
private: System::Windows::Forms::CheckBox^ Growth;
private: System::Windows::Forms::Button^ SearchByPhrase;

private: System::Windows::Forms::TextBox^ FileName;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ PhraseText;


private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::ComboBox^ UserNameCom;
private: System::Windows::Forms::ComboBox^ RevCom;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::TextBox^ ReviewTxt;

private: System::Windows::Forms::TextBox^ UserTxt;

private: System::Windows::Forms::TextBox^ CountryTxt;

private: System::Windows::Forms::TextBox^ TypeTxt;
private: System::Windows::Forms::TextBox^ PriceTxt;



private: System::Windows::Forms::TextBox^ SubtypeTxt;

private: System::Windows::Forms::TextBox^ NameTxt;


private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ Add_Tool;
private: System::Windows::Forms::Button^ Delete_Tool;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ IdTxt;
private: System::Windows::Forms::ToolStrip^ toolStrip1;

private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
private: System::Windows::Forms::ToolStripLabel^ toolStripButton1;

private: System::Windows::Forms::ToolStripButton^ toolStripButton3;


private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::DataGridView^ SearchNewTool;
private: System::ComponentModel::IContainer^ components;

	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Create = (gcnew System::Windows::Forms::Button());
			this->ToolList = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->ChangePrice = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->readToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->FileText = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->PhraseText = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SearchByPhrase = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->FileName = (gcnew System::Windows::Forms::TextBox());
			this->CheckTable = (gcnew System::Windows::Forms::CheckBox());
			this->CheckFile = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SearchByCountry = (gcnew System::Windows::Forms::Button());
			this->Country = (gcnew System::Windows::Forms::TextBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->TypeText = (gcnew System::Windows::Forms::TextBox());
			this->SubtypeText = (gcnew System::Windows::Forms::TextBox());
			this->NameText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Pri = (gcnew System::Windows::Forms::Label());
			this->PriceText = (gcnew System::Windows::Forms::TextBox());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->ID_1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->New_subtype = (gcnew System::Windows::Forms::TextBox());
			this->New_type = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->New_country = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->UserNameCom = (gcnew System::Windows::Forms::ComboBox());
			this->RevCom = (gcnew System::Windows::Forms::ComboBox());
			this->Descending = (gcnew System::Windows::Forms::CheckBox());
			this->Growth = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->IdDel = (gcnew System::Windows::Forms::TextBox());
			this->DeleteReview = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->UserText = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ChangeReview = (gcnew System::Windows::Forms::Button());
			this->RevText = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->IdTxt = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Add_Tool = (gcnew System::Windows::Forms::Button());
			this->Delete_Tool = (gcnew System::Windows::Forms::Button());
			this->ReviewTxt = (gcnew System::Windows::Forms::TextBox());
			this->UserTxt = (gcnew System::Windows::Forms::TextBox());
			this->CountryTxt = (gcnew System::Windows::Forms::TextBox());
			this->TypeTxt = (gcnew System::Windows::Forms::TextBox());
			this->PriceTxt = (gcnew System::Windows::Forms::TextBox());
			this->SubtypeTxt = (gcnew System::Windows::Forms::TextBox());
			this->NameTxt = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->SearchNewTool = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToolList))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchNewTool))->BeginInit();
			this->SuspendLayout();
			// 
			// Clear
			// 
			this->Clear->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Clear->Location = System::Drawing::Point(213, 171);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(158, 23);
			this->Clear->TabIndex = 8;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// Create
			// 
			this->Create->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Create->Location = System::Drawing::Point(213, 142);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(158, 23);
			this->Create->TabIndex = 9;
			this->Create->Text = L"Create";
			this->Create->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->Create->UseVisualStyleBackColor = true;
			this->Create->Click += gcnew System::EventHandler(this, &MyForm::Create_Click);
			// 
			// ToolList
			// 
			this->ToolList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->ToolList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ToolList->ContextMenuStrip = this->contextMenuStrip1;
			this->ToolList->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->ToolList->Location = System::Drawing::Point(0, 0);
			this->ToolList->Name = L"ToolList";
			this->ToolList->ReadOnly = true;
			this->ToolList->RowHeadersWidth = 51;
			this->ToolList->RowTemplate->Height = 24;
			this->ToolList->Size = System::Drawing::Size(776, 391);
			this->ToolList->TabIndex = 12;
			this->ToolList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::ToolList_CellContentClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clearToolStripMenuItem,
					this->saveToolStripMenuItem, this->readToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(113, 76);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// Sort
			// 
			this->Sort->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Sort->Location = System::Drawing::Point(150, 317);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(245, 23);
			this->Sort->TabIndex = 22;
			this->Sort->Text = L"Sort table";
			this->Sort->UseVisualStyleBackColor = true;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// ChangePrice
			// 
			this->ChangePrice->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ChangePrice->Location = System::Drawing::Point(299, 259);
			this->ChangePrice->Name = L"ChangePrice";
			this->ChangePrice->Size = System::Drawing::Size(180, 56);
			this->ChangePrice->TabIndex = 27;
			this->ChangePrice->Text = L"Change price";
			this->ChangePrice->UseVisualStyleBackColor = true;
			this->ChangePrice->Click += gcnew System::EventHandler(this, &MyForm::ChangePrice_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->readToolStripMenuItem1,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1387, 28);
			this->menuStrip1->TabIndex = 37;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// readToolStripMenuItem1
			// 
			this->readToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem2,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->readToolStripMenuItem1->Name = L"readToolStripMenuItem1";
			this->readToolStripMenuItem1->Size = System::Drawing::Size(46, 24);
			this->readToolStripMenuItem1->Text = L"File";
			// 
			// readToolStripMenuItem2
			// 
			this->readToolStripMenuItem2->Name = L"readToolStripMenuItem2";
			this->readToolStripMenuItem2->Size = System::Drawing::Size(128, 26);
			this->readToolStripMenuItem2->Text = L"Read";
			this->readToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem2_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(133, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// FileText
			// 
			this->FileText->Location = System::Drawing::Point(228, 119);
			this->FileText->Name = L"FileText";
			this->FileText->Size = System::Drawing::Size(132, 22);
			this->FileText->TabIndex = 38;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(234, 100);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 16);
			this->label10->TabIndex = 39;
			this->label10->Text = L"File name (with .txt)";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(849, 31);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(538, 416);
			this->tabControl1->TabIndex = 40;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->Create);
			this->tabPage1->Controls->Add(this->Clear);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->FileText);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(530, 387);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Create";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->PhraseText);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->SearchByPhrase);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->FileName);
			this->tabPage2->Controls->Add(this->CheckTable);
			this->tabPage2->Controls->Add(this->CheckFile);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->SearchByCountry);
			this->tabPage2->Controls->Add(this->Country);
			this->tabPage2->Controls->Add(this->Search);
			this->tabPage2->Controls->Add(this->TypeText);
			this->tabPage2->Controls->Add(this->SubtypeText);
			this->tabPage2->Controls->Add(this->NameText);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(530, 387);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Search";
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(380, 249);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 16);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Phrase";
			// 
			// PhraseText
			// 
			this->PhraseText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PhraseText->Location = System::Drawing::Point(339, 268);
			this->PhraseText->Name = L"PhraseText";
			this->PhraseText->Size = System::Drawing::Size(132, 22);
			this->PhraseText->TabIndex = 41;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(211, 169);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 16);
			this->label15->TabIndex = 40;
			this->label15->Text = L"File name (with .txt)";
			// 
			// SearchByPhrase
			// 
			this->SearchByPhrase->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SearchByPhrase->Location = System::Drawing::Point(290, 296);
			this->SearchByPhrase->Name = L"SearchByPhrase";
			this->SearchByPhrase->Size = System::Drawing::Size(230, 33);
			this->SearchByPhrase->TabIndex = 40;
			this->SearchByPhrase->Text = L"Search by phrase";
			this->SearchByPhrase->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->SearchByPhrase->UseVisualStyleBackColor = true;
			this->SearchByPhrase->Click += gcnew System::EventHandler(this, &MyForm::Ch_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(3, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 16);
			this->label14->TabIndex = 34;
			this->label14->Text = L"  ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(3, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 16);
			this->label13->TabIndex = 33;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// FileName
			// 
			this->FileName->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FileName->Location = System::Drawing::Point(196, 188);
			this->FileName->Name = L"FileName";
			this->FileName->Size = System::Drawing::Size(132, 22);
			this->FileName->TabIndex = 32;
			this->FileName->TextChanged += gcnew System::EventHandler(this, &MyForm::FileName_TextChanged);
			// 
			// CheckTable
			// 
			this->CheckTable->AutoSize = true;
			this->CheckTable->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CheckTable->Location = System::Drawing::Point(16, 48);
			this->CheckTable->Name = L"CheckTable";
			this->CheckTable->Size = System::Drawing::Size(65, 20);
			this->CheckTable->TabIndex = 31;
			this->CheckTable->Text = L"Table";
			this->CheckTable->UseVisualStyleBackColor = true;
			this->CheckTable->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckTable_CheckedChanged);
			// 
			// CheckFile
			// 
			this->CheckFile->AutoSize = true;
			this->CheckFile->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CheckFile->Location = System::Drawing::Point(16, 22);
			this->CheckFile->Name = L"CheckFile";
			this->CheckFile->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CheckFile->Size = System::Drawing::Size(51, 20);
			this->CheckFile->TabIndex = 30;
			this->CheckFile->Text = L"File";
			this->CheckFile->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(129, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Country";
			// 
			// SearchByCountry
			// 
			this->SearchByCountry->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SearchByCountry->Location = System::Drawing::Point(39, 296);
			this->SearchByCountry->Name = L"SearchByCountry";
			this->SearchByCountry->Size = System::Drawing::Size(245, 33);
			this->SearchByCountry->TabIndex = 28;
			this->SearchByCountry->Text = L"Search by Country";
			this->SearchByCountry->UseVisualStyleBackColor = true;
			this->SearchByCountry->Click += gcnew System::EventHandler(this, &MyForm::SearchByCountry_Click_1);
			// 
			// Country
			// 
			this->Country->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Country->Location = System::Drawing::Point(94, 268);
			this->Country->Name = L"Country";
			this->Country->Size = System::Drawing::Size(132, 22);
			this->Country->TabIndex = 27;
			// 
			// Search
			// 
			this->Search->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Search->Location = System::Drawing::Point(141, 132);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(245, 23);
			this->Search->TabIndex = 17;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm::Search_Click_1);
			// 
			// TypeText
			// 
			this->TypeText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TypeText->Location = System::Drawing::Point(278, 36);
			this->TypeText->Name = L"TypeText";
			this->TypeText->Size = System::Drawing::Size(132, 22);
			this->TypeText->TabIndex = 16;
			// 
			// SubtypeText
			// 
			this->SubtypeText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SubtypeText->Location = System::Drawing::Point(196, 89);
			this->SubtypeText->Name = L"SubtypeText";
			this->SubtypeText->Size = System::Drawing::Size(132, 22);
			this->SubtypeText->TabIndex = 15;
			// 
			// NameText
			// 
			this->NameText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NameText->Location = System::Drawing::Point(107, 36);
			this->NameText->Name = L"NameText";
			this->NameText->Size = System::Drawing::Size(132, 22);
			this->NameText->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(231, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Subtype";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(317, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(152, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->Controls->Add(this->Pri);
			this->tabPage3->Controls->Add(this->PriceText);
			this->tabPage3->Controls->Add(this->Change);
			this->tabPage3->Controls->Add(this->ID);
			this->tabPage3->Controls->Add(this->ID_1);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->New_subtype);
			this->tabPage3->Controls->Add(this->New_type);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->New_country);
			this->tabPage3->Controls->Add(this->ChangePrice);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(530, 387);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Change";
			// 
			// Pri
			// 
			this->Pri->AutoSize = true;
			this->Pri->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Pri->Location = System::Drawing::Point(400, 98);
			this->Pri->Name = L"Pri";
			this->Pri->Size = System::Drawing::Size(38, 16);
			this->Pri->TabIndex = 31;
			this->Pri->Text = L"Price";
			// 
			// PriceText
			// 
			this->PriceText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PriceText->Location = System::Drawing::Point(356, 117);
			this->PriceText->Name = L"PriceText";
			this->PriceText->Size = System::Drawing::Size(132, 22);
			this->PriceText->TabIndex = 30;
			this->PriceText->TextChanged += gcnew System::EventHandler(this, &MyForm::PriceText_TextChanged);
			// 
			// Change
			// 
			this->Change->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Change->Location = System::Drawing::Point(85, 259);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(180, 56);
			this->Change->TabIndex = 28;
			this->Change->Text = L"Change\r\ncountry, type\r\nsubtype\r\n";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &MyForm::Change_Click_1);
			// 
			// ID
			// 
			this->ID->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ID->Location = System::Drawing::Point(145, 231);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(283, 22);
			this->ID->TabIndex = 27;
			// 
			// ID_1
			// 
			this->ID_1->AutoSize = true;
			this->ID_1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ID_1->Location = System::Drawing::Point(271, 209);
			this->ID_1->Name = L"ID_1";
			this->ID_1->Size = System::Drawing::Size(20, 16);
			this->ID_1->TabIndex = 26;
			this->ID_1->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(164, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"New type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(313, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"New subtype";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// New_subtype
			// 
			this->New_subtype->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->New_subtype->Location = System::Drawing::Point(285, 161);
			this->New_subtype->Name = L"New_subtype";
			this->New_subtype->Size = System::Drawing::Size(132, 22);
			this->New_subtype->TabIndex = 23;
			// 
			// New_type
			// 
			this->New_type->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->New_type->Location = System::Drawing::Point(136, 161);
			this->New_type->Name = L"New_type";
			this->New_type->Size = System::Drawing::Size(132, 22);
			this->New_type->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(92, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"New country";
			// 
			// New_country
			// 
			this->New_country->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->New_country->Location = System::Drawing::Point(64, 117);
			this->New_country->Name = L"New_country";
			this->New_country->Size = System::Drawing::Size(132, 22);
			this->New_country->TabIndex = 19;
			this->New_country->TextChanged += gcnew System::EventHandler(this, &MyForm::New_country_TextChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->UserNameCom);
			this->tabPage4->Controls->Add(this->RevCom);
			this->tabPage4->Controls->Add(this->Descending);
			this->tabPage4->Controls->Add(this->Growth);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->IdDel);
			this->tabPage4->Controls->Add(this->Sort);
			this->tabPage4->Controls->Add(this->DeleteReview);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->UserText);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->ChangeReview);
			this->tabPage4->Controls->Add(this->RevText);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(530, 387);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Delete/Sort";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(343, 142);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 16);
			this->label18->TabIndex = 53;
			this->label18->Text = L"Review";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->Location = System::Drawing::Point(336, 98);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 16);
			this->label17->TabIndex = 52;
			this->label17->Text = L"User name";
			// 
			// UserNameCom
			// 
			this->UserNameCom->FormattingEnabled = true;
			this->UserNameCom->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"JohnDoe" });
			this->UserNameCom->Location = System::Drawing::Point(297, 117);
			this->UserNameCom->Name = L"UserNameCom";
			this->UserNameCom->Size = System::Drawing::Size(167, 24);
			this->UserNameCom->TabIndex = 43;
			// 
			// RevCom
			// 
			this->RevCom->FormattingEnabled = true;
			this->RevCom->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Great screwdriver for home use!" });
			this->RevCom->Location = System::Drawing::Point(297, 159);
			this->RevCom->Name = L"RevCom";
			this->RevCom->Size = System::Drawing::Size(167, 24);
			this->RevCom->TabIndex = 44;
			// 
			// Descending
			// 
			this->Descending->AutoSize = true;
			this->Descending->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Descending->Location = System::Drawing::Point(284, 291);
			this->Descending->Name = L"Descending";
			this->Descending->Size = System::Drawing::Size(180, 20);
			this->Descending->TabIndex = 51;
			this->Descending->Text = L"Sort by descending order";
			this->Descending->UseVisualStyleBackColor = true;
			// 
			// Growth
			// 
			this->Growth->AutoSize = true;
			this->Growth->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Growth->Location = System::Drawing::Point(117, 291);
			this->Growth->Name = L"Growth";
			this->Growth->Size = System::Drawing::Size(131, 20);
			this->Growth->TabIndex = 50;
			this->Growth->Text = L"Sorting by growth";
			this->Growth->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(258, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L"ID";
			// 
			// IdDel
			// 
			this->IdDel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->IdDel->Location = System::Drawing::Point(197, 59);
			this->IdDel->Name = L"IdDel";
			this->IdDel->Size = System::Drawing::Size(132, 22);
			this->IdDel->TabIndex = 33;
			this->IdDel->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// DeleteReview
			// 
			this->DeleteReview->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DeleteReview->Location = System::Drawing::Point(275, 189);
			this->DeleteReview->Name = L"DeleteReview";
			this->DeleteReview->Size = System::Drawing::Size(245, 28);
			this->DeleteReview->TabIndex = 47;
			this->DeleteReview->Text = L"Delete review";
			this->DeleteReview->UseVisualStyleBackColor = true;
			this->DeleteReview->Click += gcnew System::EventHandler(this, &MyForm::DeleteReview_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(111, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 16);
			this->label9->TabIndex = 46;
			this->label9->Text = L"User name";
			// 
			// UserText
			// 
			this->UserText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UserText->Location = System::Drawing::Point(82, 117);
			this->UserText->Name = L"UserText";
			this->UserText->Size = System::Drawing::Size(132, 22);
			this->UserText->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(123, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 16);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Review";
			// 
			// ChangeReview
			// 
			this->ChangeReview->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ChangeReview->Location = System::Drawing::Point(24, 189);
			this->ChangeReview->Name = L"ChangeReview";
			this->ChangeReview->Size = System::Drawing::Size(245, 28);
			this->ChangeReview->TabIndex = 43;
			this->ChangeReview->Text = L"Add review";
			this->ChangeReview->UseVisualStyleBackColor = true;
			this->ChangeReview->Click += gcnew System::EventHandler(this, &MyForm::ChangeReview_Click_1);
			// 
			// RevText
			// 
			this->RevText->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RevText->Location = System::Drawing::Point(82, 161);
			this->RevText->Name = L"RevText";
			this->RevText->Size = System::Drawing::Size(132, 22);
			this->RevText->TabIndex = 42;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage5->Controls->Add(this->label26);
			this->tabPage5->Controls->Add(this->IdTxt);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->Add_Tool);
			this->tabPage5->Controls->Add(this->Delete_Tool);
			this->tabPage5->Controls->Add(this->ReviewTxt);
			this->tabPage5->Controls->Add(this->UserTxt);
			this->tabPage5->Controls->Add(this->CountryTxt);
			this->tabPage5->Controls->Add(this->TypeTxt);
			this->tabPage5->Controls->Add(this->PriceTxt);
			this->tabPage5->Controls->Add(this->SubtypeTxt);
			this->tabPage5->Controls->Add(this->NameTxt);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(530, 387);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Add/Delete Tool";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->Location = System::Drawing::Point(246, 134);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(20, 16);
			this->label26->TabIndex = 59;
			this->label26->Text = L"ID";
			// 
			// IdTxt
			// 
			this->IdTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->IdTxt->Location = System::Drawing::Point(199, 153);
			this->IdTxt->Name = L"IdTxt";
			this->IdTxt->Size = System::Drawing::Size(131, 22);
			this->IdTxt->TabIndex = 58;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(394, 137);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 16);
			this->label25->TabIndex = 57;
			this->label25->Text = L"Review";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Location = System::Drawing::Point(405, 89);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(36, 16);
			this->label24->TabIndex = 56;
			this->label24->Text = L"User";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(246, 89);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 16);
			this->label19->TabIndex = 51;
			this->label19->Text = L"Price";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Location = System::Drawing::Point(69, 89);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 16);
			this->label20->TabIndex = 52;
			this->label20->Text = L"Country";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(389, 37);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 16);
			this->label21->TabIndex = 53;
			this->label21->Text = L"Subtype";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(235, 37);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(39, 16);
			this->label22->TabIndex = 54;
			this->label22->Text = L"Type";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Location = System::Drawing::Point(69, 37);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 16);
			this->label23->TabIndex = 55;
			this->label23->Text = L"Name";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// Add_Tool
			// 
			this->Add_Tool->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Add_Tool->Location = System::Drawing::Point(31, 136);
			this->Add_Tool->Name = L"Add_Tool";
			this->Add_Tool->Size = System::Drawing::Size(130, 38);
			this->Add_Tool->TabIndex = 8;
			this->Add_Tool->Text = L"Add tool";
			this->Add_Tool->UseVisualStyleBackColor = true;
			this->Add_Tool->Click += gcnew System::EventHandler(this, &MyForm::Add_Tool_Click);
			// 
			// Delete_Tool
			// 
			this->Delete_Tool->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Delete_Tool->Location = System::Drawing::Point(31, 180);
			this->Delete_Tool->Name = L"Delete_Tool";
			this->Delete_Tool->Size = System::Drawing::Size(130, 38);
			this->Delete_Tool->TabIndex = 7;
			this->Delete_Tool->Text = L"Delete tool";
			this->Delete_Tool->UseVisualStyleBackColor = true;
			this->Delete_Tool->Click += gcnew System::EventHandler(this, &MyForm::Delete_Tool_Click);
			// 
			// ReviewTxt
			// 
			this->ReviewTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ReviewTxt->Location = System::Drawing::Point(356, 153);
			this->ReviewTxt->Name = L"ReviewTxt";
			this->ReviewTxt->Size = System::Drawing::Size(131, 22);
			this->ReviewTxt->TabIndex = 6;
			// 
			// UserTxt
			// 
			this->UserTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UserTxt->Location = System::Drawing::Point(356, 108);
			this->UserTxt->Name = L"UserTxt";
			this->UserTxt->Size = System::Drawing::Size(131, 22);
			this->UserTxt->TabIndex = 5;
			// 
			// CountryTxt
			// 
			this->CountryTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CountryTxt->Location = System::Drawing::Point(30, 108);
			this->CountryTxt->Name = L"CountryTxt";
			this->CountryTxt->Size = System::Drawing::Size(131, 22);
			this->CountryTxt->TabIndex = 4;
			// 
			// TypeTxt
			// 
			this->TypeTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TypeTxt->Location = System::Drawing::Point(199, 56);
			this->TypeTxt->Name = L"TypeTxt";
			this->TypeTxt->Size = System::Drawing::Size(131, 22);
			this->TypeTxt->TabIndex = 3;
			this->TypeTxt->TextChanged += gcnew System::EventHandler(this, &MyForm::Type_TextChanged);
			// 
			// PriceTxt
			// 
			this->PriceTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PriceTxt->Location = System::Drawing::Point(199, 108);
			this->PriceTxt->Name = L"PriceTxt";
			this->PriceTxt->Size = System::Drawing::Size(131, 22);
			this->PriceTxt->TabIndex = 2;
			// 
			// SubtypeTxt
			// 
			this->SubtypeTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SubtypeTxt->Location = System::Drawing::Point(356, 56);
			this->SubtypeTxt->Name = L"SubtypeTxt";
			this->SubtypeTxt->Size = System::Drawing::Size(131, 22);
			this->SubtypeTxt->TabIndex = 1;
			// 
			// NameTxt
			// 
			this->NameTxt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NameTxt->Location = System::Drawing::Point(30, 56);
			this->NameTxt->Name = L"NameTxt";
			this->NameTxt->Size = System::Drawing::Size(131, 22);
			this->NameTxt->TabIndex = 0;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton4, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(41, 431);
			this->toolStrip1->TabIndex = 51;
			this->toolStrip1->Tag = L"";
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->AutoToolTip = true;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::MediumSlateBlue;
			this->toolStripButton1->LinkColor = System::Drawing::Color::Blue;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(40, 70);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->VisitedLinkColor = System::Drawing::Color::Purple;
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(40, 70);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->AutoSize = false;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(40, 70);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(40, 70);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(59, 31);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(784, 416);
			this->tabControl2->TabIndex = 52;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->ToolList);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(776, 387);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Table";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->SearchNewTool);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(776, 387);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Search";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// SearchNewTool
			// 
			this->SearchNewTool->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SearchNewTool->Location = System::Drawing::Point(0, 0);
			this->SearchNewTool->Name = L"SearchNewTool";
			this->SearchNewTool->RowHeadersWidth = 51;
			this->SearchNewTool->RowTemplate->Height = 24;
			this->SearchNewTool->Size = System::Drawing::Size(776, 391);
			this->SearchNewTool->TabIndex = 0;
			this->SearchNewTool->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::SearchNewTool_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1387, 459);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::DimGray;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(369, 444);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Tool shop";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToolList))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchNewTool))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void New_country_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void PriceText_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void tableToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void FileName_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void CheckTable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void IndexText_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void SearchByCountry_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void Mybot_Click_1(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void Type_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void SearchNewTool_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { }
		   // Оголошення об'єктів DataTable для подальшого використання
		   DataTable^ table;
		   DataTable^ table1;

		   // Функція для перевірки рядка на порожнечу
		   void CheckTape(string str) {
			   if (str.empty()) {
				   throw EmptyList(); // Виняткова ситуація, якщо рядок порожній
			   }

			   // Перевірка, чи складається рядок лише з пробілів
			   for (char c : str) {
				   if (std::isspace(c)) {
					   throw EmptyList(); // Виняткова ситуація, якщо рядок містить лише пробіли
					   return;
				   }
				   if (!std::isspace(c)) {
					   return; // Якщо знайдено не пробіл, то рядок не порожній і не містить лише пробіли
				   }
			   }
		   }

		   // Функція для перевірки файлу за його розширенням та доступністю
		   void CheckOpenFile(string file) {
			   std::ifstream openfile(file);

			   // Перевірка розширення файлу
			   if (file.size() >= 4 && file.substr(file.size() - 4) != ".txt") {
				   throw OpenFileWithTxt(); // Виняткова ситуація, якщо файл не має розширення .txt
			   }
			   // Перевірка доступності файлу
			   else if (!openfile.is_open()) {
				   throw OpenMyFile(); // Виняткова ситуація, якщо файл не вдалося відкрити
			   }
		   }

		   // Функція для перевірки рядка на наявність літер та валідності як числа
		   void IsStr(string str) {
			   bool containsLetter = false;

			   // Перевірка наявності літер у рядку
			   for (char c : str) {
				   if (isalpha(c)) {
					   containsLetter = true;
					   throw NumberExeption("Number has symbols!"); // Виняткова ситуація, якщо у числі є літери
					   break;
				   }
			   }

			   // Перевірка, чи рядок не порожній
			   if (str.empty()) {
				   throw NumberExeption("Enter number!"); // Виняткова ситуація, якщо рядок порожній
			   }

			   // Перевірка, чи рядок не складається лише з пробілів
			   for (char c : str) {
				   if (std::isspace(static_cast<unsigned char>(c))) {
					   throw NumberExeption("Enter number!"); // Виняткова ситуація, якщо рядок містить лише пробіли
				   }
			   }

			   // Спроба конвертувати рядок у число
			   int num = stoi(str);

			   // Перевірка, чи число не є від'ємним
			   if (num < 0) {
				   throw NumberExeption("The number cannot be negative!"); // Виняткова ситуація, якщо число від'ємне
			   }
		   }

		   // Функція для перевірки наявності значень у рядках
		   void IsEmptyStr(string type, string subtype, string country) {
			   // Перевірка, чи рядок типу не порожній
			   if (type.empty()) {
				   throw NumberExeption("Enter type"); // Виняткова ситуація, якщо рядок типу порожній
			   }

			   // Перевірка, чи рядок типу не складається лише з пробілів
			   for (char c : type) {
				   if (std::isspace(static_cast<unsigned char>(c))) {
					   throw NumberExeption("Enter type!"); // Виняткова ситуація, якщо рядок типу містить лише пробіли
				   }
			   }

			   // Перевірка, чи рядок підтипу не порожній
			   if (subtype == " " || subtype == "") {
				   throw NumberExeption("Enter subtype"); // Виняткова ситуація, якщо рядок підтипу порожній
			   }

			   // Перевірка, чи рядок підтипу не складається лише з пробілів
			   for (char c : subtype) {
				   if (std::isspace(static_cast<unsigned char>(c))) {
					   throw NumberExeption("Enter subtype!"); // Виняткова ситуація, якщо рядок підтипу містить лише пробіли
				   }
			   }

			   // Перевірка, чи рядок країни не порожній
			   if (country == " " || country == "") {
				   throw NumberExeption("Enter country"); // Виняткова ситуація, якщо рядок країни порожній
			   }

			   // Перевірка, чи рядок країни не складається лише з пробілів
			   for (char c : country) {
				   if (std::isspace(static_cast<unsigned char>(c))) {
					   throw NumberExeption("Enter country!"); // Виняткова ситуація, якщо рядок країни містить лише пробіли
				   }
			   }
		   }


		   // Функція для заповнення комбо-боксів імен та відгуків
		   void ComboRev(vector<string> username, vector<string> review) {
			   UserNameCom->Items->Clear();
			   RevCom->Items->Clear();

			   // Додавання імен до комбо-бокса
			   for (int i = 0; i < username.size(); i++) {
				   String^ usernameStr = gcnew String(username[i].c_str());  // Перетворення C++ std::string на System::String^
				   UserNameCom->Items->Add(usernameStr);
			   }

			   // Додавання відгуків до комбо-бокса
			   for (int i = 0; i < review.size(); i++) {
				   String^ reviewStr = gcnew String(review[i].c_str());  // Перетворення C++ std::string на System::String^
				   RevCom->Items->Add(reviewStr);
			   }
		   }

		   // Обробник події для кнопки "Ch"
private: System::Void Ch_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримання рядків з текстових полів
	std::string textNameStr = msclr::interop::marshal_as<std::string>(PhraseText->Text);
	string filename = msclr::interop::marshal_as<std::string>(FileName->Text);

	// Локальні змінні для контролю опцій введення
	bool checkFile, checkTable;
	bool b = false, f = false;

	// Вектори для зберігання даних
	vector<string> name, type, subtype, country, review;
	vector<int> id;
	vector<double> price;
	vector<Tool> tools;

	// Створення об'єкту DataTable
	table1 = gcnew DataTable();

	// Додавання колонок до таблиці
	table1->Columns->Add("ID");
	table1->Columns->Add("Name");
	table1->Columns->Add("Type");
	table1->Columns->Add("Subtype");
	table1->Columns->Add("Country");
	table1->Columns->Add("Price $");
	table1->Columns->Add("Reviews");

	try {
		// Перевірка наявності фрази для пошуку
		CheckTape(textNameStr);
	}
	catch (const MyBaseException& ex) {
		// Виведення повідомлення про помилку, якщо фраза відсутня
		System::Windows::Forms::MessageBox::Show("Enter phrase", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Перевірка обраних опцій введення
	if (CheckTable->Checked == true && CheckFile->Checked == false) {
		checkTable = true;
		try {
			// Перевірка наявності елементів у таблиці
			b = CheckEmptyTable(ToolList);
		}
		catch (const EmptyTable& ex) {
			// Виведення повідомлення про помилку, якщо таблиця порожня
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if (CheckFile->Checked == true && CheckTable->Checked == false) {
		checkFile = true;
		try {
			// Перевірка відкриття файлу
			CheckOpenFile(filename);
		}
		catch (const MyBaseException& ex) {
			// Виведення повідомлення про помилку, якщо файл не вдалося відкрити
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			f = true;
		}
	}
	else if (CheckFile->Checked == false && CheckTable->Checked == false) {
		// Виведення повідомлення про помилку, якщо не обрано жодної опції
		System::Windows::Forms::MessageBox::Show("Select one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (CheckFile->Checked == true && CheckTable->Checked == true) {
		// Виведення повідомлення про помилку, якщо обрано обидві опції
		System::Windows::Forms::MessageBox::Show("Select only one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виклик функції для обробки таблиці
	if ((b == false && checkTable == true) || (f == false && b == false && checkFile == true)) {
		table1 = PhraseSearch(ToolList, table1, checkFile, checkTable, filename, textNameStr);
		SearchNewTool->DataSource = table1;
	}
}


	   // Обробник події для кнопки "Sort"
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальні змінні для визначення напрямку сортування та факту сортування
	bool up = false, sort = false;

	// Перевірка вибору напрямку сортування
	if (Descending->Checked == true && Growth->Checked == true) {
		System::Windows::Forms::MessageBox::Show("Select only one sort type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (Descending->Checked == false && Growth->Checked == false) {
		System::Windows::Forms::MessageBox::Show("Select one sort type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (Descending->Checked == false && Growth->Checked == true) {
		up = true;
		sort = true;
	}
	else if (Descending->Checked == true && Growth->Checked == false) {
		up = false;
		sort = true;
	}

	// Виконання сортування, якщо воно обрано
	if (sort == true) {
		// Перевірка наявності елементів у таблиці
		bool b = CheckEmptyTable(ToolList);
		if (b == true) {
			System::Windows::Forms::MessageBox::Show("Table is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			// Оголошення векторів для зберігання даних
			vector<string> name, type, subtype, country, review;
			vector<int> id;
			vector<double> price;
			vector<Tool> tool;
			int ii = 0;

			// Зчитування даних з таблиці
			FuncForReadTable(ToolList, tool, name, type, subtype, country, price, review, id);

			// Додавання нових об'єктів Tool зі зчитаних даних
			for (int i = 0; i < name.size(); i++) {
				tool.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
				ii++;
			}

			// Виклик функції сортування
			selectionSort(up, tool, ii, id);

			// Запис нових даних у таблицю
			FuncForWriteTable(table, tool, id);
		}
	}
}




	   // Обробник події для кнопки "Create"
private: System::Void Create_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримання рядка з текстового поля
	string file = msclr::interop::marshal_as<std::string>(FileText->Text);
	bool b = false;
	bool start = false;

	try {
		// Перевірка наявності фрази для створення файлу
		CheckTape(file);
	}
	catch (const EmptyList& ex) {
		// Виведення повідомлення про помилку, якщо фраза відсутня
		System::Windows::Forms::MessageBox::Show("Enter file name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		b = true;
	}

	// Перевірка виконання першої перевірки та виконання далі, якщо все в порядку
	if (!b) {
		try {
			// Перевірка доступності вказаного файлу
			CheckOpenFile(file);
		}
		catch (OpenFileWithTxt& ex) {
			// Виведення повідомлення про помилку, якщо файл не має розширення .txt
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			start = true;
		}
		catch (OpenMyFile& ex) {
			// Виведення повідомлення про помилку, якщо файл не вдалося відкрити
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			start = true;
		}
	}

	// Виконання подальших дій тільки у разі вдалого виконання обох перевірок
	if (!start && !b) {
		// Оголошення векторів для зберігання даних
		vector<string> username;
		vector<string> myRev;
		Tool tool;

		// Створення таблиці та отримання списку імен та відгуків
		table = tool.CreateTable(table, file, username, myRev);

		// Очистка списків імен та відгуків
		username.clear();
		myRev.clear();

		// Зчитування інших даних з файлу
		std::string line;
		ifstream inFile = ifstream(file);
		while (std::getline(inFile, line)) {
			String^ strLine = gcnew String(line.c_str());

			if (strLine == "Reviews:") {
				String^ reviews = "";
				// Продовження читання та додавання рядків до "reviews"
				while (std::getline(inFile, line) && !line.empty()) {
					reviews += gcnew String(line.c_str()) + Environment::NewLine;

					String^ NewReviews = gcnew String(line.c_str()) + Environment::NewLine;
					string str = msclr::interop::marshal_as<std::string>(NewReviews);
					// Знаходження позиції символу "-"
					size_t pos = str.find(" -");
					username.push_back(str.substr(0, pos));
					myRev.push_back(str.substr(pos + 3));
				}
			}
		}

		// Додавання імен та відгуків до відповідних комбо-боксів
		ComboRev(username, myRev);
		ToolList->DataSource = table;
	}
}

// Обробник події для кнопки "Clear"
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальна змінна для визначення порожньої таблиці
	bool b;

	// Перевірка наявності елементів у таблиці
	try {
		b = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання очищення таблиці, якщо вона не порожня
	if (!b) {
		table->Clear();
	}
}

	   // Обробник події для кнопки "Search"
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) { }


	   // Обробник події для кнопки "ChangePrice"
private: System::Void ChangePrice_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальна змінна для визначення наявності помилок при введенні
	bool b = false;

	// Перевірка введених значень для ідентифікатора
	try {
		string str = msclr::interop::marshal_as<std::string>(ID->Text);
		IsStr(str);
	}
	catch (const NumberExeption& ex) {
		b = true;
		// Виведення повідомлення про помилку для ідентифікатора
		if (typeid(ex) == typeid(NumberExeption)) {
			System::Windows::Forms::MessageBox::Show("Id can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// Перевірка введених значень для нової ціни
	try {
		string str_1 = msclr::interop::marshal_as<std::string>(PriceText->Text);
		IsStr(str_1);
	}
	catch (const NumberExeption& ex) {
		b = true;
		// Виведення повідомлення про помилку для нової ціни
		if (typeid(ex) == typeid(NumberExeption)) {
			System::Windows::Forms::MessageBox::Show("Price can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show("Enter new price", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// Виконання подальших дій тільки у випадку відсутності помилок вводу
	if (b == false) {
		bool ch;

		// Перевірка наявності елементів у таблиці
		try {
			ch = CheckEmptyTable(ToolList);
		}
		catch (const EmptyTable& ex) {
			// Виведення повідомлення про помилку, якщо таблиця порожня
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Виконання подальших дій тільки у випадку, якщо таблиця не порожня
		if (ch == false) {
			System::String^ priceText = PriceText->Text;

			// Конвертація System::String^ в std::string
			std::string priceStdString = msclr::interop::marshal_as<std::string>(priceText);

			// Заміна коми на крапку
			std::replace(priceStdString.begin(), priceStdString.end(), ',', '.');

			// Конвертація std::string в double
			double price = std::stod(priceStdString);

			// Конвертація System::String^ в int
			int id = System::Convert::ToInt32(ID->Text);

			// Виклик функції для зміни ціни та оновлення таблиці
			table = PriceChange(ToolList, price, id, "file.txt", table);
			ToolList->DataSource = table;
		}
	}
}


	   


	   

	   // Обробник події для пункту меню "Fill"
private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримання рядка з текстового поля
	string file = msclr::interop::marshal_as<std::string>(FileText->Text);

	// Оголошення векторів для зберігання імен та відгуків
	vector<string> username;
	vector<string> myRev;
	Tool tool;

	// Виклик функції для створення таблиці та отримання списку імен та відгуків
	table = tool.CreateTable(table, file, username, myRev);
	ComboRev(username, myRev);

	// Задання джерела даних для таблиці
	ToolList->DataSource = table;
}



	   // Обробник події для пункту меню "Clear"
private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Очищення вмісту таблиці
	table->Clear();
}

	   // Обробник події для пункту меню "Save"
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальна змінна для визначення наявності помилок при введенні
	bool b = false;

	// Перевірка наявності елементів у таблиці
	try {
		b = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		b = true;
	}

	// Виконання подальших дій тільки у випадку відсутності помилок вводу
	if (b == false) {
		// Створення діалогового вікна для збереження файлу
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Текстові файли|*.txt|Усі файли|*.*"; // Фільтр для збереження текстових файлів
		saveFileDialog->Title = "Зберегти файл"; // Заголовок діалогового вікна

		// Перевірка, чи користувач вибрав файл для збереження
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Отримання шляху та імені файлу
			String^ fileName = saveFileDialog->FileName;
			string file = msclr::interop::marshal_as<std::string>(saveFileDialog->FileName);

			// Отримання та збереження даних у вибраному файлі
			std::ofstream output(file);
			vector<string> vec_name, vec_type, vec_subtype, vec_country, vec_reviews;
			vector<double> vec_price;
			vector<int> vec_id;
			vector<Tool> tools;
			vector<Tool> tool;

			// Отримання даних з таблиці та їх конвертація
			FuncForReadTable(ToolList, tools, vec_name, vec_type, vec_subtype, vec_country, vec_price, vec_reviews, vec_id);

			// Виправлення формату рядків відгуків
			for (int i = 0; i < vec_reviews.size(); i++) {
				string str = vec_reviews[i];
				str.erase(std::remove(str.begin(), str.end(), '\r'), str.end());
				vec_reviews[i] = str;
			}

			// Створення об'єктів класу Tool та збереження даних
			for (int i = 0; i < vec_name.size(); i++) {
				tool.push_back(Tool(vec_name[i], vec_type[i], vec_subtype[i], vec_country[i], vec_price[i], vec_reviews[i]));
			}
			for (int i = 0; i < vec_id.size(); i++) {
				tool[i].id = vec_id[i];
			}

			// Запис даних у файл
			output << tool;
			output.close();
		}
	}
}

	   // Обробник події для пункту меню "Read"
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення діалогового вікна для вибору файлу для читання
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->RestoreDirectory = true;

	// Перевірка, чи користувач вибрав файл
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Отримання шляху та імені файлу
		String^ fileName = openFileDialog->FileName;
		string file = msclr::interop::marshal_as<std::string>(fileName);

		// Оголошення векторів для зберігання імен та відгуків
		vector<string> username;
		vector<string> myRev;

		// Створення об'єкта Tool та заповнення таблиці даними з файлу
		Tool tool;
		table = tool.CreateTable(table, file, username, myRev);

		// Очищення векторів
		username.clear();
		myRev.clear();

		// Читання відгуків з файлу та їх додавання до відповідних векторів
		std::string line;
		ifstream inFile = ifstream(file);
		while (std::getline(inFile, line)) {
			String^ strLine = gcnew String(line.c_str());

			if (strLine == "Reviews:") {
				String^ reviews = "";
				// Продовження читання та додавання рядків до "reviews"
				while (std::getline(inFile, line) && !line.empty()) {
					reviews += gcnew String(line.c_str()) + Environment::NewLine;

					String^ NewReviews = gcnew String(line.c_str()) + Environment::NewLine;
					string str = msclr::interop::marshal_as<std::string>(NewReviews);
					// Знаходження позиції символу "-"
					size_t pos = str.find(" -");
					username.push_back(str.substr(0, pos));
					myRev.push_back(str.substr(pos + 3));
				}
			}
		}

		// Додавання імен та відгуків до відповідних комбо-боксів
		ComboRev(username, myRev);

		// Задання джерела даних для таблиці
		ToolList->DataSource = table;
	}
}



	   // Обробник події для пункту меню "Read"
private: System::Void readToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення діалогового вікна для вибору файлу для читання
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->RestoreDirectory = true;

	// Перевірка, чи користувач вибрав файл
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Отримання шляху та імені файлу
		String^ fileName = openFileDialog->FileName;
		string file = msclr::interop::marshal_as<std::string>(fileName);

		// Оголошення векторів для зберігання імен та відгуків
		vector<string> username;
		vector<string> myRev;

		// Створення об'єкта Tool та заповнення таблиці даними з файлу
		Tool tool;
		table = tool.CreateTable(table, file, username, myRev);

		// Очищення векторів
		username.clear();
		myRev.clear();

		// Читання відгуків з файлу та їх додавання до відповідних векторів
		std::string line;
		ifstream inFile = ifstream(file);
		while (std::getline(inFile, line)) {
			String^ strLine = gcnew String(line.c_str());

			if (strLine == "Reviews:") {
				String^ reviews = "";
				// Продовження читання та додавання рядків до "reviews"
				while (std::getline(inFile, line) && !line.empty()) {
					reviews += gcnew String(line.c_str()) + Environment::NewLine;

					String^ NewReviews = gcnew String(line.c_str()) + Environment::NewLine;
					string str = msclr::interop::marshal_as<std::string>(NewReviews);
					// Знаходження позиції символу "-"
					size_t pos = str.find(" -");
					username.push_back(str.substr(0, pos));
					myRev.push_back(str.substr(pos + 3));
				}
			}
		}

		// Додавання імен та відгуків до відповідних комбо-боксів
		ComboRev(username, myRev);

		// Задання джерела даних для таблиці
		ToolList->DataSource = table;
	}
}

	   // Обробник події для пункту меню "Write"
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальна змінна для визначення наявності помилок при введенні
	bool b = false;

	// Перевірка наявності елементів у таблиці
	try {
		b = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		b = true;
	}

	// Виконання подальших дій тільки у випадку відсутності помилок вводу
	if (b == false) {
		// Створення діалогового вікна для збереження файлу
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Текстові файли|*.txt|Усі файли|*.*"; // Фільтр для збереження текстових файлів
		saveFileDialog->Title = "Зберегти файл"; // Заголовок діалогового вікна

		// Перевірка, чи користувач вибрав файл для збереження
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Отримання шляху та імені файлу
			String^ fileName = saveFileDialog->FileName;
			string file = msclr::interop::marshal_as<std::string>(saveFileDialog->FileName);

			// Отримання та збереження даних у вибраному файлі
			std::ofstream output(file);
			vector<string> vec_name, vec_type, vec_subtype, vec_country, vec_reviews;
			vector<double> vec_price;
			vector<int> vec_id;
			vector<Tool> tools;
			vector<Tool> tool;

			// Отримання даних з таблиці та їх конвертація
			FuncForReadTable(ToolList, tools, vec_name, vec_type, vec_subtype, vec_country, vec_price, vec_reviews, vec_id);

			// Виправлення формату рядків відгуків
			for (int i = 0; i < vec_reviews.size(); i++) {
				string str = vec_reviews[i];
				str.erase(std::remove(str.begin(), str.end(), '\r'), str.end());
				vec_reviews[i] = str;
			}

			// Створення об'єктів класу Tool та збереження даних
			for (int i = 0; i < vec_name.size(); i++) {
				tool.push_back(Tool(vec_name[i], vec_type[i], vec_subtype[i], vec_country[i], vec_price[i], vec_reviews[i]));
			}
			for (int i = 0; i < vec_id.size(); i++) {
				tool[i].id = vec_id[i];
			}

			// Запис даних у файл
			output << tool;
			output.close();
		}
	}
}

	   // Обробник події для пункту меню "Exit"
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Вихід з програми
	Application::Exit();
}

	   // Обробник події для пункту меню "Fill"
private: System::Void fillToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення об'єкта Tool та заповнення таблиці даними
	vector<string> username;
	vector<string> myRev;
	Tool tool;
	table = tool.CreateTable(table, "", username, myRev);

	// Очищення векторів
	username.clear();
	myRev.clear();

	// Заповнення комбо-боксів та задання джерела даних для таблиці
	ComboRev(username, myRev);
	ToolList->DataSource = table;
}

	   // Обробник події для пункту меню "Clear"
private: System::Void clearToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальна змінна для перевірки наявності помилок
	bool b;
	try {
		// Перевірка наявності елементів у таблиці
		b = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання очищення таблиці тільки у випадку відсутності помилок вводу
	if (!b) {
		table->Clear();
	}
}

	   // Обробник події для пункту меню "About"
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Виведення інформаційного повідомлення
	MessageBox::Show(L" If you have any problems, contact this e - mail address : coffice@lpnu.ua", "Help", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
}


	   // Обробник події для кнопки пошуку
private: System::Void Search_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Отримання значень полів з форми
	string name = msclr::interop::marshal_as<std::string>(NameText->Text);
	string type = msclr::interop::marshal_as<std::string>(TypeText->Text);
	string subtype = msclr::interop::marshal_as<std::string>(SubtypeText->Text);
	string file = msclr::interop::marshal_as<std::string>(FileName->Text);

	// Локальні змінні для валідації та визначення вибору користувача
	bool b = false, checkTable = false, checkFile = false;
	string result = "";

	// Створення нової DataTable для відображення результатів пошуку
	table1 = gcnew DataTable();

	// Додавання стовпців до нової таблиці
	table1->Columns->Add("ID");
	table1->Columns->Add("Name");
	table1->Columns->Add("Type");
	table1->Columns->Add("Subtype");
	table1->Columns->Add("Country");
	table1->Columns->Add("Price $");
	table1->Columns->Add("Reviews");

	// Перевірка наявності введених значень для пошуку
	if (name == "" && type == "" && subtype == "") {
		System::Windows::Forms::MessageBox::Show("Enter the name or type or subtype of the instrument", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		// Визначення вибору користувача щодо джерела даних
		if (CheckTable->Checked == true && CheckFile->Checked == false) {
			checkTable = true;
			try {
				// Перевірка наявності елементів у таблиці
				b = CheckEmptyTable(ToolList);
			}
			catch (const EmptyTable& ex) {
				// Виведення повідомлення про помилку, якщо таблиця порожня
				String^ errorMessage = gcnew String(ex.what());
				System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				b = true;
			}
		}
		else if (CheckTable->Checked == false && CheckFile->Checked == true) {
			checkFile = true;
			try {
				// Перевірка наявності файлу та правильність його формату
				CheckTape(file);
				CheckOpenFile(file);
			}
			catch (MyBaseException& ex) {
				// Виведення повідомлення про помилку, якщо файл відсутній або має неправильний формат
				if (typeid(ex) == typeid(EmptyList)) {
					System::Windows::Forms::MessageBox::Show("Enter file name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					b = true;
				}
				else {
					String^ errorMessage = gcnew String(ex.what());
					System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					b = true;
				}
			}
		}
		else if (CheckFile->Checked == false && CheckTable->Checked == false) {
			// Виведення повідомлення про помилку, якщо не обрано жодної опції
			System::Windows::Forms::MessageBox::Show("Select one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (CheckFile->Checked == true && CheckTable->Checked == true) {
			// Виведення повідомлення про помилку, якщо обрано обидві опції
			System::Windows::Forms::MessageBox::Show("Select only one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Виконання пошуку та виведення результатів
		if (b == false) {
			if (name != "" && type == "" && subtype == "") {
				table1 = FindByName(ToolList, checkFile, checkTable, result, name, type, subtype, file, table1);
				SearchNewTool->DataSource = table1;
				System::String^ resultString = msclr::interop::marshal_as<System::String^>(result);
				label14->Text = resultString;
			}
			else if (type != "" && name == "" && subtype == "") {
				table1 = FindByType(ToolList, checkFile, checkTable, result, name, type, subtype, file, table1);
				SearchNewTool->DataSource = table1;
				System::String^ resultString = msclr::interop::marshal_as<System::String^>(result);
				label14->Text = resultString;
			}
			else if (subtype != "" && name == "" && type == "") {
				table1 = FindBySubtype(ToolList, checkFile, checkTable, result, name, type, subtype, file, table1);
				SearchNewTool->DataSource = table1;
				System::String^ resultString = msclr::interop::marshal_as<System::String^>(result);
				label14->Text = resultString;
			}
			else {
				// Виведення повідомлення про помилку, якщо заповнено більше одного поля
				System::Windows::Forms::MessageBox::Show("Fill in only one field", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
}


	   

// Обробник події для кнопки пошуку інструментів за країною виробництва
private: System::Void SearchByCountry_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Отримання значень полів з форми
	string country = msclr::interop::marshal_as<std::string>(Country->Text);
	string file = msclr::interop::marshal_as<std::string>(FileName->Text);
	bool b;

	// Створення нової DataTable для відображення результатів пошуку
	table1 = gcnew DataTable();

	// Додавання стовпців до нової таблиці
	table1->Columns->Add("ID");
	table1->Columns->Add("Name");
	table1->Columns->Add("Type");
	table1->Columns->Add("Subtype");
	table1->Columns->Add("Country");
	table1->Columns->Add("Price $");
	table1->Columns->Add("Reviews");

	try {
		// Перевірка, чи введено назву країни
		CheckTape(country);
	}
	catch (const EmptyList& ex) {
		// Виведення повідомлення про помилку, якщо назва країни не введена
		System::Windows::Forms::MessageBox::Show("Enter the country of manufacture", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		b = true;
	}

	// Локальні змінні для визначення вибору користувача та результатів пошуку
	bool checkTable = false, checkFile = false;
	string result = "";

	// Визначення вибору користувача щодо джерела даних
	if (CheckTable->Checked == true && CheckFile->Checked == false) {
		checkTable = true;
		try {
			// Перевірка наявності елементів у таблиці
			b = CheckEmptyTable(ToolList);
		}
		catch (const EmptyTable& ex) {
			// Виведення повідомлення про помилку, якщо таблиця порожня
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if (CheckTable->Checked == false && CheckFile->Checked == true) {
		checkFile = true;
		try {
			// Перевірка наявності файлу та правильність його формату
			CheckTape(file);
			CheckOpenFile(file);
		}
		catch (MyBaseException& ex) {
			// Виведення повідомлення про помилку, якщо файл відсутній або має неправильний формат
			if (typeid(ex) == typeid(EmptyList)) {
				System::Windows::Forms::MessageBox::Show("Enter file name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				String^ errorMessage = gcnew String(ex.what());
				System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			b = true;
		}
	}
	else if (CheckFile->Checked == false && CheckTable->Checked == false) {
		// Виведення повідомлення про помилку, якщо не обрано жодної опції
		System::Windows::Forms::MessageBox::Show("Select one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (CheckFile->Checked == true && CheckTable->Checked == true) {
		// Виведення повідомлення про помилку, якщо обрано обидві опції
		System::Windows::Forms::MessageBox::Show("Select only one option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання пошуку та виведення результатів
	if (b == false && ((checkFile == true) || (checkTable == true))) {
		table1 = FindToolByCountry(ToolList, table1, result, checkTable, checkFile, file, country);
		SearchNewTool->DataSource = table1;

		System::String^ resultString = msclr::interop::marshal_as<System::String^>(result);
		label14->Text = resultString;
	}
}

private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   // Обробник події для кнопки зміни відгуку
private: System::Void ChangeReview_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Локальні змінні для перевірки валідності та обраного відгуку
	bool b = true, check;

	try {
		// Перевірка, чи таблиця не порожня
		check = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання операцій зміни відгуку, якщо перевірка пройшла успішно
	if (check == false) {
		// Отримання значень з текстових полів
		string user = msclr::interop::marshal_as<std::string>(UserText->Text);
		string rev = msclr::interop::marshal_as<std::string>(RevText->Text);
		string id = msclr::interop::marshal_as<std::string>(IdDel->Text);

		try {
			// Перевірка, чи введено ім'я користувача
			CheckTape(user);
		}
		catch (const EmptyList& ex) {
			// Виведення повідомлення про помилку, якщо ім'я користувача не введено
			System::Windows::Forms::MessageBox::Show("Enter user name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		try {
			// Перевірка, чи введено новий відгук
			CheckTape(rev);
		}
		catch (const EmptyList& ex) {
			// Виведення повідомлення про помилку, якщо новий відгук не введено
			System::Windows::Forms::MessageBox::Show("Enter new review", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		try {
			// Перевірка, чи введено ID
			IsStr(id);
		}
		catch (const MyBaseException& ex) {
			// Виведення повідомлення про помилку, якщо ID не введено
			System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		// Виконання зміни відгуку, якщо всі перевірки пройдено успішно
		if (b == true) {
			// Конвертація ID в ціле число
			int id = System::Convert::ToInt32(IdDel->Text);

			// Формування нового відгуку
			string review = "\n" + user + " - " + rev;

			// Виклик функції для зміни відгуку та оновлення таблиці
			table = RevChange(ToolList, review, id, "file.txt", table);
			ToolList->DataSource = table;
		}
	}
}


	   // Обробник події для кнопки видалення відгуку
private: System::Void DeleteReview_Click(System::Object^ sender, System::EventArgs^ e) {
	// Локальні змінні для перевірки валідності та обраного відгуку
	bool b = true, check;

	try {
		// Перевірка, чи таблиця не порожня
		check = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання операцій видалення відгуку, якщо перевірка пройшла успішно
	if (check == false) {
		// Отримання значень з комбінованих списків
		string id = msclr::interop::marshal_as<std::string>(IdDel->Text);
		string rev, user;
		String^ selectedUsername = dynamic_cast<String^>(UserNameCom->SelectedItem);
		if (selectedUsername != nullptr) {
			user = msclr::interop::marshal_as<std::string>(selectedUsername);
		}

		String^ selectedRev = dynamic_cast<String^>(RevCom->SelectedItem);
		if (selectedRev != nullptr) {
			rev = msclr::interop::marshal_as<std::string>(selectedRev);
		}

		try {
			// Перевірка, чи введено ім'я користувача
			CheckTape(user);
		}
		catch (const EmptyList& ex) {
			// Виведення повідомлення про помилку, якщо ім'я користувача не введено
			System::Windows::Forms::MessageBox::Show("Enter user name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		try {
			// Перевірка, чи введено відгук
			CheckTape(rev);
		}
		catch (const EmptyList& ex) {
			// Виведення повідомлення про помилку, якщо відгук не введено
			System::Windows::Forms::MessageBox::Show("Enter new review", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		try {
			// Перевірка, чи введено ID
			IsStr(id);
		}
		catch (const MyBaseException& ex) {
			// Виведення повідомлення про помилку, якщо ID не введено
			System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = false;
		}

		// Виконання видалення відгуку, якщо всі перевірки пройдено успішно
		if (b == true) {
			// Конвертація ID в ціле число
			int id = System::Convert::ToInt32(IdDel->Text);

			// Формування рядка з інформацією про відгук
			string review = user + " - " + rev;

			// Виклик функції для видалення відгуку та оновлення таблиці
			table = DeleteRev(ToolList, review, id, "file.txt", table);
			ToolList->DataSource = table;
		}
	}
}




	   // Обробник події для кнопки зміни інформації про інструмент
private: System::Void Change_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Локальні змінні для отримання нових значень країни, типу та підтипу інструменту
	string Country = msclr::interop::marshal_as<std::string>(New_country->Text);
	string Type = msclr::interop::marshal_as<std::string>(New_type->Text);
	string Subtype = msclr::interop::marshal_as<std::string>(New_subtype->Text);

	// Змінна для визначення, чи відбулася помилка під час введення ID
	bool b = false;

	// Перевірка на правильність введення ID (чи є числовим і чи не від'ємний)
	try {
		string str = msclr::interop::marshal_as<std::string>(ID->Text);
		IsStr(str);
	}
	catch (const MyBaseException& ex) {
		b = true;
		// Виведення повідомлення про помилку, якщо ID не числовий або від'ємний
		System::Windows::Forms::MessageBox::Show("Id can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Перевірка на правильність введення нової країни
	try {
		CheckTape(Country);
	}
	catch (const MyBaseException& ex) {
		b = true;
		// Виведення повідомлення про помилку, якщо країна не введена
		System::Windows::Forms::MessageBox::Show("Enter new country", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Перевірка на правильність введення нового типу
	try {
		CheckTape(Type);
	}
	catch (const MyBaseException& ex) {
		b = true;
		// Виведення повідомлення про помилку, якщо тип не введено
		System::Windows::Forms::MessageBox::Show("Enter new type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Перевірка на правильність введення нового підтипу
	try {
		CheckTape(Subtype);
	}
	catch (const MyBaseException& ex) {
		b = true;
		// Виведення повідомлення про помилку, якщо підтип не введено
		System::Windows::Forms::MessageBox::Show("Enter new subtype", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Виконання зміни інформації, якщо всі перевірки пройдено успішно
	if (b == false) {
		// Конвертація ID в ціле число
		int id = System::Convert::ToInt32(ID->Text);

		// Змінна для перевірки, чи не є таблиця порожньою
		bool ch;

		// Перевірка, чи таблиця не порожня
		try {
			ch = CheckEmptyTable(ToolList);
		}
		catch (const EmptyTable& ex) {
			// Виведення повідомлення про помилку, якщо таблиця порожня
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			ch = true;
		}

		// Виконання зміни інформації про інструмент, якщо таблиця не порожня
		if (ch == false) {
			table = ChangeInfo(ToolList, Type, Subtype, Country, id, "file.txt", table);
		}
	}
}

	   // Обробник події клікання на комірку таблиці
private: System::Void ToolList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Отримання номеру рядка та колонки, де відбулось подію
	int rowIndex = e->RowIndex;
	int colIndex = e->ColumnIndex;
	String^ cellText;

	// Перевірка, чи відбулася подія в межах допустимих значень
	if (rowIndex >= 0 && colIndex == 0) {
		// Отримання тексту з комірки і запис його у відповідні поля форми
		cellText = ToolList->Rows[rowIndex]->Cells[colIndex]->Value->ToString();
		IdDel->Text = cellText;
		ID->Text = cellText;
		IdTxt->Text = cellText;
	}
}

	   // Перевірка нових значень на правильність
	   void CheckNew(bool& b, string id, string name, string type, string subtype, string country, string price, string user, string rev) {
		   try {
			   // Перевірка правильності введення ім'я
			   CheckTape(name);
		   }
		   catch (const MyBaseException& ex) {
			   // Виведення повідомлення про помилку, якщо ім'я не введено чи введено некоректно
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter name\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   // Аналогічні перевірки для інших полів
		   try {
			   CheckTape(type);
		   }
		   catch (const MyBaseException& ex) {
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter type\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   try {
			   CheckTape(subtype);
		   }
		   catch (const MyBaseException& ex) {
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter subtype\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   try {
			   CheckTape(country);
		   }
		   catch (const MyBaseException& ex) {
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter country\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   try {
			   CheckTape(user);
		   }
		   catch (const MyBaseException& ex) {
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter user name\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   try {
			   CheckTape(rev);
		   }
		   catch (const MyBaseException& ex) {
			   String^ errorMessage = gcnew String(ex.what());
			   System::Windows::Forms::MessageBox::Show("Enter review\n" + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   b = false;
		   }

		   try {
			   IsStr(id);
		   }
		   catch (const MyBaseException& ex) {
			   b = true;
			   // Обробка помилок, пов'язаних з введенням ID
			   if (typeid(ex) == typeid(NumberExeption)) {
				   System::Windows::Forms::MessageBox::Show("Id can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   b = false;
			   }
			   else {
				   String^ errorMessage = gcnew String(ex.what());
				   System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   b = false;
			   }
		   }

		   try {
			   IsStr(price);
		   }
		   catch (const MyBaseException& ex) {
			   b = true;
			   // Обробка помилок, пов'язаних з введенням ціни
			   if (typeid(ex) == typeid(NumberExeption)) {
				   System::Windows::Forms::MessageBox::Show("Price can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   b = false;
			   }
			   else {
				   String^ errorMessage = gcnew String(ex.what());
				   System::Windows::Forms::MessageBox::Show("Enter new price", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   b = false;
			   }
		   }
	   }


	   // Обробник події додавання нового інструменту
private: System::Void Add_Tool_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримання значень полів з форми
	string id = msclr::interop::marshal_as<std::string>(IdTxt->Text);
	string name = msclr::interop::marshal_as<std::string>(NameTxt->Text);
	string type = msclr::interop::marshal_as<std::string>(TypeTxt->Text);
	string subtype = msclr::interop::marshal_as<std::string>(SubtypeTxt->Text);
	string country = msclr::interop::marshal_as<std::string>(CountryTxt->Text);
	string price = msclr::interop::marshal_as<std::string>(PriceTxt->Text);
	string user = msclr::interop::marshal_as<std::string>(UserTxt->Text);
	string rev = msclr::interop::marshal_as<std::string>(ReviewTxt->Text);
	bool b = true, ch = false;

	// Перевірка таблиці на наявність даних
	try {
		ch = CheckEmptyTable(ToolList);
	}
	catch (const MyBaseException& ex) {
		// Виведення повідомлення про помилку, якщо таблиця пуста
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		ch = true;
	}

	// Якщо таблиця не пуста, перевірка нових даних на правильність
	if (ch == false) {
		CheckNew(b, id, name, type, subtype, country, price, user, rev);
	}

	// Якщо всі дані введено правильно, додаємо новий рядок в таблицю
	if (b == true && ch == false) {
		// Конвертація ціни в правильний формат
		System::String^ priceText = PriceTxt->Text;
		std::string priceStdString = msclr::interop::marshal_as<std::string>(priceText);
		std::replace(priceStdString.begin(), priceStdString.end(), ',', '.');
		double MyPrice = std::stod(priceStdString);
		int MyId = System::Convert::ToInt32(IdTxt->Text);

		// Формування рядка для додавання у таблицю
		string review = user + " - " + rev;
		DataRow^ row = table->NewRow();
		row["ID"] = MyId;
		row["Name"] = gcnew System::String(name.c_str());
		row["Type"] = gcnew System::String(type.c_str());
		row["Subtype"] = gcnew System::String(subtype.c_str());
		row["Country"] = gcnew System::String(country.c_str());
		row["Price $"] = MyPrice;
		row["Reviews"] = gcnew System::String(review.c_str());

		// Додавання рядка в таблицю
		table->Rows->Add(row);
	}
}

	   // Обробник події видалення інструменту
private: System::Void Delete_Tool_Click(System::Object^ sender, System::EventArgs^ e) {
	// Отримання значення ID для видалення
	string MyId = msclr::interop::marshal_as<std::string>(IdTxt->Text);

	// Ініціалізація векторів для зберігання інформації про інструменти
	vector<Tool> tools;
	vector<string> name, type, subtype, country, review;
	vector<double> price;
	vector<int> id;

	bool b = false, ch = false;

	// Перевірка таблиці на наявність даних
	try {
		ch = CheckEmptyTable(ToolList);
	}
	catch (const MyBaseException& ex) {
		// Виведення повідомлення про помилку, якщо таблиця пуста
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		ch = true;
	}

	// Перевірка правильності введеного ID
	try {
		IsStr(MyId);
	}
	catch (const MyBaseException& ex) {
		// Виведення повідомлення про помилку, якщо ID неправильний
		if (typeid(ex) == typeid(NumberExeption)) {
			System::Windows::Forms::MessageBox::Show("Id can not be negative or have other symbols", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = true;
		}
		else {
			String^ errorMessage = gcnew String(ex.what());
			System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			b = true;
		}
	}

	// Якщо дані введено правильно, виконуємо видалення
	if (b == false && ch == false) {
		// Отримання ID для видалення
		int ID = System::Convert::ToInt32(IdTxt->Text);

		// Проходження по рядках таблиці та додавання необхідних даних до векторів
		for (int i = 0; i < ToolList->RowCount; i++) {
			DataGridViewRow^ row = ToolList->Rows[i];
			if (row->Cells["ID"]->Value != nullptr) {
				int rowID = Convert::ToInt32(row->Cells["ID"]->Value);

				if (rowID != ID) {
					// Отримання інших даних з рядка та додавання їх до відповідних векторів
					String^ nameStr = Convert::ToString(row->Cells["Name"]->Value);
					String^ typeStr = Convert::ToString(row->Cells["Type"]->Value);
					String^ subtypeStr = Convert::ToString(row->Cells["Subtype"]->Value);
					String^ countryStr = Convert::ToString(row->Cells["Country"]->Value);
					String^ reviewsStr = Convert::ToString(row->Cells["Reviews"]->Value);

					id.push_back(Convert::ToInt32(row->Cells["ID"]->Value));
					name.push_back(msclr::interop::marshal_as<std::string>(nameStr));
					type.push_back(msclr::interop::marshal_as<std::string>(typeStr));
					subtype.push_back(msclr::interop::marshal_as<std::string>(subtypeStr));
					country.push_back(msclr::interop::marshal_as<std::string>(countryStr));
					price.push_back(Convert::ToDouble(row->Cells["Price $"]->Value));
					review.push_back(msclr::interop::marshal_as<std::string>(reviewsStr));
				}
			}
		}

		// Заповнення вектору tools об'єктами класу Tool на основі даних із векторів
		for (int i = 0; i < name.size(); i++) {
			tools.push_back(Tool(name[i], type[i], subtype[i], country[i], price[i], review[i]));
		}

		// Запис даних у таблицю
		FuncForWriteTable(table, tools, id);
	}
}


private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}


	   

	   // Обробник події для кнопки збереження даних у файл
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Прапорець для визначення, чи відбувається редагування таблиці
	bool b = false;
	try {
		// Перевірка наявності даних в таблиці
		b = CheckEmptyTable(ToolList);

	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		b = true;

	}

	// Якщо дані введено коректно і таблиця не порожня
	if (b == false) {
		// Створення діалогового вікна для збереження файлу
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Текстові файли|*.txt|Усі файли|*.*"; // Фільтр для збереження текстових файлів
		saveFileDialog->Title = "Зберегти файл"; // Заголовок діалогового вікна

		// Показ діалогового вікна
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ fileName = saveFileDialog->FileName;
			string file = msclr::interop::marshal_as<std::string>(saveFileDialog->FileName);

			// Отримання даних з таблиці та збереження їх у вибраному файлі
			std::ofstream output(file);
			vector<string> vec_name, vec_type, vec_subtype, vec_country, vec_reviews;
			vector<double> vec_price;
			vector<int> vec_id;
			vector<Tool> tools;
			vector<Tool> tool;

			// Зчитування даних з таблиці та їх збереження у векторах
			FuncForReadTable(ToolList, tools, vec_name, vec_type, vec_subtype, vec_country, vec_price, vec_reviews, vec_id);

			// Видалення символів переводу рядка із збережених відгуків
			for (int i = 0; i < vec_reviews.size(); i++) {
				string str = vec_reviews[i];
				str.erase(std::remove(str.begin(), str.end(), '\r'), str.end());
				vec_reviews[i] = str;
			}

			// Створення об'єктів класу Tool на основі зчитаних даних
			for (int i = 0; i < vec_name.size(); i++) {
				tool.push_back(Tool(vec_name[i], vec_type[i], vec_subtype[i], vec_country[i], vec_price[i], vec_reviews[i]));
			}

			// Присвоєння ідентифікаторів інструментам
			for (int i = 0; i < vec_id.size(); i++) {
				tool[i].id = vec_id[i];
			}

			// Запис даних у файл
			output << tool;
			output.close();
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::MessageBox::Show("Enter id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}



	   // Обробник події для кнопки відкриття файлу з даними
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення об'єкта OpenFileDialog для вибору файлу
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->RestoreDirectory = true;

	// Показ діалогового вікна вибору файлу
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Отримання ім'я файлу та конвертація його в рядок
		String^ fileName = openFileDialog->FileName;
		string file = msclr::interop::marshal_as<std::string>(fileName);

		// Вектори для збереження ім'я користувача та відгуки
		vector<string> username;
		vector<string> myRev;
		Tool tool;

		// Створення таблиці та заповнення даними з вибраного файлу
		table = tool.CreateTable(table, file, username, myRev);
		username.clear();
		myRev.clear();

		// Зчитування рядків з файлу та розбиття їх на ім'я користувача та відгук
		std::string line;
		ifstream inFile = ifstream(file);
		while (std::getline(inFile, line)) {
			String^ strLine = gcnew String(line.c_str());

			if (strLine == "Reviews:") {
				String^ reviews = "";
				// Продовження читання та додавання рядків до "reviews"
				while (std::getline(inFile, line) && !line.empty()) {
					reviews += gcnew String(line.c_str()) + Environment::NewLine;

					String^ NewReviews = gcnew String(line.c_str()) + Environment::NewLine;
					string str = msclr::interop::marshal_as<std::string>(NewReviews);
					// Знаходження позиції символу "-"
					size_t pos = str.find(" -");
					username.push_back(str.substr(0, pos));
					myRev.push_back(str.substr(pos + 3));
				}
			}
		}

		// Заповнення комбінованого списку користувачів та їх відгуків
		ComboRev(username, myRev);
		ToolList->DataSource = table;
	}
}

	   // Обробник події для кнопки очищення таблиці
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Прапорець для перевірки наявності даних в таблиці
	bool b;
	try {
		b = CheckEmptyTable(ToolList);
	}
	catch (const EmptyTable& ex) {
		// Виведення повідомлення про помилку, якщо таблиця порожня
		String^ errorMessage = gcnew String(ex.what());
		System::Windows::Forms::MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Очищення таблиці, якщо вона не порожня
	if (!b) {
		table->Clear();
	}
}

	   // Обробник події для кнопки виходу з програми
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Вихід з програми
	Application::Exit();
}



};
}
