#include "MyForm.h"
using namespace Project1;
[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::Run(gcnew MyForm());
	return 0;
}