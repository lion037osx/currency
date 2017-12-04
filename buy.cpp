#include<iostream>
#include"buy.h"
#include"foreignExchange.h"

using namespace std;
Buy::Buy():Money(){
cout<<"constructor Buy"<<endl;
}

Buy::~Buy(){
cout<<"destructor Buy"<<endl;
}

Buy::Buy(Money & money){
static int int_id_money;
int_id_money=money.get_id_money();

switch(int_id_money){
  case BITCOIN:
  cout<<"buy bitcoin "<<int_id_money<<endl;
  break;
  case SATOSHI:
  cout<<"buy satoshi "<<int_id_money<<endl;
  break;
  case ETHEREUM:
  cout<<"buy Ethereum "<<int_id_money<<endl;
  break;
  case ZCASH:
  cout<<"buy Zcash "<<int_id_money<<endl;
  break;
  case DASH:
  cout<<"buy Dash "<<int_id_money<<endl;
  break;
  case DOLAR:
  cout<<"buy Dolar "<<int_id_money<<endl;
  break;
  case PESOS:
  cout<<"buy $ "<<int_id_money<<endl;
  break;
  default:
  break;
  }
}
