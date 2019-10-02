#include <iostream>
#include <iomanip>

using namespace std;

//Matthew McDaniel
int main()
{
    const double EARTH_ACCERLERATION = 9.81;
    const double MOON_ACCELERATION = 1.62;
    const double VENUS_ACCELERATION = 8.87;
    double earthWeight;
    double moonWeight;
    double venusWeight;
    double mass;

    cout << "Enter the mass in kg" << endl;
    cin >> mass;
    cout << "The mass is " << fixed << setprecision(4) << mass << " kg" << endl;

    //Weight calculations
    earthWeight = mass * EARTH_ACCERLERATION;
    moonWeight = mass * MOON_ACCELERATION;
    venusWeight = mass * VENUS_ACCELERATION;

    if(mass > 0)
    {
        cout << setw(8) << left << "Location" << setw(14) << right << "Weight (N)" << endl;
        cout << setw(8) << left << "Earth" << setw(14) << setprecision(4) << fixed << right << earthWeight << endl;
        cout << setw(8) << left << "Moon" << setw(14) << setprecision(4) << fixed << right << moonWeight << endl;
        cout << setw(8) << left << "Venus" << setw(14) << setprecision(4) << fixed << right << venusWeight << endl;
        //If the weight on the earth is greater than or equal to 1500 newtons output a message saying the object is heavy.

        if(earthWeight >= 1500.00)
        {
            cout << "The object is heavy" << endl;
        }
        else if (earthWeight < 5)
        {
            cout << "The object is light" << endl;
        }
    }
    else
    {
        cout << "The mass must be greater than zero" << endl;
    }


}
