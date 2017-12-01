#ifndef __EXCHANGE_H__
#define __EXCHANGE_H__
#include "money.h"

class Exchange:public Money
{
private:
	int id_exchange;
	char name_exchange_money[40];
	double value_exchange_money;
public:
	Exchange();
	~Exchange();
	double get(Money &);
	double calculate(Money &);
};
#endif
