#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew IAPDBurnCdDvd::MainForm());
	return 0;
}