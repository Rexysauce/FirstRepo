#include <iostream>
#include <iomanip>
using namespace std;
//Programmed by Matthew McDaniel 9/16/2019
int main()
{
    //declaration of student variables
    int maleStudents, femaleStudents, totalStudents;
    double malePercentage;
    double femalePercentage;

    cout << "Enter the number of males students: ";
    cin >> maleStudents;
    cout << "Enter the number of female students: ";
    cin >> femaleStudents;

    //Calculates the total number of students
    totalStudents = maleStudents + femaleStudents;

    //Percentage for male and female students
    malePercentage = (maleStudents / static_cast<double>(totalStudents)) * 100;
    femalePercentage = (femaleStudents / static_cast<double>(totalStudents)) * 100;

    cout << "For the " << totalStudents << " students in the class the male and female percentages are:" << endl;

    cout << setw(10) << "Male: " << malePercentage << "%" << endl;
    cout << setw(10) << "Female: " << femalePercentage << "%" << endl;
}
