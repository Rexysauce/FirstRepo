#include <iostream>
#include <cstdlib>
#include <ctime>

//Lottery

//Matthew McDaniel

/*
    Declare Variables
    Ask the user for their lottery number
    Randomize and assign the computer lottery number
    create temp variables to hold a split of the number
    divide the lottery number by num / 10 for the first and num % 10 for the second
    check if ld1 equals ud2 and ld2 equals ud1

    checks if they are the same
    if un == ln then they win 10,000

    checks if they are switched
    else if ud1 == ld2 && ud2 == ld1

    if one of the numbers matches
    else if ud1 == ld1 || ud1 == ld2 || ud2 == ld1 || ud2 == ld2

    after this is determined print the user reward in the output
    if not let the user know they won nothing

    rand() % 99 + 10

*/

using namespace std;

int main()
{
    //Global Variable Declaration
    int userNumber, lotteryNumber, ud1, ud2, ld1, ld2;

    //Asks the user to input their number and assigns it to a variable
    cout << "Welcome to the lottery! Please enter a two digit number: " << endl;
    cin >> userNumber;

    //Randomizes and creates the lottery number
    unsigned seed = time(0);
    srand(seed);
    lotteryNumber = rand() % 90 + 9;

    //Spits the numbers into comparable numbers

    //For the user number
    ud1 = userNumber / 10;
    ud2 = userNumber % 10;

    //For the lottery number
    ld1 = lotteryNumber / 10;
    ld2 = lotteryNumber % 10;

    //Checking if the user won any money, first starting with an error fail safe
    if(!((userNumber < 10) || (userNumber > 99)))
    {
        cout << "Your number is " << userNumber << "." << endl;
        if(userNumber == lotteryNumber)
        {
            cout << "The lottery number is " << lotteryNumber << endl;
            cout << "Congratulations! you won $10,000" << endl;
        }
        else if((ud1 == ld2) && (ud2 == ld1))
        {
            cout << "The lottery number is " << lotteryNumber << endl;
            cout << "Congratulations! you won $3,000" << endl;
        }
        else if((ud1 == ld1) || (ud1 == ld2) || (ud2 == ld1) || (ud2 == ld2))
        {
            cout << "The lottery number is " << lotteryNumber << endl;
            cout << "Congratulations! you won $1,000" << endl;
        }
        else
        {
            cout << "The lottery number is " << lotteryNumber << endl;
            cout << "Aw man, you did not win anything this time" << endl;
        }
    }
    else
    {
        cout << "You didn't enter a two digit number, please try again" << endl;
    }




}
