#include "IODevice.h"

void IODevice::display()const {
	IODevice::display_header();//без изменений
	hardware::display();
	IODevice::display_info();
}

string IODevice::get_IODevice_type()const
{
	return IODevice_type;
}

string IODevice::get_IODevice_function()const
{
	return IODevice_function;
}
void IODevice::display_header() const
{
	cout << "------------------------------------" << endl;
	cout << "IODevice" << endl;
}

void IODevice::display_info() const
{
	cout << "Input / output: " << IODevice_type << "\n";
	cout << "Function of hardware: " << IODevice_function << " " << "\n";

	cout << "----------------------------------------------------------------------" << endl;
}
