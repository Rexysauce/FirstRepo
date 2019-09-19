#include <iostream>

/*
        Written by Matthew McDaniel 9/4/2019
        CS1336.503



        Psuedo:
        Ask the user for how much money they would like to have split.
        Store the users response in a variable

        To avoid conflict, cast the variable as an int and multiply it by 100
        To find the amount of each type, divide it by the currency value (i.e. if it was twenties it would be x / 2500
        After that, make the user amount equal to the modular of the bill value to take the remaining cash to be split

        Do this until the the categories are complete
        Display the amount of each bill and coin to the user


*/

using namespace std;

int main()
{
    //variable declaration

    //Users entered money
    double userMoneyAmount;

    const int TWENTIES = 2000;
    const int TENS = 1000;
    const int FIVES = 500;
    const int ONES = 100;
    const int QUATERS = 25;
    const int DIMES = 10;
    const int NICKELS = 5;
    const int PENNIES = 1;
    int twentyCount;
    int tenCount;
    int fiveCount;
    int oneCount;
    int quaterCount;
    int dimeCount;
    int nickelCount;
    int pennyCount;

    //output to the user
    cout << "Please enter the money amount (formated as xx.xx): " << endl;
    cin >> userMoneyAmount;

    //This keeps the original amount for me to later display
    double userMoneyOriginal = userMoneyAmount;

    //converts the money into a convertible form for sorting
    userMoneyAmount = userMoneyAmount * 100;


    //sorting into twenties
    twentyCount = static_cast<int>(userMoneyAmount) / TWENTIES;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % TWENTIES;

    //sorting into tens
    tenCount = static_cast<int>(userMoneyAmount) / TENS;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % TENS;

    //Sorting into fives
    fiveCount = static_cast<int>(userMoneyAmount) / FIVES;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % FIVES;

    //Sorting into ones
    oneCount = static_cast<int>(userMoneyAmount) / ONES;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % ONES;

    //Sorting into quarters
    quaterCount = static_cast<int>(userMoneyAmount) / QUATERS;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % QUATERS;

    //Sorting into dimes
    dimeCount = static_cast<int>(userMoneyAmount) / DIMES;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % DIMES;

    //Sorting into nickels
    nickelCount = static_cast<int>(userMoneyAmount) / NICKELS;
    userMoneyAmount = static_cast<int>(userMoneyAmount) % NICKELS;

    //sorting into pennies
    pennyCount = static_cast<int>(userMoneyAmount) / PENNIES;

    //returns the money amount and the count of each category to the user
    cout << "you entered the monetary amount of $" << userMoneyOriginal << endl;
    cout << "You have " << twentyCount << " twenties" << endl;
    cout << "You have " << tenCount << " tens" << endl;
    cout << "You have " << fiveCount << " fives" << endl;
    cout << "You have " << oneCount << " ones" << endl;
    cout << "You have " << quaterCount << " quarters" << endl;
    cout << "You have " << dimeCount << " dimes" << endl;
    cout << "You have " << nickelCount << " nickels" << endl;
    cout << "You have " << pennyCount << " pennies" << endl;






}
