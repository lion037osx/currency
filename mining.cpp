#include<iostream>
#include"mining.h"
#include "foreignExchange.h"

using namespace std;

template<class TemplateClass>
TemplateClass Mining<TemplateClass>::init(int id_money,TemplateClass typeMoney){
  cout<<"generate "<<id_money<<endl;

  switch(id_money){
    case BITCOIN:
        cout<<"Mining bitcoin "<<id_money<<endl;
        this->bitcoin+=typeMoney+0.00000001;
        return this->bitcoin;
        break;
    case SATOSHI:
        cout<<"Mining satoshi "<<id_money<<endl;
        this->satoshi+=typeMoney+1;
        return this->satoshi;
        break;
    case ETHEREUM:
        cout<<"Mining Ethereum "<<id_money<<endl;
        this->ethereum+=typeMoney+0.00000001;
        this->ethereum;
        break;
    case ZCASH:
        cout<<"Mining Zcash "<<id_money<<endl;
        this->zcash+=typeMoney+0.00000001;
        return this->zcash;
        break;
    case DASH:
        cout<<"Mining Dash "<<id_money<<endl;
        this->dash+=typeMoney+0.00000001;
        return this->dash;
        break;
    case DOLAR:
        cout<<"Mining Dolar "<<id_money<<endl;;
        this->dolar+=typeMoney+0.001;
        return this->dolar;
        break;
    case PESOS:
        cout<<"Mining $ "<<id_money<<endl;
        this->pesos+=typeMoney+0.01;
        return this->pesos;
        break;
    case EURO:
        cout<<"Mining Euro "<<id_money<<endl;
        this->euro+=typeMoney+0.0005;
        return this->euro;
        break;
    default:
        break;

  }
  return typeMoney;
}

template <class TemplateClass>
TemplateClass Mining<TemplateClass>::run(){

  return 0;
}
