#ifndef __MONEY_H__
#define __MONEY_H__
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

class Money{
protected:
	int id_money;
	double value_money;
	string name_money;


public:
	Money();
	Money(int,string,double);
	~Money();
	void set(string);
	string get_name_money(string modify);
	double get_value_money();
	void set_value_money(double);
};

#endif
