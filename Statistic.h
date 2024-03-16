#pragma once
#include <map>
#include "hardware.h"
#include "CLList.h"
class Statistic
{
private:
	std::map<hardware*, int> dictStat;
	double totalPrice=0.0;
	

public:
	
	void add(hardware*hard);
	void add(CLList*list);
	void print()const;

};

