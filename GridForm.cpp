#include "GridForm.h"
#include "InputForm.h"
#include "OutputForm.h"

#include "Search.h"
#include "Sort.h"
#include "Convert.h"
#include "DoFile.h"

static List<Patient> list; 

static List<int> indexes;  // List for indexes of list elements that are suitable for search (Created specifically for optimized implementation of search)
static int indycator = 0;  // An indicator that implements reverse rotation of the list when sorting

// A convenient function that combines the Header and Show, and outputs all data
void PatientsListConstructor::GridForm::ShowGrid() {
	// Очищення таблиі від старих даних
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	//Шапка
	Header();

	dataGridView1->RowCount = list.GetSize() + 1; // Кількість рядків в таблиці 
	dataGridView1->ColumnCount = 8;				  // Кількість стовпців в таблиці 

	// Вивід у таблицю
	Show();

	// Автоматичне визначення розміру стовпців та рядків
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
	dataGridView1->AutoResizeColumns();
}


void PatientsListConstructor::GridForm::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();  // Створення боксу для тексту
	c1->Name = "Lastname";       // Його назва у межах програми
	c1->HeaderText = "Прізвище"; // Текст у блоці
	c1->Width = 150;			 // Стандартна ширина
	dataGridView1->Columns->Add(c1); // Добавлення колонки

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Name";
	c2->HeaderText = "Ім'я";
	c2->Width = 150;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Surname";
	c3->HeaderText = "По батькові";
	c3->Width = 150;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Birthday";
	c4->HeaderText = "Дата народження";
	c4->Width = 150;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Height";
	c5->HeaderText = "Зріст";
	c5->Width = 150;
	dataGridView1->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "Weight";
	c6->HeaderText = "Вага";
	c6->Width = 150;
	dataGridView1->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "Blood";
	c7->HeaderText = "Група крові";
	c7->Width = 100;
	dataGridView1->Columns->Add(c7);

	DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
	c8->Name = "Diagnoz";
	c8->HeaderText = "Діагноз пацієнта";
	c8->Width = 1000;
	dataGridView1->Columns->Add(c8);

	dataGridView1->TopLeftHeaderCell->Value = "Дані";
	dataGridView1->AutoResizeColumns();
}


void PatientsListConstructor::GridForm::Show()
{
	for (int i = 0; i < list.GetSize(); i++)
	{
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		//
		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(list[i].Getlname());
		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(list[i].Getfname());
		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(list[i].Getsurname());
		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(list[i].Getday() + "." + list[i].Getmonth() + "." + list[i].Getyear());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(list[i].Getheight());
		dataGridView1->Rows[i]->Cells[5]->Value = Convert_string_to_String(list[i].Getweight());
		dataGridView1->Rows[i]->Cells[6]->Value = Convert_string_to_String(list[i].Getblood());
		dataGridView1->Rows[i]->Cells[7]->Value = Convert_string_to_String(list[i].Getdiagnoz());
	}

}

// A function that displays data in a table, but is implemented specifically for displaying search results
void PatientsListConstructor::GridForm::ShowSearch() 
{
	// Очищуємо таблицю від старих даних
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	//Шапка
	Header();

	dataGridView1->RowCount = indexes.GetSize() + 1; // Кількість рядків в таблиці 
	dataGridView1->ColumnCount = 8;				  // Кількість стовпців в таблиці 

	int i;

	for (int j = 0; j < indexes.GetSize(); j++)
	{
		i = indexes[j];

		dataGridView1->Rows[j]->HeaderCell->Value = Convert::ToString(i + 1);

		//
		dataGridView1->Rows[j]->Cells[0]->Value = Convert_string_to_String(list[i].Getlname());
		dataGridView1->Rows[j]->Cells[1]->Value = Convert_string_to_String(list[i].Getfname());
		dataGridView1->Rows[j]->Cells[2]->Value = Convert_string_to_String(list[i].Getsurname());
		dataGridView1->Rows[j]->Cells[3]->Value = Convert_string_to_String(list[i].Getday() + "." + list[i].Getmonth() + "." + list[i].Getyear());
		dataGridView1->Rows[j]->Cells[4]->Value = Convert_string_to_String(list[i].Getheight());
		dataGridView1->Rows[j]->Cells[5]->Value = Convert_string_to_String(list[i].Getweight());
		dataGridView1->Rows[j]->Cells[6]->Value = Convert_string_to_String(list[i].Getblood());
		dataGridView1->Rows[j]->Cells[7]->Value = Convert_string_to_String(list[i].Getdiagnoz());
	}

		// Автоматичне визначення розміру стовпців та рядків
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
	dataGridView1->AutoResizeColumns();
}



System::Void PatientsListConstructor::GridForm::GridForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	// Current file indicator
	std::string str;
	NameRead(str);
	CurrentFile->Text = (Convert_string_to_String(str));

	// We read data from the buffer file data.bin
	DataRead(list, "data.bin");

	// Display the table
	ShowGrid();

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::GridForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	DataSave(list, "data.bin"); // Save changes
	list.DelAll();              // Clear memory
	return System::Void();
}


