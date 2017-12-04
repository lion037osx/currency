#include<iostream>
#include"trade.h"
#include "money.h"

using namespace std;
Trade::Trade(){
cout<<"constructor Trade"<<endl;
}

Trade::~Trade(){
cout<<"destructor Trade"<<endl;
}

void Trade::trading(){
Money money;  
cout<<" Trading"<<endl;
}
