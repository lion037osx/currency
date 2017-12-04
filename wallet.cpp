#include<iostream>
#include"wallet.h"
#include"foreignExchange.h"

using namespace std;
Wallet::Wallet(){
cout<<"constructor Wallet"<<endl;
}

Wallet::~Wallet(){
cout<<"destructor Wallet"<<endl;
}


void Wallet::put(){
cout<<"BITCOIN"<<this->bitcoin<<endl;
cout<<"SATOSHI"<<this->satoshi<<endl;
cout<<"ETHEREUM"<<this->ethereum<<endl;
cout<<"ZCASH"<<this->zcash<<endl;
cout<<"DASH"<<this->dash<<endl;
cout<<"DOLAR"<<this->dolar<<endl;
cout<<"PESOS"<<this->pesos<<endl;
}

void Wallet::insert(Money & money){
int id =money.get_id_money();
double quantity;

switch(id){
    case BITCOIN:
        this->bitcoin+=quantity;
        cout<<"BITCOIN: "<<this->bitcoin<<endl;
        break;
    case SATOSHI:
        this->satoshi+=quantity;
        cout<<"SATOSHI: "<<this->satoshi<<endl;
        break;
    case ETHEREUM:
        this->ethereum+=quantity;
        cout<<"ETHEREUM: "<<this->ethereum<<endl;
        break;
    case ZCASH:
        this->zcash+=quantity;
        cout<<"ZCASH: "<<this->zcash<<endl;
        break;
    case DASH:
        this->dash+=quantity;
        cout<<"DASH: "<<this->dash<<endl;
        break;
    case DOLAR:
        this->dolar+=quantity;
        cout<<"DOLAR: "<<this->dolar<<endl;
        break;
    case PESOS:
        this->pesos+=quantity;
        cout<<"PESOS: "<<this->pesos<<endl;
        break;
    case EURO:
        this->euro+=quantity;
        cout<<"EURO: "<<this->euro<<endl;
        break;
    default:
        break;
  }
}

void Wallet::update(){
  /*
  this->bitcoin+=db;
  this->satoshi+=db;
  this->ethereum+=db;
  this->zcash+=db;
  this->dash+=db;
  this->dolar+=db;
  this->pesos+=db;
  this->euro+=db;
  */
}