System::Void PatientsListConstructor::GridForm::ВидалитиПаієнта_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (DELtextBox->Text->ToString() == "") {
		return System::Void();
	}

	if (Convert::ToInt32(DELtextBox->Text) > list.GetSize()){ 
		return System::Void();
	}

	list.Del(Convert::ToInt32(DELtextBox->Text) - 1); 

	DELtextBox->Clear(); 

	ShowGrid();

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::ВидалитиВсіЕлементи_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Ви впевнені, що хочете видалити всі елементи?","Увага!",MessageBoxButtons::YesNo) != System::Windows::Forms::DialogResult::Yes)
	{
		return System::Void();
	}

	list.DelAll(); 

	ShowGrid(); 

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::створитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	list.DelAll();
	FileClear("data.bin");

	OutputForm^ form = gcnew OutputForm(); 
	this->Hide();                          
	form->Show();						   
	return System::Void();
}

System::Void PatientsListConstructor::GridForm::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("PLC - програма для роботи зі списками пацієнтів лікарні. Приємного користування та будьте здорові!", "Про програму");
	return System::Void();
}

System::Void PatientsListConstructor::GridForm::ВихідЗПрограмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// При виході очищуємо всі буферні файли 
	FileClear("FILENAME.bin");
	FileClear("data.bin");
	Application::Exit();

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::ОновитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ShowGrid();
	return System::Void();
}

System::Void PatientsListConstructor::GridForm::СортуватиЗа_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Depending on the selected item in comboBox1, sort by a certain field
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		LnameSort(list);
		break;
	case 1:
		NameSort(list);
		break;
	case 2:
		SurnameSort(list);
		break;
	case 3:
		DateSort(list);
		break;
	case 4:
		HightSort(list);
		break;
	case 5:
		WeightSort(list);
		break;
	case 6:
		BloodSort(list);
		break;
	case 7:
		DiagnozSort(list);
		break;
	default:
		break;
	}

	// An indicator that implements reverse sorting when the same button is repeatedly clicked
	if (indycator % 2 != 0) {
		InvertList(list);
	}
	indycator++;

	ShowGrid();

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::Виконати_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	Patient temp;
	int index;   

	
	std::string str;
	String^ STR;

	if (LASTNAMEtextBox->Text->ToString() == "") { 

		return System::Void();
	}
	
	STR = LASTNAMEtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setlname(str);
	LASTNAMEtextBox->Clear();

	if (NAMEtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = NAMEtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setfname(str);
	NAMEtextBox->Clear();

	if (SURNAMEtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = SURNAMEtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setsurname(str);
	SURNAMEtextBox->Clear();

	if (DAYtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = DAYtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setday(str);
	DAYtextBox->Clear();

	if (MONTHtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = MONTHtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setmonth(str);
	MONTHtextBox->Clear();

	if (YEARtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = YEARtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setyear(str);
	YEARtextBox->Clear();

	if (HEIGHTtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = HEIGHTtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setheight(str);
	HEIGHTtextBox->Clear();

	if (WEIGHTtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = WEIGHTtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setweight(str);
	WEIGHTtextBox->Clear();

	if (BLOODtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = BLOODtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setblood(str);
	BLOODtextBox->Clear();

	if (DIAGNOZtextBox->Text->ToString() == "") {
		return System::Void();
	}

	STR = DIAGNOZtextBox->Text->ToString();
	Convert_String_to_string(STR, str);
	temp.Setdiagnoz(str);
	DIAGNOZtextBox->Clear();

	
	switch (comboBox2->SelectedIndex)
	{
	case 0:
		list.Add(temp); // Adds an element to the end of the list
		break;
	case 1:
		// Edit the element
		index = Convert::ToInt32(numericUpDown1->Value) - 1;
		list[index] = temp; 
		break;
	case 2:
		// Insert an element in a certain place according to its index
		index = Convert::ToInt32(numericUpDown1->Value) - 1;
		list.Insert(temp, index);
		break;
	default:
		break;
	}

	ShowGrid();

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::ПошукЗа_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (SearchtextBox->Text == ""){
		return System::Void();
	}

	
	std::string str;
	String^ STR;
	STR = SearchtextBox->Text->ToString();
	Convert_String_to_string(STR,str);


	switch (comboBox3->SelectedIndex)
	{
	case 0:
		FindLname(list, indexes, str);
		break;
	case 1:
		FindName(list, indexes, str);
		break;
	case 2:
		FindSurname(list, indexes, str);
		break;
	case 3:
		FindDate(list, indexes, str);
		break;
	case 4:
		FindHeight(list, indexes, str);
		break;
	case 5:
		FindWeight(list, indexes, str);
		break;
	case 6:
		FindBlood(list, indexes, str);
		break;
	case 7:
		FindDiagnoz(list, indexes, str);
		break;
	default:
		break;
	}

	ShowSearch();

	indexes.DelAll();
	return System::Void();
}

System::Void PatientsListConstructor::GridForm::відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputForm^ form = gcnew InputForm(); 
	this->Hide();                          
	form->Show();						   
	return System::Void();
}

System::Void PatientsListConstructor::GridForm::зберегтиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string fileName;
	NameRead(fileName); // We write the name of the current file from the buffer file to the fileName variable

	DataSave(list, fileName); // We save the changes in the current file by overwriting it

	return System::Void();
}

System::Void PatientsListConstructor::GridForm::зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataSave(list, "data.bin"); 

	OutputForm^ form = gcnew OutputForm(); 
	this->Hide();                          
	form->Show();						  
	return System::Void();
}

