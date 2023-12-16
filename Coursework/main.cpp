#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Coursework;

[STAThreadAttribute]


int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form1;
	Application::Run(% form1);
}