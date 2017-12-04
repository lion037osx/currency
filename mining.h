#ifndef __MINING_H__
#define __MINING_H__
#include <iostream>
#include "money.h"

using namespace std;

template <class TemplateClass>
class Mining {
private:
	int id_mining;
	string name_money;
	double bitcoin;
	int satoshi;
	double ethereum;
	double zcash;
	double dash;
	double dolar;
	double pesos;
	double euro;
	static int hasrate;

public:
	Mining(){
	}
	Mining(TemplateClass n){
		//this->hasrate+=n;
	}
	~Mining(){

	}
	TemplateClass init(int,TemplateClass);
	TemplateClass run();
};

#endif
