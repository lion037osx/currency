#ifndef __BUY_H__
#define __BUY_H__
//#include <string>public
#include"money.h"
using namespace std;

class Buy:public Money{
private:
	int id_buy;
	string name_buy;
	double quantity;
	double price;


public:
	Buy();
	Buy(Money &);
	~Buy();
};

#endif
