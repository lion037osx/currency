#ifndef __WITHDRAW_H__
#define __WITHDRAW_H__
#include "money.h"

//template<class TemplateClass>
class Withdraw
{
private:
	int id_money;

public:
	Withdraw();
	~Withdraw();
	void withdraw(Money &);
	//Withdraw(TemplateClass);
};
#endif
