#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //setw() ---------------------------------------------------------------------------------
    double x = 12.345;
    //cout << setw() << x;

    //showpoint ------------------------------------------------------------------------------
    double real = 5.0;
    cout << showpoint;
    cout << 19.75 << endl << real << endl;

    //setprecision ---------------------------------------------------------------------------
    //will print 12.36
    cout << setprecision(4) << 12.356;


    double number = 729.8876;

    cout << setprecision(8) << number << endl;
    cout << setprecision(6) << number << endl;
    cout << setprecision(4) << number << endl;
    cout << setprecision(2) << number << endl;

    //fixed ----------------------------------------------------------------------------------
    //Will only count the values after the decimal, so if you have 12.56 with fixed(2) it only counts the 5 and the 6
    //fixed works in conjunction with setprecision

    double y = 723.9482;

    //prints 723.95
    cout << setprecision(2) << fixed << y << endl;

    //you can also do something like this
    double z = 5.25;
    //This prints 5.2500, helpful if you need a formula or if you want it to be organized
    cout << setprecision(4) << fixed << showpoint << z << endl;








}
