/*
* Programmer Name: Nicholas Woolston
* Date: 07/02/2025 (DD//MM//YYYY)
* File Name: Chpt2_Ex7
* Expected Results: Write a program that displays the ocean level, in millimeters, in 5, 7, and 10 years.
* Assume the rate at which the ocean rises is 1.5 millimeters per year.
*/



#include <iostream>
using namespace std;
int MPHCalculation(double miles, double gallons);

int main()
{
    MPHCalculation(375, 15);
}

int MPHCalculation(double miles, double gallons)
{
    double MPG;
    MPG = miles / gallons;
    cout << "With " << gallons << " gallons of gas you went " << miles << " miles. Your MPG is: " << MPG;
    return MPG; //I honestly have no idea what to return here or why this works. I would appreciate feedback on why this works.
}