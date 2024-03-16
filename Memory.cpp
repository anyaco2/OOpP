#include "Memory.h"
#include <iostream>

//Memory::Memory(const char* name1, string model1, double price1, Country country1, double memory_size1, string memory_type1, string sizebyte1)
//{
//	memory_size = memory_size1;
//	memory_type = memory_type1;
//	memory_sizebyte = sizebyte1;
//	set_name(name1);
//	model = model1;
//	price = price1;
//	country = country1;
//}

//Memory::Memory(double memory_size1, string memory_type1, string sizebyte1):hardware() {
//	
//
//}

void Memory::display_header() const
{
	cout << "------------------------------------" << endl;
	cout << "Memory" << endl;
}

void Memory::display_info() const
{
	cout << "Type of memory: " << memory_type << "\n";
	cout << "Size of memory: " << memory_size << " " << memory_sizebyte << "\n";

	cout << "----------------------------------------------------------------------" << endl;
}

void Memory::display()const{
	Memory::display_header();
	hardware::display();
	Memory::display_info();
}

string Memory::get_memory_type() const
{
	return memory_type;
}

double Memory::get_memory_size() const
{
	return memory_size;
}

string Memory::get_memory_sizebyte()const
{
	return memory_sizebyte;
}
