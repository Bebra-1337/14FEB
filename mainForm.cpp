#include "mainForm.h"
#include<iostream>

using namespace System::Windows::Forms;

using namespace System;

using namespace System::Drawing;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	My14FEB::mainForm form;
	Application::Run(% form);
}