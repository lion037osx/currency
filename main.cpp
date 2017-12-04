#include<iostream>
#include "user.h"
#include "buy.h"
#include"money.h"
#include"foreignExchange.h"

using namespace std;

int main(){
cout<<"\t\tbienvenidos al forex de criptomonedas"<<endl;

User user0(0,"user0","user0@username");
User user1(1,"user1","user1@username");
User user2(2,"user2","user2@username");
//Money m_money(0,"Bitcoin",0.0017);
Money select_money(0,"Bitcoin: ",0.0017);
Buy buy(select_money);
user0.buy(buy);





return 0;
}
