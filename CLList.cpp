
#include <map>
#include <iostream>
#include <cstring>

#include "CLList.h"
using namespace std;

ostream& operator<<(ostream& os, const hardware& hardware)
{
	os << "Name: " << hardware.getName() << endl;
	os << "Model: " << hardware.getModel() << endl;
	os << "Price: $" << hardware.getPrice() << endl;
	os << "Country: ";
	switch (hardware.getCountry()) {
	case USA:
		os << "USA";
		break;
	case China:
		os << "China";
		break;
	case Russia:
		os << "Russia";
		break;
	case Japan:
		os << "Japan";
		break;
	case Germany:
		os << "Germany";
		break;
	}
	os << endl << endl;
	return os;
}
int CLList::getsize()
{
	return size;
}
hardware* CLList::operator[](int index) 
{
	Node* current = head;
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		if (tmp++ ==index) {
			return current->data;
		}
		current = current->next;
	}
	return nullptr;
}
CLList::CLList() {
	head = nullptr;
	size = 0;
}

CLList::~CLList() {
	Node* current = head;
	Node* temp;
	while (size > 0) {
		temp = current;
		current = current->next;
		delete temp;
		size--;
	}
}

//hardware* CLList::getdata() const
//{
//	for (int i = 0; i < size; i++) {
//
//	}
//}

void CLList::add(hardware* data) {
	Node* newNode = new Node(data);
	if (head == nullptr) {
		newNode->next = newNode;
		newNode->prev = newNode;
		head = newNode;
	}
	else {
		newNode->next = head;
		newNode->prev = head->prev;
		head->prev->next = newNode;
		head->prev = newNode;
	}
	size++;
}

void CLList::remove(const char* name) {
	if (size == 0) {
		return;
	}
	Node* current = head;
	for (int i = 0; i < size; i++) {

		if (strcmp(current->data->getName(), name) == 0) {
			if (size == 1) {
				delete current;
				head = nullptr;
			}
			else {
				current->prev->next = current->next;
				current->next->prev = current->prev;
				if (current == head) {
					head = current->next;
				}
				delete current;
			}
			size--;
			break;
		}
		current = current->next;
	}


}

void CLList::display() const {
	Node* current = head;
	for (int i = 0; i < size; i++) {
		cout << "Item " << i + 1 << ":" << endl;
		current->data->display();
		cout << *current->data << endl;
		cout << "------------------------------------" << endl;
		current = current->next;
	}
}

void CLList::sort() {
	if (size <= 1) {
		return;
	}

	Node* current = head;
	Node* nextNode;
	for (int i = 0; i < size - 1; i++) {
		nextNode = current->next;
		for (int j = i + 1; j < size; j++) {
			/*if (current->data->getPrice() < nextNode->data->getPrice()) {
				swap(current->data, nextNode->data);
			}*/
			if (*current->data < *nextNode->data) {
				swap(current->data, nextNode->data);
			}
			nextNode = nextNode->next;
		}
		current = current->next;
	}
}

hardware* CLList::searchByCountry(Country country) {
	Node* current = head;
	for (int i = 0; i < size; i++) {
		if (*current->data == country) {
			return current->data;
		}
		current = current->next;
	}
	return nullptr;
}


