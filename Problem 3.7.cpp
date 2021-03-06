// Problem 3.7.cpp : Defines the entry point for the console application.
//
/*7. Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. 
Some interaction with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars.
At the end of the first year you have 3000 + (3000 * 0.055), which is 3165. At the end of
the second year you have 3165 + (3165 * 0.055), which is 3339.08. Do this as many
times as there are years. A for loop makes the calculation easy.*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int years;
	float initial_amount, interest_year;
	cout << "Enter initial amount:" << endl;
	cin >> initial_amount;
	cout << "Enter number of years:" << endl;
	cin >> years;
	cout << "Enter interest rate (percent per year):" << endl;
	cin >> interest_year;
	interest_year = interest_year / 100;
	for (int n = years; n > 0; n--) {
		initial_amount = initial_amount + interest_year * initial_amount;

	}
	cout << "At the end of 10 years, you will have" << initial_amount << "dollars";
    return 0;
}

