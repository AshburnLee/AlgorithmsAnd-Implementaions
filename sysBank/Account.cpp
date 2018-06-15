#include"Account.h"
#include<iostream>
#include<iomanip>
using namespace std;

void Account::createAccount()
{
    cout<<"\nEnter the Account No. :";
    cin>>_accNumber;
    cout<<"\n\nEnter the _name of the account holder :";
    cin.ignore();
    cin.getline(_name, 50);
    cout<<"\nEnter the type of account (C/S) :";
    cin>>_type;
    _type=toupper(_type);
    cout<<"\nEnter the initial amount :";
    cin>>_deposit;
    cout<<"\n\n\nAccount Created...\n";
}

void Account::showAccount() const
{
    cout<<"\nAccount No.: "<<_accNumber;
    cout<<"\nAccount Holder Name : ";
    cout<<_name;
    cout<<"\nType of Account :"<<_type;
    cout<<"\nBalance Amount :"<<_deposit;
}

void Account::modify()
{
    cout<<"\nAccount No.: "<<_accNumber;
    cout<<"\nModify Account Holder Name:";
    cin.ignore();
    cin.getline(_name,50);
    cout<<"Modify Type of Account:";
    cin>>_type;
    _type=toupper(_type);
    cout<<"\nModify Balance Amount:";
    cin>>_deposit;
}

void Account::deposit(int x)
{
    _deposit+=x;
}
void Account::draw(int x)
{
    _deposit-=x;
}
void Account::report() const
{   // std::setw set field width
    cout<<_accNumber<<setw(10)<<" "<<_name<<setw(10)<<" "<<_type<<setw(10)<<_deposit<<endl; 
}
int Account::returnAccountNum() const
{
    return _accNumber;
}
int Account::returnDeposit() const
{   
    return _deposit;
}
char Account::returnType() const
{
    return _type;
}