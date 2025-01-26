#include "mainForm.h"

using namespace System::Windows::Forms;

using namespace System;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	My14FEB::mainForm form;
	Application::Run(% form);
}