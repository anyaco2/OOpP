#pragma once

#include <iostream>

#include "hardware.h"
#include "CLList.h"
#include "Statistic.h"
#include "Memory.h"
#include "Battery.h"
#include "IODevice.h"
#include "Output.h"

using namespace std;

int main()
{

	//hardware hardware1("Computer", "H-651", 10000.0, Russia);
	//hardware hardware2("Laptop", "A-013", 150000.0, USA);
	//hardware hardware3("Modem", "G-251", 3000.0, China);
	//hardware hardware4("Monitor", "M-666", 23456.0, Germany);
	//hardware hardware5("Scanner", "K-444", 13717.0, Japan);
	//hardware hardware6(hardware5);

	//cout << "Hardware 1: " << endl;
	//hardware1.display();
	//cout << "------------------------------------" << endl;

	//cout << "Hardware 2: " << endl;
	//hardware2.display();
	//cout << "------------------------------------" << endl;

	//cout << "Hardware 3: " << endl;
	//hardware3.display();
	//cout << "------------------------------------" << endl;

	//cout << "Hardware 4: " << endl;
	//hardware4.display();
	//cout << "------------------------------------" << endl;

	//cout << "Hardware 5: " << endl;
	//hardware5.display();
	//cout << "------------------------------------" << endl;

	//cout << "Hardware 6: " << endl;
	//hardware6.display();
	//cout << "------------------------------------" << endl;


	////cout << "Total count: " << hardware::getCount() << endl;


	//CLList hardwareList;
	//hardwareList.add(&hardware1);
	//hardwareList.add(&hardware2);
	//hardwareList.add(&hardware3);
	//hardwareList.add(&hardware4);
	//hardwareList.add(&hardware5);
	//hardwareList.add(&hardware6);

	//cout << "List contents before sorting:" << endl;
	//hardwareList.display();

	//cout << "------------------------------------" << endl;
	//hardwareList.sort();

	//cout << "List contents after sorting by price:" << endl;
	//hardwareList.display();

	//cout << "------------------------------------" << endl;

	//Country searchCountry = China;
	//hardware foundItem = *hardwareList.searchByCountry(searchCountry);
	//cout << "Item found with country " << searchCountry << ":" << endl;
	//foundItem.display();


	//Statistic dict;
	//dict.add(&hardware1);
	//dict.add(&hardware2);
	//dict.add(&hardware3);
	//dict.add(&hardware4);
	//dict.add(&hardware5);
	//dict.add(&hardware6);
	//dict.add(&hardwareList);
	//dict.add(&hardware4);
	//dict.add(&hardware4);
	//dict.print();
	//cout << "--------------------------------------------------------------" << endl;

	///*hardware hardware8( "Computer", "H-651", 10000.0, Russia);
	//hardware8.display();*/

	Memory memory1("Computer", "H-651", 10000.0, Russia, 16.0,"RAM", "GB");
	memory1.display();
	cout << "--------------------------------------------------------------" << endl;
	Battery battery1("Computer", "H-651", 10000.0, Russia, 25.0, "Electricity (Vt)");
	battery1.display();
	cout << "--------------------------------------------------------------" << endl;
	IODevice device1("Monitor", "M-666", 23456.0, Germany, "Show", "Output");
	device1.display();

	system("pause");
	return 0;

}

