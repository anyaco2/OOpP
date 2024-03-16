
#include "Statistic.h"

void Statistic::add(hardware* hard)
{
	dictStat[hard] += 1;
	totalPrice+=hard->getPrice();
	
}

void Statistic::add(CLList* list)
{
	
	for (int i = 0; i < list->getsize(); i++)
	{
		add((*list)[i]);
	}
	
	
}

void Statistic::print() const
{
	for (auto it = dictStat.cbegin(); it != dictStat.cend(); ++it)
	{
		std::cout <<"Model: "<< it->first->getName() << " " << "Count: "<< it->second << "\n";
	}
	cout << "Total: " << totalPrice << endl;
	/*for (auto [first, second] : dictStat) {
		cout << first << " " << second << "\n";
	}*/
}
