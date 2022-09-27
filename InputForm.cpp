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
		MessageBox::Show("������ ����� �����!","�����!");
		return;
	}
	std::string fileName;
	Convert_String_to_string(textBox1->Text->ToString(), fileName); 

	if (!DataRead(list, fileName)) { 
		MessageBox::Show("�� ������� �������, ��� ������ ����!", "�������!");
		return;
	}

	DataSave(list, "data.bin"); 
	list.DelAll(); 

	if (!NameSave(fileName)){ 
		MessageBox::Show("�� �������� ���� FILENAME.bin ! \n","�����!");
	}
	
	MessageBox::Show("��� ���������!", "�����!");
	GridForm^ form = gcnew GridForm();    
	this->Hide();                         
	form->Show();						   
}

System::Void PatientsListConstructor::InputForm::InputForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	DataRead(list, "data.bin");
	return System::Void();
}
