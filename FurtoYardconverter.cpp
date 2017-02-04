//Personal notes #2?
//Idk the C++ for dummies book kinda sucks, so let's give this one a shot? off the bat it looks better.


#include <iostream>
#include <stdio.h>
int furToYards(int);


int main(){
    int userFur;
    using namespace std;
    cout << "Enter your distance in Furlongs\n";
    cin >> userFur;
    int totalDist = furToYards(userFur);
    cout << "Your distance in yards is: " << totalDist << endl;
    return 0;
}

int furToYards(int fty)
{
    return 220 * fty;
}

