//--------------------------------------------
//	:: Basic Calculator main - C++ practice
//	:: By Viktor Dahbura
//	:: 10/14/2016
//---------------------------------------------

#include "basicCalculator.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BasicCalculator::basicCalculator form;
	Application::Run(%form);
}