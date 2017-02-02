int main(int nNumberoOfArgs, char* pszArgs[])//What does nNumberoOfArgs do??
{
    //This part of the program allows you to enter temp in Celsius;
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    //Conversion
    int factor;
    factor = 212 - 32;


    //Fahrenheit conversion
    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    //Output
    cout << "Your Fahrenheit value is: ";
    cout << fahrenheit << endl;

    system("WAIT FOR USER INPUT");
    return 0;
}
