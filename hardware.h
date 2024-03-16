#pragma once


#include <iostream>
#include <string>
#include "Country.h"


using namespace std;

class hardware {

private:


	char* name;
	string model;
	double price;
	Country country;
	static int count;
	

	void set_name(const char* name);

protected:
	virtual void display_header()const;
	virtual void display_info()const=0;
public:
	//Конструкторы
	hardware(const char* name1, string model1, double price1, Country country1);
	hardware(const hardware& other);
	bool operator<(const hardware& other) const {
		return this->price < other.country;
	}

	~hardware();

	bool operator==(Country country) const {
		return country == this->country;
	}

	//Деструктор

	//Методы 
	virtual void display()const;
	
	virtual const char* getName() const;
	virtual string getModel()const;
	virtual double getPrice()const;
	virtual Country getCountry()const;
	static int getCount();
	
};