#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;

class Account
{
    int _accNumber;
    char _name[50];
    int _deposit;
    char _type;
public:
    void createAccount(); // create account in memory
    void showAccount() const; //show account
    void modify(); //modufy account
    void deposit(int); //add money
    void draw(int); //withdraw money
    void report() const; //show detail
    int returnAccountNum() const; //return account num
    int returnDeposit() const; //return balance amount 
    char returnType() const; //return type of account
};

#endif