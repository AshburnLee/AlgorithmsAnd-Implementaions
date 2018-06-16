#include<iostream>
#include<string>
#include<cstdlib>   //rand()
#include<ctime>    //srand()
using namespace std;


void intro();
void rules();
void drawLine();

int main(int argc, char const *argv[])
{
    string playerName;
    int account;
    int bettingAmount;
    char choice;
    int guessNumber;

    srand(time(0));  //
    
    intro();
    rules();

    cout<<"\nEnter your name: ";
    cin>>playerName;
    cout<<"Enter your deposit to play game: $";
    cin>>account;

    do{
        cout<<"your current balance is $ "<<account<<"\n\n";
        cout<<playerName<<", Enter the money to be bet: $";
        cin>>bettingAmount;
        while(bettingAmount>account){
            cout<<"Invalid betting, re-input: ";
            cin>>bettingAmount;
        }

        cout<<"Guess a number of your choice: \t";
        cin>>guessNumber;
        while(guessNumber <= 0 || guessNumber > 10){
            cout<<"Invalid guess number, re-input: ";
            cin>>guessNumber;
        }

        //generate randoim number:
        int randomNumber = rand()%10 + 1;
        cout<<"Random number generated: \t"<<randomNumber<<endl;
        

        if (randomNumber == guessNumber){
            cout<<"\n\nGood Luck you won "<< bettingAmount * 10;
            account+=bettingAmount * 10;
        }else{
            cout<<"\n\nBad Luck this game you lose $ "<<bettingAmount<<endl;
            account-=bettingAmount;
        }
        cout<<"Current account is: $"<<account<<endl;
        if(account==0){
            cout<<"\n you have no money to play ";
            break;
        }



        cout<<"\nDo you want to play again?(y or n) ";
        cin>>choice;
    }while(choice=='Y'||choice=='y');

    cout<<"\n\n\n";
    drawLine();
    cout<<"\n\nThanks for you playing that game. Your balance is $ "<<account<<endl;
    drawLine();

    return 0;
}

void intro()
{
    drawLine();
    cout<<"\n\tCASINO GAME\n";  
    drawLine();
}

void rules()
{
    drawLine();
    cout<<"\n\t\tRULES OG THE GAME";
    cout<<"\n\t1. Choose your numbe between 1 to 10\n";
    cout<<"\n\t2. if you win you will get 10 times of money you bet\n";
    cout<<"\n\t3. if you bety on the wrong number you will lose you betting money\n";
    drawLine();
}

void drawLine()
{
    for (int i = 0;i<80; i++ )
        cout<<"_";
    cout<<"\n";
}