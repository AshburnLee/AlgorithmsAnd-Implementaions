#include<iostream>
using namespace std;

char positions[10] = {'0','1','2','3','4','5','6','7','8','9'};

void gameBoard();
int checkIn();

int main(int argc, char const *argv[])
{
    int player=1;
    int i;
    int choice;
    char mark;

    do{
        gameBoard();
        player = (player%2)?1:2;

        cout<<"player "<<player<<", enter pick a position: ";
        cin>>choice;

        mark=(player == 1) ? 'X' : 'O'; //when player=1, mark='X'

        if(choice == 1 && positions[1] == '1')
            positions[1] = mark;  // write mark to that position
        else if(choice == 2 && positions[2] == '2')
            positions[2] = mark;
        else if(choice == 3 && positions[3] == '3')
            positions[3] = mark;
        else if(choice == 4 && positions[4] == '4')
            positions[4] = mark;
        else if(choice == 5 && positions[5] == '5')
            positions[5] = mark;
        else if(choice == 6 && positions[6] == '6')
            positions[6] = mark;        
        else if(choice == 7 && positions[7] == '7')
            positions[7] = mark;
        else if(choice == 8 && positions[8] == '8')
            positions[8] = mark;
        else if(choice == 9 && positions[9] == '9')
            positions[9] = mark;
        else{
            cout<<"invalid move";

            player--; // move back!!
            cin.ignore();
            cin.get();
        }
        i = checkIn();

        player++;
    }while(i==-1); //if in process ,continue

    gameBoard();
    if(i==1)
        cout<<"player: "<<player-1<<" win";
    else
        cout<<"Game over";

    cin.ignore();
    cin.get();
    return 0;
}

//****************************
//  1 Winner with result
//  -1 game in process
//  0 Game is over with no result
//****************************
int checkIn()  //Got a winner
{
    if(positions[1] == positions[2] && positions[2] == positions[3])
        return 1;
    else if(positions[4] == positions[5] && positions[5] == positions[6])
        return 1;
    else if(positions[7] == positions[8] && positions[8] == positions[9])
        return 1;
    else if(positions[1] == positions[4] && positions[4] == positions[7])
        return 1;
    else if(positions[2] == positions[5] && positions[5] == positions[8])
        return 1;
    else if(positions[3] == positions[6] && positions[6] == positions[9])
        return 1;
    else if(positions[1] == positions[5] && positions[5] == positions[9])
        return 1;
    else if(positions[3] == positions[5] && positions[5] == positions[7])
        return 1;  

    else if(positions[1] != '1' && positions[2] != '2' && positions[3] != '3'
            && positions[4] != '4'&& positions[5] != '5' && positions[6] != '6'
            && positions[7] != '7' && positions[8] != '8' && positions[9] != '9')
        return 0;  //all positions have value that are different the original.OVER 
    else
        return -1; //Game in process
}

//*******************************
//  Draw the game board
//*******************************
void gameBoard()
{
    cout<<"\n\n\tTic Tac Toe\n\n";

    cout<<"Player 1 (X)  -   player 2 (O)"<<endl<<endl;
    cout<<" _____ _____ _____"<<endl;
    cout<<"|     |     |     |"<<endl;
    cout<<"|  "<<positions[1]<<"  |  "<<positions[2]<<"  |  "<<positions[3]<<"  |"<<endl;
	cout<<"|_____|_____|_____|"<<endl;
	cout<<"|     |     |     |"<<endl;
    cout<<"|  "<<positions[4]<<"  |  "<<positions[5]<<"  |  "<<positions[6]<<"  |"<<endl;
	cout<<"|_____|_____|_____|"<<endl;
	cout<<"|     |     |     |"<<endl;
    cout<<"|  "<<positions[7]<<"  |  "<<positions[8]<<"  |  "<<positions[9]<<"  |"<<endl;
	cout<<"|_____|_____|_____|"<<endl<<endl;
}