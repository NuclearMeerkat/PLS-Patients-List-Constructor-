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
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ DELtextBox;
	private: System::Windows::Forms::Button^ ���������೺���;



	private: System::Windows::Forms::GroupBox^ groupBox1;





























	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ ������������������;
	private: System::Windows::Forms::Label^ CurrentFile;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ �����������;










	private: System::Windows::Forms::Button^ �������;
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
private: System::Windows::Forms::Button^ ��������;
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
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DELtextBox = (gcnew System::Windows::Forms::TextBox());
			this->���������೺��� = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->������������������ = (gcnew System::Windows::Forms::Button());
			this->CurrentFile = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->����������� = (gcnew System::Windows::Forms::Button());
			this->������� = (gcnew System::Windows::Forms::Button());
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
			this->�������� = (gcnew System::Windows::Forms::Button());
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
				this->�������ToolStripMenuItem,
					this->����ToolStripMenuItem, this->��������������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &GridForm::menuStrip1_ItemClicked);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��������ToolStripMenuItem1, this->����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->�������ToolStripMenuItem->Text = L"³������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem->Text = L"���������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &GridForm::��������ToolStripMenuItem1_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->����������ToolStripMenuItem->Text = L"�������� ��";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::����������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(114, 20);
			this->��������������ToolStripMenuItem->Text = L"����� � ��������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::��������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GridForm::�����������ToolStripMenuItem_Click);
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
			// ���������೺���
			// 
			this->���������೺���->BackColor = System::Drawing::Color::DarkOrchid;
			this->���������೺���->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->���������೺���->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->���������೺���->Location = System::Drawing::Point(6, 19);
			this->���������೺���->Name = L"���������೺���";
			this->���������೺���->Size = System::Drawing::Size(104, 36);
			this->���������೺���->TabIndex = 7;
			this->���������೺���->Text = L"��������";
			this->���������೺���->UseVisualStyleBackColor = false;
			this->���������೺���->Click += gcnew System::EventHandler(this, &GridForm::���������೺���_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->���������೺���);
			this->groupBox1->Controls->Add(this->DELtextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 442);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(209, 70);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� ������ �������";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox3->Controls->Add(this->������������������);
			this->groupBox3->Location = System::Drawing::Point(12, 371);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(209, 65);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"�������� �� ��������";
			// 
			// ������������������
			// 
			this->������������������->BackColor = System::Drawing::Color::DarkOrchid;
			this->������������������->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->������������������->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->������������������->Location = System::Drawing::Point(6, 19);
			this->������������������->Name = L"������������������";
			this->������������������->Size = System::Drawing::Size(197, 36);
			this->������������������->TabIndex = 21;
			this->������������������->Text = L"�������� ������";
			this->������������������->UseVisualStyleBackColor = false;
			this->������������������->Click += gcnew System::EventHandler(this, &GridForm::������������������_Click);
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
			this->groupBox4->Text = L"�������� ����:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"�������� ", L"��\'�� ", L"���������", L"����� ����������",
					L"�������", L"�����", L"������ ����", L"ĳ�������"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 84);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(197, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// �����������
			// 
			this->�����������->BackColor = System::Drawing::Color::DarkOrchid;
			this->�����������->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->�����������->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->�����������->Location = System::Drawing::Point(6, 18);
			this->�����������->Name = L"�����������";
			this->�����������->Size = System::Drawing::Size(197, 36);
			this->�����������->TabIndex = 24;
			this->�����������->Text = L"��������� ";
			this->�����������->UseVisualStyleBackColor = false;
			this->�����������->Click += gcnew System::EventHandler(this, &GridForm::�����������_Click);
			// 
			// �������
			// 
			this->�������->BackColor = System::Drawing::Color::DarkOrchid;
			this->�������->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->�������->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->�������->Location = System::Drawing::Point(4, 19);
			this->�������->Name = L"�������";
			this->�������->Size = System::Drawing::Size(197, 36);
			this->�������->TabIndex = 25;
			this->�������->Text = L"������";
			this->�������->UseVisualStyleBackColor = false;
			this->�������->Click += gcnew System::EventHandler(this, &GridForm::�������_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"�������", L"��\'�", L"���������", L"���� ����������",
					L"������", L"����", L"����� ����", L"ĳ�����"
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
			this->groupBox5->Controls->Add(this->�����������);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Location = System::Drawing::Point(12, 82);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(209, 111);
			this->groupBox5->TabIndex = 28;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"����������";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Location = System::Drawing::Point(15, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"������ �������� ��� ����������";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->SearchtextBox);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Controls->Add(this->�������);
			this->groupBox6->Location = System::Drawing::Point(12, 202);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(208, 163);
			this->groupBox6->TabIndex = 29;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"�����";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gold;
			this->label11->Location = System::Drawing::Point(51, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"������ ����� ���";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(23, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(158, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"������ �������� ��� ������";
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
			// ��������
			// 
			this->��������->BackColor = System::Drawing::Color::DarkOrchid;
			this->��������->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->��������->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->��������->Location = System::Drawing::Point(6, 16);
			this->��������->Name = L"��������";
			this->��������->Size = System::Drawing::Size(195, 36);
			this->��������->TabIndex = 8;
			this->��������->Text = L"��������";
			this->��������->UseVisualStyleBackColor = false;
			this->��������->Click += gcnew System::EventHandler(this, &GridForm::��������_Click);
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
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������ ", L"����������", L"��������" });
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
			this->label8->Text = L"ĳ�����";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(507, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"����� ����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(159, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"�� �������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(460, -1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(258, -1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"���� ����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(104, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"��\'�";
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
			this->label1->Text = L"�������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(393, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"����";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox7);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->YEARtextBox);
			this->groupBox2->Controls->Add(this->��������);
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
			this->groupBox2->Text = L"����������� ������ ��������";
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
			this->Text = L"�������� ���� �����";
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

	         // ������� ��� ������ ����� � ������� 
	private: void Header();
	private: void Show();
		     void ShowSearch();

			 // ������� �� ������������ ��� �������� �� ������
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ���������೺���_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void ������������������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������_Click(System::Object^ sender, System::EventArgs^ e);

	   // ĳ� , �� ���������� ��� ��������� �����
private: System::Void GridForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
