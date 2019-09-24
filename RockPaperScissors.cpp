#include <iostream>
#include <cstdlib>
#include <ctime>

//Rock Paper Scissors

//Matthew McDaniel

/*
 Display for the user to enter a number between 0 and 2
 Use rand to generate a random number that serves as the computers choice (again 0 to 2)
 Using if statements and the and operation and compare the numbers to determine the winner
 output to the user both their choice and the computers choice and who won the match.
*/

/* output
0 = The computer is rock. You are scissors. You Lose.
1 = The computer is scissor. You are rock. You Win.
2 = The computer is rock. You are paper. You Win.
5 = Enter a number between 0 and 2.
25 = Enter a number between 0 and 2.
*/

using namespace std;

int main() {

    int userChoice;
    string userType;
    string computerType;

    cout << "Choose one of the following: " << endl;
    cout << "scissor (0), rock (1), paper (2): " << endl;;
    cin >> userChoice;

    //----------------------------------------------------------------------------------
    //Computer choice
    unsigned seed = time(0);
    srand(seed);
    int computerChoice = rand() % 3;

    //----------------------------------------------------------------------------------
    //Type classification
    if(userChoice == 0)
    {
        userType = "scissor";
    }
    else if(userChoice == 1)
    {
        userType = "rock";
    }
    else if (userChoice == 2)
    {
        userType = "paper";
    }
    else
    {
        cout << "Enter a number between 0 and 2";
    }
    //----------------------------------------------------------------------------------
    //Computer type classification
    if(computerChoice == 0)
    {
        computerType = "scissor";
    }
    if(computerChoice == 1)
    {
        computerType = "rock";
    }
    if (computerChoice == 2)
    {
        computerType = "paper";
    }

    //----------------------------------------------------------------------------------
    //if the user has scissors
    if((userChoice == 0) && (computerChoice == 0))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". It's a draw." << endl;
    }
    if((userChoice == 0)  && (computerChoice == 1))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". You lost." << endl;
    }
    if((userChoice == 0) && (computerChoice == 2))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". You won." << endl;
    }
    //----------------------------------------------------------------------------------
    //if the user has rock
    if((userChoice == 1) && (computerChoice == 0))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". You Win." << endl;
    }

    if((userChoice == 1) && (computerChoice == 1))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". It's a draw." << endl;
    }

    if((userChoice == 1) && (computerChoice == 2))
    {
        cout << "The computer is " << computerType << ". You are " << userType <<". You Lost." << endl;
    }
    //-----------------------------------------------------------------------------------
    //if the user has paper
    if((userChoice == 2) && (computerChoice == 0))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". You Lose" << endl;
    }
    if((userChoice == 2) && (computerChoice == 1))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". You Win" << endl;
    }
    if((userChoice == 2) && (computerChoice == 2))
    {
        cout << "The computer is " << computerType << ". You are " << userType << ". It's a draw." << endl;
    }
}
