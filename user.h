#ifndef __USER_H__
#define __USER_H__
#include <string>
#include <stdio.h>
#include "stdlib.h"
using namespace std;

class User{
private:
		int id_people;
		string username;
		string name;
public:
	User();
	User(string,string);
	~User();
};
#endif
