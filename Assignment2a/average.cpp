/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/16/2019
 * *Description: This program asks the user for five numbers and then
 * *		 prints out the average of those numbers.
 * **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double num1, num2, num3, num4, num5, average;

	//The user enters five numbers
	cout << "Please enter five numbers.\n";
	cin >> num1;		//first number entered
	cin >> num2;		//second number entered
	cin >> num3;		//third number entered
	cin >> num4;		//fourth number entered
	cin >> num5;		//fifth number entered

	//Use formula to calculate the average
	average = (num1 + num2 + num3 + num4 + num5) / 5;

	//Display the average
	cout << "The average of those numbers is: \n";
	cout << average << endl;

	return 0;
} 
