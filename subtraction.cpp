#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Matthew McDaniel
int main(){

    //Generating the first number
   unsigned seed = time(0);
   srand(seed);
   int firstNumber = rand() % 10;
   cout << "The first number is " << firstNumber << endl;

   //Generating the second number
   int secondNumber = rand() % 10;
   cout << "The second number is " << secondNumber << endl;


   //if the number needs to be swapped this is
   int temp;
   //compare to see if the numbers are in correct order, if not swap them
   if(firstNumber < secondNumber){
        temp = secondNumber;
        //Displays to the user the problem
        cout << "What is " << temp << " - " << firstNumber << endl;
        //Answer Calculation
        int answer = temp - firstNumber;
        //Stores the users answer
        int userAnswer;
        cin >> userAnswer;
        //Calculates if the users answer is correct or not
        if (userAnswer == answer){
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect!" << " The answer is " << answer << endl;
        }

   } else {
       //This block of code is executed if the first number is greater than the second

       //Asks the user the question
       cout << "What is " << firstNumber << " - " << secondNumber << endl;
       //Calculates the true answer
       int answer = firstNumber - secondNumber;
       //Asks and stores the user answer
       int userAnswer;
       cin >> userAnswer;
       //Calculates if the answer is correct or not
       if (userAnswer == answer){
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect!" << " The correct answer is " << answer << endl;
        }
   }

   //ask the user to enter an answer, if the answer is correct say yay if not say wrong;





}
