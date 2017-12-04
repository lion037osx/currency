#include<iostream>
#include"user.h"


User::User():Database(){
cout<<"constructor User"<<endl;
}

User::~User(){
cout<<"destructor User"<<endl;
}


User::User(int id,string name,string username){
  this->username=username;
  this->name=name;
  this->id_user=id;
  cout<<"User::User( "<<id<<" , "<<name<<" , "<<username<<" )"<<endl;
}

void User::buy(Buy & m_buy){



}
