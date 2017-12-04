#ifndef __USER_H__
#define __USER_H__
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "database.h"
#include "wallet.h"
#include "buy.h"

using namespace std;

class User:public Database, Wallet
{
private:
		int id_user;
		string username;
		string name;
public:
	User();
	User(int,string,string);
	~User();
	void buy(Buy &);

};
#endif
