#include "Output.h"

void Output::display() const
{
	IODevice::display();
	cout << n;
	cout << m;
}

string Output::get_Output_function() const
{
	return m;
}

string Output::get_Output_type()const
{
	return n;
}


