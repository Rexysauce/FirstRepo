#include <iostream>

using namespace std;

//Matthew McDaniel CS.1336.503

/* Psuedo Code

Display to the user to ask how many units were purchased
Redisplay that information to the user
use conditionals to find what discount amount you are using
Based on the amount, the discount varies from 50% to 20%

To find the price cost take the unaltered price and then multiply it by the percentage (1 - .x based on what the percentage is)
after that, display the discount amount, and them the discounted price.

*/

int main()
{

    //Variable declaration
    const double UNIT_PRICE = 99.00;

    int unitCount;
    double unitCost; //Unit total after discount, not to be confused with UNIT_PRICE
    double discPercent;
    double discAmount;
    double unitCostOriginal; // For use of discount calculation

    //User purchase prompt, asking the user how many units they purchased
    cout << "Enter the units sold: ";
    cin >> unitCount;
    cout << "Units sold: " << unitCount << endl;

    //Conditional statement

    //If the user purchases more than 100 discs
    if(unitCount > 100){
        //Sets the discount to 50%
        discPercent = .5;

        //Unaltered price
        unitCostOriginal = unitCount * UNIT_PRICE;
        //Price Calculation
        unitCost = (unitCount * UNIT_PRICE) * discPercent;
        discAmount = unitCostOriginal - unitCost;

        //Output to the user
        cout << "Discount: " << discAmount << endl;
        cout << "Cost: " << unitCost << endl;
    }
    else if (unitCount < 99 && unitCount >= 50){
        //Sets the discount to 40% (60% of the original price)
        discPercent = .6;

        //Unaltered price
        unitCostOriginal = unitCount * UNIT_PRICE;
        //Price Calculation
        unitCost = (unitCount * UNIT_PRICE) * discPercent;
        discAmount = unitCostOriginal - unitCost;

        //Output to the user
        cout << "Discount: " << discAmount << endl;
        cout << "Cost: " << unitCost << endl;
    }
    else if (unitCount < 49 && unitCount >= 20){
        //Sets the discount to 30% (70% of the original price)
        discPercent = .7;

        //Unaltered price
        unitCostOriginal = unitCount * UNIT_PRICE;
        //Price Calculation
        unitCost = (unitCount * UNIT_PRICE) * discPercent;
        discAmount = unitCostOriginal - unitCost;

        //Output to the user
        cout << "Discount: " << discAmount << endl;
        cout << "Cost: " << unitCost << endl;
    }
    else if (unitCount < 19 && unitCount >= 10){
        //Sets the discount to 20% (80% of the original price)
        discPercent = .8;

        //Unaltered price
        unitCostOriginal = unitCount * UNIT_PRICE;
        //Price Calculation
        unitCost = (unitCount * UNIT_PRICE) * discPercent;
        discAmount = unitCostOriginal - unitCost;

        //Output to the user
        cout << "Discount: " << discAmount << endl;
        cout << "Cost: " << unitCost << endl;
    }
    else{
        //There is no discount because it is under 10
        unitCost = (unitCount * UNIT_PRICE);


        //Output to the user
        cout << "Discount: 0" << endl;
        cout << "Cost: " << unitCost << endl;
    }

    /*
    102; Discount: 5049, Cost: 5049
    40; Discount: 1188, Cost: 2772
    55; Discount: 2178, Cost: 3267
    12; Discount: 237.6, Cost: 950.4
    9; Discount: 0, Cost: 891
    */

}
