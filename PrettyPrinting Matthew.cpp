/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

#include <iostream>
#include <iomanip>
#define NAME_COL_WIDTH 40
//#define FNAME_COL_WIDTH 20
//#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main()
{

    // Use stream manipulators to format

    cout << "-----------------------------------------------------------------------\n";

    // Display headings

    // Column 1

    cout << left; // Left-justify names
    cout << setw(NAME_COL_WIDTH);
    cout << "LAST NAME";
    cout << '\t';

    // Column 2

    cout << setw(NAME_COL_WIDTH);
    cout << "FIRST NAME";
    cout << '\t';


    // Column 3

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

    //-----------------------------------------------------------------------------------------------------

    //Last name
    cout << left;
    cout << setw(NAME_COL_WIDTH);
    cout << "McDaniel";
    cout << '\t';

    //First Name
    cout << setw(NAME_COL_WIDTH);
    cout << "Matthew";
    cout << '\t';

    //sets the GPA formatting
    cout << fixed << showpoint << setprecision(2);

    //GPA
    cout << right;
    cout << setw(GPA_COL_WIDTH);
    cout << 3.7;
    cout << endl;
    // -----------------------------------------------------------------------------------------------------


}
