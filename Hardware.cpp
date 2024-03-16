


#include <iostream>


#include "Hardware.h"


using namespace std;

//Конструкторы
int hardware::count = 0;

void hardware::set_name(const char* name1) {
	delete[] name;
	int b = strlen(name1) + 1;
	name = new char[b];
	strcpy_s(name, b, name1);
}

hardware::hardware(const char* name1, string model1, double price1, Country country1) {
	set_name(name1);
	model = model1;
	price = price1;
	country = country1;
	//count++;
}

hardware::hardware(const hardware& other)

	:hardware(other.name, other.model, other.price, other.country) {

}

//Деструктор
hardware::~hardware() {
	count--;
	delete[] name;
}


void hardware::display_header() const
{
	cout << "-------------------------------------------" << endl;
	cout << "Hardware" << endl;
}

//Методы
void hardware::display()const {
	display_header();
	cout << "Name: " << name << endl;
	cout << "Model: " << model << endl;
	cout << "Price: $" << price << endl;
	cout << "Country: ";
	switch (country) {
	case USA:
		cout << "USA";
		break;
	case China:
		cout << "China";
		break;
	case Russia:
		cout << "Russia";
		break;
	case Japan:
		cout << "Japan";
		break;
	case Germany:
		cout << "Germany";
		break;
	}
	display_info();

}



const char* hardware::getName()const {
	return name;
}

string hardware::getModel()const {
	return model;
}

double hardware::getPrice()const {
	return price;
}

Country hardware::getCountry()const {
	return country;
}

int hardware::getCount() {
	return count;
}