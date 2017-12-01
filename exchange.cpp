#include<iostream>
#include"exchange.h"
#include "money.h"
using namespace std;

Exchange::Exchange():Money(){
cout<<"constructor Exchange"<<endl;
}

Exchange::~Exchange(){
cout<<"destructor Exchange"<<endl;
}

double Exchange::get(Money & money){
double _money;
return _money;
}

double Exchange::calculate(Money & money){
return money.get_value_money();
}
