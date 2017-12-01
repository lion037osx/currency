#ifndef __EXCHANGE_H__
#define __EXCHANGE_H__

class Exchange{
private:
	int id_exchange;
	char name_exchange_money[40];
	double value_exchange_money;
 
public:
	Exchange();
	~Exchange();
};

#endif
