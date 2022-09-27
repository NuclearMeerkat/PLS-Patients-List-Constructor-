#include "InputForm.h"
#include "GridForm.h"
#include "Convert.h" 
#include "DoFile.h" 

#include <iostream>

static List<Patient> list; 


System::Void PatientsListConstructor::InputForm::button2_Click(System::Object^ sender, System::EventArgs^ e) // Return to the main menu
{
	GridForm^ form = gcnew GridForm();
	this->Hide();					   
	form->Show();					   
}

System::Void PatientsListConstructor::InputForm::button1_Click(System::Object^ sender, System::EventArgs^ e) //  Reading data
{
	if (textBox1->Text == ""){  
		MessageBox::Show("Введіть назву файла!","Увага!");
		return;
	}
	std::string fileName;
	Convert_String_to_string(textBox1->Text->ToString(), fileName); 

	if (!DataRead(list, fileName)) { 
		MessageBox::Show("Не вдалося відкрити, або знайти файл!", "Помилка!");
		return;
	}

	DataSave(list, "data.bin"); 
	list.DelAll(); 

	if (!NameSave(fileName)){ 
		MessageBox::Show("Не знайдено файл FILENAME.bin ! \n","Увага!");
	}
	
	MessageBox::Show("Дані збережено!", "Увага!");
	GridForm^ form = gcnew GridForm();    
	this->Hide();                         
	form->Show();						   
}

System::Void PatientsListConstructor::InputForm::InputForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	DataRead(list, "data.bin");
	return System::Void();
}
