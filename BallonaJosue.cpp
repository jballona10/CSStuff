// Ballona Josue 001
// CS2250

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// variables for the hours worked, pay rate, total made,
	// completing a second loop, and employee's name
	double dHoursWorked, dPay, dTotalPay;
	char chCont;
	string sEmployeeName;

	// Title
	cout << "StLouisCorp.\nWage Calculator.\n";

	// loop to ask employee for information and calculate pay
	do
	{
		// ask for employee's name
		cout << "Enter the employee's name.\n";
		cin >> sEmployeeName;
		// ask for the hourly base pay rate
		cout << "Enter the base pay rate per hour.\n";
		cin >> dPay;

		// do this is base pay entered is less than $7.65
		if (dPay < 7.65)
		{
			do
			{
				cout << "Base pay is lower than minimum wage. Try again.\n";
				cin >> dPay;
			}
			while (dPay < 7.65);
		}

		// ask for number of hours
		cout << "Enter the number of hours worked per week.\n";
		cin >> dHoursWorked;

		// do this if hours entered is greater than 60
		if (dHoursWorked > 60)
		{
			do
			{
				cout << "Hours worked is greater than hours allowed. Try again.\n";
				cin >> dHoursWorked;
			}
			while (dHoursWorked > 60);
		}

		cout << showpoint << setprecision(2) << fixed;
		// if hours worked is under 40, no overtime is needed
		if (dHoursWorked < 40)
		{
			dTotalPay = dHoursWorked * dPay;
			cout << sEmployeeName << "'s total pay per week is $" << dTotalPay << ".\n";
		}
		// else calculate overtime into total pay
		else
		{
			dTotalPay = 40 * dPay + (dHoursWorked - 40) * (dPay * 1.5);
			cout << sEmployeeName << "'s total pay per week is $" << dTotalPay << ".\n";
		}

		// asks user if they want to calculate another wage
		cout << "Do you want to do another? [Y/N]\n";
		cin >> chCont;
	}
	while (chCont == 'y' || chCont == 'Y');

	return 0;
}
