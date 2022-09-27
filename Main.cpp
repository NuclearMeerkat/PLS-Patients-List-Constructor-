
#include "GridForm.h"
#include "DoFile.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {  
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Just in case, we clean the buffer files from old data
	FileClear("data.bin");      
	FileClear("FILENAME.bin");

	PatientsListConstructor::GridForm form;
	Application::Run(%form);
}
