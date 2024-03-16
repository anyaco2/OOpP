#pragma once


#include <iostream>
#include <string>
#include "Hardware.h"




using namespace std;

class CLList
{
private:
	struct Node
	{

		hardware* data;
		Node* next;
		Node* prev;
		Node(hardware* _data) : data(_data), next(nullptr), prev(nullptr) {}

	};
	Node* head;
	int size;

public:
	int getsize();
	hardware* operator[](int index);
	CLList();
	~CLList();
	//hardware* getdata()const;
	void add(hardware* data);
	void remove(const char* name);
	void display()const;
	void sort();
	hardware* searchByCountry(Country searchCountry);
};



