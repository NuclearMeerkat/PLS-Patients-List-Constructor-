#pragma once


namespace PatientsListConstructor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GridForm
	/// </summary>
	public ref class GridForm : public System::Windows::Forms::Form
	{
	public:
		GridForm(void)
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
		~GridForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ОновитиToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^ ВихідЗПрограмиToolStripMenuItem;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ створитиToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиЯкToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ DELtextBox;
	private: System::Windows::Forms::Button^ ВидалитиПаієнта;



	private: System::Windows::Forms::GroupBox^ groupBox1;





























	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ ВидалитиВсіЕлементи;
	private: System::Windows::Forms::Label^ CurrentFile;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ СортуватиЗа;










	private: System::Windows::Forms::Button^ ПошукЗа;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ SearchtextBox;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ LASTNAMEtextBox;
private: System::Windows::Forms::TextBox^ NAMEtextBox;
private: System::Windows::Forms::TextBox^ DAYtextBox;
private: System::Windows::Forms::TextBox^ SURNAMEtextBox;
private: System::Windows::Forms::TextBox^ DIAGNOZtextBox;
private: System::Windows::Forms::TextBox^ BLOODtextBox;
private: System::Windows::Forms::TextBox^ WEIGHTtextBox;
private: System::Windows::Forms::TextBox^ HEIGHTtextBox;
private: System::Windows::Forms::TextBox^ MONTHtextBox;
private: System::Windows::Forms::Button^ Виконати;
private: System::Windows::Forms::TextBox^ YEARtextBox;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::GroupBox^ groupBox2;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GridForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ОновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->створитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиЯкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ВихідЗПрограмиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DELtextBox = (gcnew System::Windows::Forms::TextBox());
			this->ВидалитиПаієнта = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->ВидалитиВсіЕлементи = (gcnew System::Windows::Forms::Button());
			this->CurrentFile = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->СортуватиЗа = (gcnew System::Windows::Forms::Button());
			this->ПошукЗа = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SearchtextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->LASTNAMEtextBox = (gcnew System::Windows::Forms::TextBox());
			this->NAMEtextBox = (gcnew System::Windows::Forms::TextBox());
			this->DAYtextBox = (gcnew System::Windows::Forms::TextBox());
			this->SURNAMEtextBox = (gcnew System::Windows::Forms::TextBox());
			this->DIAGNOZtextBox = (gcnew System::Windows::Forms::TextBox());
			this->BLOODtextBox = (gcnew System::Windows::Forms::TextBox());
			this->WEIGHTtextBox = (gcnew System::Windows::Forms::TextBox());
			this->HEIGHTtextBox = (gcnew System::Windows::Forms::TextBox());
			this->MONTHtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Виконати = (gcnew System::Windows::Forms::Button());
			this->YEARtextBox = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ОновитиToolStripMenuItem,
					this->файлToolStripMenuItem, this->ВихідЗПрограмиToolStripMenuItem, this->проПрограмуToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &GridForm::menuStrip1_ItemClicked);
			// 
			// ОновитиToolStripMenuItem
			// 
			this->ОновитиToolStripMenuItem->Name = L"ОновитиToolStripMenuItem";
			this->ОновитиToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->ОновитиToolStripMenuItem->Text = L"Оновити";
			this->ОновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::ОновитиToolStripMenuItem_Click);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->відкритиToolStripMenuItem,
					this->створитиToolStripMenuItem, this->зберегтиToolStripMenuItem1, this->зберегтиЯкToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			this->відкритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::відкритиToolStripMenuItem_Click);
			// 
			// створитиToolStripMenuItem
			// 
			this->створитиToolStripMenuItem->Name = L"створитиToolStripMenuItem";
			this->створитиToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->створитиToolStripMenuItem->Text = L"Створтити";
			this->створитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::створитиToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem1
			// 
			this->зберегтиToolStripMenuItem1->Name = L"зберегтиToolStripMenuItem1";
			this->зберегтиToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->зберегтиToolStripMenuItem1->Text = L"Зберегти";
			this->зберегтиToolStripMenuItem1->Click += gcnew System::EventHandler(this, &GridForm::зберегтиToolStripMenuItem1_Click);
			// 
			// зберегтиЯкToolStripMenuItem
			// 
			this->зберегтиЯкToolStripMenuItem->Name = L"зберегтиЯкToolStripMenuItem";
			this->зберегтиЯкToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->зберегтиЯкToolStripMenuItem->Text = L"Зберегти як";
			this->зберегтиЯкToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// ВихідЗПрограмиToolStripMenuItem
			// 
			this->ВихідЗПрограмиToolStripMenuItem->Name = L"ВихідЗПрограмиToolStripMenuItem";
			this->ВихідЗПрограмиToolStripMenuItem->Size = System::Drawing::Size(114, 20);
			this->ВихідЗПрограмиToolStripMenuItem->Text = L"Вихід з програми";
			this->ВихідЗПрограмиToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::ВихідЗПрограмиToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::проПрограмуToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(227, 36);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(762, 487);
			this->dataGridView1->TabIndex = 2;
			// 
			// DELtextBox
			// 
			this->DELtextBox->Location = System::Drawing::Point(139, 30);
			this->DELtextBox->Name = L"DELtextBox";
			this->DELtextBox->Size = System::Drawing::Size(42, 20);
			this->DELtextBox->TabIndex = 4;
			// 
			// ВидалитиПаієнта
			// 
			this->ВидалитиПаієнта->BackColor = System::Drawing::Color::DarkOrchid;
			this->ВидалитиПаієнта->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ВидалитиПаієнта->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ВидалитиПаієнта->Location = System::Drawing::Point(6, 19);
			this->ВидалитиПаієнта->Name = L"ВидалитиПаієнта";
			this->ВидалитиПаієнта->Size = System::Drawing::Size(104, 36);
			this->ВидалитиПаієнта->TabIndex = 7;
			this->ВидалитиПаієнта->Text = L"Видалити";
			this->ВидалитиПаієнта->UseVisualStyleBackColor = false;
			this->ВидалитиПаієнта->Click += gcnew System::EventHandler(this, &GridForm::ВидалитиПаієнта_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ВидалитиПаієнта);
			this->groupBox1->Controls->Add(this->DELtextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 442);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(209, 70);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Видалити певний елемент";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox3->Controls->Add(this->ВидалитиВсіЕлементи);
			this->groupBox3->Location = System::Drawing::Point(12, 371);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(209, 65);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Видалити всі елементи";
			// 
			// ВидалитиВсіЕлементи
			// 
			this->ВидалитиВсіЕлементи->BackColor = System::Drawing::Color::DarkOrchid;
			this->ВидалитиВсіЕлементи->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ВидалитиВсіЕлементи->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ВидалитиВсіЕлементи->Location = System::Drawing::Point(6, 19);
			this->ВидалитиВсіЕлементи->Name = L"ВидалитиВсіЕлементи";
			this->ВидалитиВсіЕлементи->Size = System::Drawing::Size(197, 36);
			this->ВидалитиВсіЕлементи->TabIndex = 21;
			this->ВидалитиВсіЕлементи->Text = L"Очистити список";
			this->ВидалитиВсіЕлементи->UseVisualStyleBackColor = false;
			this->ВидалитиВсіЕлементи->Click += gcnew System::EventHandler(this, &GridForm::ВидалитиВсіЕлементи_Click);
			// 
			// CurrentFile
			// 
			this->CurrentFile->AutoSize = true;
			this->CurrentFile->BackColor = System::Drawing::Color::Gold;
			this->CurrentFile->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurrentFile->ForeColor = System::Drawing::SystemColors::InfoText;
			this->CurrentFile->Location = System::Drawing::Point(79, 16);
			this->CurrentFile->Name = L"CurrentFile";
			this->CurrentFile->Size = System::Drawing::Size(46, 18);
			this->CurrentFile->TabIndex = 21;
			this->CurrentFile->Text = L"label1";
			this->CurrentFile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->CurrentFile);
			this->groupBox4->Location = System::Drawing::Point(12, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(209, 49);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Поточний файл:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Прізвищем ", L"Ім\'ям ", L"Побатькові", L"Датою народження",
					L"Висотою", L"Вагою", L"Групою крові", L"Діагнозом"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 84);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(197, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// СортуватиЗа
			// 
			this->СортуватиЗа->BackColor = System::Drawing::Color::DarkOrchid;
			this->СортуватиЗа->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->СортуватиЗа->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->СортуватиЗа->Location = System::Drawing::Point(6, 18);
			this->СортуватиЗа->Name = L"СортуватиЗа";
			this->СортуватиЗа->Size = System::Drawing::Size(197, 36);
			this->СортуватиЗа->TabIndex = 24;
			this->СортуватиЗа->Text = L"Сортувати ";
			this->СортуватиЗа->UseVisualStyleBackColor = false;
			this->СортуватиЗа->Click += gcnew System::EventHandler(this, &GridForm::СортуватиЗа_Click);
			// 
			// ПошукЗа
			// 
			this->ПошукЗа->BackColor = System::Drawing::Color::DarkOrchid;
			this->ПошукЗа->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ПошукЗа->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ПошукЗа->Location = System::Drawing::Point(4, 19);
			this->ПошукЗа->Name = L"ПошукЗа";
			this->ПошукЗа->Size = System::Drawing::Size(197, 36);
			this->ПошукЗа->TabIndex = 25;
			this->ПошукЗа->Text = L"Шукати";
			this->ПошукЗа->UseVisualStyleBackColor = false;
			this->ПошукЗа->Click += gcnew System::EventHandler(this, &GridForm::ПошукЗа_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Прізвище", L"Ім\'я", L"Побатькові", L"Дата народження",
					L"Висота", L"Вага", L"Група крові", L"Діагноз"
			});
			this->comboBox3->Location = System::Drawing::Point(4, 89);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(197, 21);
			this->comboBox3->TabIndex = 26;
			// 
			// SearchtextBox
			// 
			this->SearchtextBox->Location = System::Drawing::Point(4, 137);
			this->SearchtextBox->Name = L"SearchtextBox";
			this->SearchtextBox->Size = System::Drawing::Size(197, 20);
			this->SearchtextBox->TabIndex = 27;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->СортуватиЗа);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Location = System::Drawing::Point(12, 82);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(209, 111);
			this->groupBox5->TabIndex = 28;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Сортування";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Location = System::Drawing::Point(15, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Оберіть параметр для сортування";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->SearchtextBox);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Controls->Add(this->ПошукЗа);
			this->groupBox6->Location = System::Drawing::Point(12, 202);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(208, 163);
			this->groupBox6->TabIndex = 29;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Пошук";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gold;
			this->label11->Location = System::Drawing::Point(51, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Введіть шукані дані";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(23, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(158, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Оберіть параметр для пошуку";
			// 
			// LASTNAMEtextBox
			// 
			this->LASTNAMEtextBox->Location = System::Drawing::Point(288, 46);
			this->LASTNAMEtextBox->Name = L"LASTNAMEtextBox";
			this->LASTNAMEtextBox->Size = System::Drawing::Size(70, 20);
			this->LASTNAMEtextBox->TabIndex = 9;
			// 
			// NAMEtextBox
			// 
			this->NAMEtextBox->Location = System::Drawing::Point(364, 46);
			this->NAMEtextBox->Name = L"NAMEtextBox";
			this->NAMEtextBox->Size = System::Drawing::Size(70, 20);
			this->NAMEtextBox->TabIndex = 10;
			// 
			// DAYtextBox
			// 
			this->DAYtextBox->Location = System::Drawing::Point(540, 46);
			this->DAYtextBox->Name = L"DAYtextBox";
			this->DAYtextBox->Size = System::Drawing::Size(25, 20);
			this->DAYtextBox->TabIndex = 11;
			// 
			// SURNAMEtextBox
			// 
			this->SURNAMEtextBox->Location = System::Drawing::Point(440, 46);
			this->SURNAMEtextBox->Name = L"SURNAMEtextBox";
			this->SURNAMEtextBox->Size = System::Drawing::Size(70, 20);
			this->SURNAMEtextBox->TabIndex = 12;
			// 
			// DIAGNOZtextBox
			// 
			this->DIAGNOZtextBox->Location = System::Drawing::Point(865, 46);
			this->DIAGNOZtextBox->Name = L"DIAGNOZtextBox";
			this->DIAGNOZtextBox->Size = System::Drawing::Size(112, 20);
			this->DIAGNOZtextBox->TabIndex = 13;
			// 
			// BLOODtextBox
			// 
			this->BLOODtextBox->Location = System::Drawing::Point(799, 46);
			this->BLOODtextBox->Name = L"BLOODtextBox";
			this->BLOODtextBox->Size = System::Drawing::Size(45, 20);
			this->BLOODtextBox->TabIndex = 14;
			// 
			// WEIGHTtextBox
			// 
			this->WEIGHTtextBox->Location = System::Drawing::Point(736, 46);
			this->WEIGHTtextBox->Name = L"WEIGHTtextBox";
			this->WEIGHTtextBox->Size = System::Drawing::Size(45, 20);
			this->WEIGHTtextBox->TabIndex = 15;
			// 
			// HEIGHTtextBox
			// 
			this->HEIGHTtextBox->Location = System::Drawing::Point(674, 46);
			this->HEIGHTtextBox->Name = L"HEIGHTtextBox";
			this->HEIGHTtextBox->Size = System::Drawing::Size(45, 20);
			this->HEIGHTtextBox->TabIndex = 16;
			// 
			// MONTHtextBox
			// 
			this->MONTHtextBox->Location = System::Drawing::Point(571, 46);
			this->MONTHtextBox->Name = L"MONTHtextBox";
			this->MONTHtextBox->Size = System::Drawing::Size(25, 20);
			this->MONTHtextBox->TabIndex = 17;
			// 
			// Виконати
			// 
			this->Виконати->BackColor = System::Drawing::Color::DarkOrchid;
			this->Виконати->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Виконати->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Виконати->Location = System::Drawing::Point(6, 16);
			this->Виконати->Name = L"Виконати";
			this->Виконати->Size = System::Drawing::Size(195, 36);
			this->Виконати->TabIndex = 8;
			this->Виконати->Text = L"Виконати";
			this->Виконати->UseVisualStyleBackColor = false;
			this->Виконати->Click += gcnew System::EventHandler(this, &GridForm::Виконати_Click);
			// 
			// YEARtextBox
			// 
			this->YEARtextBox->Location = System::Drawing::Point(602, 46);
			this->YEARtextBox->Name = L"YEARtextBox";
			this->YEARtextBox->Size = System::Drawing::Size(37, 20);
			this->YEARtextBox->TabIndex = 18;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Додати ", L"Редагувати", L"Вставити" });
			this->comboBox2->Location = System::Drawing::Point(6, 58);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(144, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(156, 58);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(39, 20);
			this->numericUpDown1->TabIndex = 26;
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::Gold;
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Controls->Add(this->label3);
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Controls->Add(this->label4);
			this->groupBox7->Controls->Add(this->label2);
			this->groupBox7->Controls->Add(this->label1);
			this->groupBox7->Controls->Add(this->label5);
			this->groupBox7->Location = System::Drawing::Point(283, 16);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(693, 24);
			this->groupBox7->TabIndex = 35;
			this->groupBox7->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(611, -1);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Діагноз";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(507, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Група крові";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(159, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"По батькові";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(460, -1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Вага";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(258, -1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Дата народження";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(104, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Ім\'я";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(13, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Прізвище";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(393, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Зріст";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox7);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->YEARtextBox);
			this->groupBox2->Controls->Add(this->Виконати);
			this->groupBox2->Controls->Add(this->MONTHtextBox);
			this->groupBox2->Controls->Add(this->HEIGHTtextBox);
			this->groupBox2->Controls->Add(this->WEIGHTtextBox);
			this->groupBox2->Controls->Add(this->BLOODtextBox);
			this->groupBox2->Controls->Add(this->DIAGNOZtextBox);
			this->groupBox2->Controls->Add(this->SURNAMEtextBox);
			this->groupBox2->Controls->Add(this->DAYtextBox);
			this->groupBox2->Controls->Add(this->NAMEtextBox);
			this->groupBox2->Controls->Add(this->LASTNAMEtextBox);
			this->groupBox2->Location = System::Drawing::Point(12, 529);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(992, 94);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Редагування списку пацієнтів";
			// 
			// GridForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1008, 628);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"GridForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор бази даних";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &GridForm::GridForm_FormClosed);
			this->Shown += gcnew System::EventHandler(this, &GridForm::GridForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void ShowGrid();
private: System::Void GridForm_Shown(System::Object^ sender, System::EventArgs^ e);

	         // Функції для виводу даних в таблицю 
	private: void Header();
	private: void Show();
		     void ShowSearch();

			 // Функції що викликаються при нажиманні на кнопку
private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void зберегтиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ВидалитиПаієнта_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void ВидалитиВсіЕлементи_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void створитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ВихідЗПрограмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ОновитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void СортуватиЗа_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Виконати_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ПошукЗа_Click(System::Object^ sender, System::EventArgs^ e);

	   // Дія , що відбувається при закриванні форми
private: System::Void GridForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
