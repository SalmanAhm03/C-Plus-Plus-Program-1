//
//  main.cpp
//  Program 1 CSCI 240
//
//  Created by Salman Ahmed on 8/31/21.
//

/***************************************************************
CSCI 240         Program 1     Fall 2021

Programmer: Salman Ahmed

Section: Section 1

Date Due: September 3rd, 2021

Purpose: This program performs simple arithmetic calculations and
        displays the results.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1, num2, sum, diff, prod, quot, prct, oppdiff, oppquot, oppprct;    //Define variables
    
    
    cout << " Enter the first number: ";    //Print integers
    cin  >> num1;
    
    cout << " Enter the second number: ";
    cin >> num2;
    
    sum = num1 + num2;      //Assign formulas to variables
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    prct = num1 % num2;
    oppdiff = num2 - num1;
    oppquot = num2 / num1;
    oppprct = num2 % num1;
    
    cout << "\n " << num1 << " + " << num2 << " = " << sum << endl;         //Print function result
    cout << " " << num1 << " - " << num2 << " = " <<diff <<endl;
    cout << " " << num1 << " * " << num2 << " = " <<prod <<endl;
    cout << " " << num1 << " / " << num2 << " = " <<quot <<endl;
    cout << " " << num1 << " % " << num2 << " = " <<prct <<endl;
    cout << "\n " << num2 << " - " << num1 << " = " << oppdiff <<endl;
    cout << " " << num2 << " / " << num1 << " = " << oppquot <<endl;
    cout << " " << num2 << " % " << num1 << " = " << oppprct <<endl;
    
    return 0;
}
