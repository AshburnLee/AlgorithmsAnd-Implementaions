#ifndef FIGHTER_H
#define FIGHTER_H

#include<iostream>
#include<string>
using namespace std;

class Fighter
{
    int _chi;
    int _blood;
    int _actions[3];
public:
    Fighter();
    void getAttributes();
};

Fighter::Fighter()
{
    _chi = 0;
    _blood = 10;
    for(int i=0;i<3;i++){
        _actions[i] = i;
    }
}

void Fighter::getAttributes()
{
    cout<<"\nChi: "<<_chi;
    cout<<"\nBlood: "<<_blood;
    cout<<"\nActions: ";
    for(int i=0;i<3;i++){
        cout<<_actions[i]<<" "; 
    }
    cout<<"\n\n";
} 

#endif