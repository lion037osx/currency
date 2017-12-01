
#include"money.h"


Money::Money(int id,string name_money,double value){
cout<<"constructor Money , Money::Money(int id,string name_money,double value)"<<endl;
this->id_money=id;
this->name_money=name_money;
this->value_money=value;
}


Money::Money(){
cout<<"constructor Money"<<endl;
this->id_money=0x00;
}

Money::~Money(){
cout<<"destructor Money"<<endl;
}

void Money::set(string modify){
this->name_money=modify;
}

string Money::get_name_money(string modify){
return this->name_money;
}


double Money::get_value_money(){
return this->value_money;
}

void Money::set_value_money(double value_money_tmp){
this->value_money=value_money_tmp;
}
