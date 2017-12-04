#include<iostream>
#include"withdraw.h"
#include "mining.h"

using namespace std;
Withdraw::Withdraw(){
  cout<<"constructor Withdraw"<<endl;
}

Withdraw::~Withdraw(){
  cout<<"destructor Withdraw"<<endl;
}


void Withdraw::withdraw(Money & money){
  Mining<int>currency(money.get_id_money());
}
