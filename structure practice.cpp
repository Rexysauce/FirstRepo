#include <iostream>

//Matthew McDaniel


/*
    This program is designed to practice using the syntax of structures in c++
    This program will list 3 cars given different structures,
    two will be names and then the user will input the last one.
*/
using namespace std;

struct car
{
    string modelName;
    int horsePower;
    string chassisCode;
    int numOfDoors;
};

int main()
{
    cout << "The first car is a 2013 Subaru BRZ" << endl;

    car Subaru_BRZ =
    {
        "Subaru BRZ",
        205,
        "FT86",
        4
    };

    cout << "The " << Subaru_BRZ.modelName << " makes a whopping " << Subaru_BRZ.horsePower << " HP. The chassis code "
    << Subaru_BRZ.chassisCode << " is derived from the GT86 Corolla. It does not have " << Subaru_BRZ.numOfDoors << " doors." << endl;


    car Honda_Civic =
    {
        "Honda Civic",
        146,
        "BK50",
        2
    };

    car user_car;

    cout << "The " << Honda_Civic.modelName << " makes an incredible " << Honda_Civic.horsePower << " HP. The chassis code I don't know so I made it up." << endl;
    cout << "the code I made up is " << Honda_Civic.chassisCode << ". it has only " << Honda_Civic.numOfDoors << " doors." << endl;

    cout << "The last car you will enter the information" << endl;
    cout << "Whats the model of the car?" << endl;
    cin >> user_car.modelName;
    cout << "Sick I hope you typed that right cause there's no going back" << endl;

    cout << "Whats the cars horsepower? Number only please" << endl;
    cin >> user_car.horsePower;

    cout << "Whats the cars chassis code?" << endl;
    cin >> user_car.chassisCode;

    cout << "How many doors does the car have " << endl;
    cin >> user_car.numOfDoors;
    cout << "Ha I bet this car sucks" << endl;

    cout << "The car the user entered is called the " << user_car.modelName << ". is a piece of shit only making " << user_car.horsePower << " HP. Pathetic." << endl;
    cout << "The piece of garbage chassis code is " << user_car.chassisCode << ". and has a miserable " << user_car.numOfDoors << " number of doors.";

}
