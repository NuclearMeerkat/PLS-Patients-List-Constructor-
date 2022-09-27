#include "OutputForm.h"
#include "GridForm.h"

#include "DoFile.h"
#include "Convert.h"

static List<Patient> list; 

System::Void PatientsListConstructor::OutputForm::button2_Click(System::Object^ sender, System::EventArgs^ e) // Return to the main menu
{
	GridForm^ form = gcnew GridForm(); 
	this->Hide();					   
	form->Show();					   
}

System::Void PatientsListConstructor::OutputForm::button1_Click(System::Object^ sender, System::EventArgs^ e) // Record data
{
	if (textBox1->Text == "") {
		MessageBox::Show("Введіть назву файла!", "Увага!");
		return;
	}
	std::string fileName;
	Convert_String_to_string(textBox1->Text->ToString(), fileName); 

	if (!DataSave(list, fileName)) {
		MessageBox::Show("Не вдалося відкрити, або знайти файл!", "Помилка!");
		return;
	}
	
	MessageBox::Show("Дані збережено!", "Увага!");
	GridForm^ form = gcnew GridForm();		
	this->Hide();                          
	form->Show();						   
}

System::Void PatientsListConstructor::OutputForm::OutputForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	DataRead(list, "data.bin");
	return System::Void();
}

System::Void PatientsListConstructor::OutputForm::OutputForm_Deactivate(System::Object^ sender, System::EventArgs^ e)
{
	DataSave(list, "data.bin");
	list.DelAll();
	return System::Void();
}
