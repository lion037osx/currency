#include<iostream>
#include"user.h"


User::User(){
cout<<"constructor User"<<endl;
}

User::~User(){
cout<<"destructor User"<<endl;
}


User::User(string name,string username){
  this->username=username;
  this->name=name;
  cout<<"People::People(string str)"<<endl;
}
