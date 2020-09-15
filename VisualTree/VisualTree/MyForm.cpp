#include "MyForm.h"
#include "windows.h"
#include "tree.h"


using namespace System;
using namespace System::Windows::Forms;

void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VisualTree::MyForm form;
	Application::Run(%form);
}