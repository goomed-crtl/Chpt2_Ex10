/*
* Programmer Name: Nicholas Woolston
* Date: 07/02/2025 (DD//MM//YYYY)
* File Name: Chpt2_Ex10
* Expected Results: Write a program that calculates Miles Per Gallon. Start with the values of 375 miles and 15 gallons. Display the results.
* Then, create a branch where the user can input values. Display the results. 
*/



#include <iostream>
using namespace std;
int MPHCalculation(double miles, double gallons);

int main()
{
    double userMiles;
    double userGallons;
    cout << "Welcome to the Miles Per Gallon calculator! \n";
    cout << "Firstly, how many miles did you travel? \n";
    cin >> userMiles;
    cout << "And how many gallons did you use? \n";
    cin >> userGallons;

    MPHCalculation(userMiles, userGallons);
}

int MPHCalculation(double miles, double gallons)
{
    double MPG;
    MPG = miles / gallons;
    cout << "With " << gallons << " gallons of gas you went " << miles << " miles. Your MPG is: " << MPG;
    return MPG; //I honestly have no idea what to return here or why this works. I would appreciate feedback on why this works.
}