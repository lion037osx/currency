#ifndef __WALLET_H__
#define __WALLET_H__
#include "money.h"
#include "database.h"

class Wallet:public Money
{
private:
	int id_buy;
	double quantity;
	double bitcoin;
	int satoshi;
	double ethereum;
	double zcash;
	double dash;
	double dolar;
	double pesos;
	double euro;
public:
	Wallet();
	Wallet(Money &);
	~Wallet();
	void put();
	void insert(Money &);
	void update();
};

#endif
