/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
//asks user for principle
	cout << "What is the balance in your savings account?: " << endl;
//inputs principel
	double principle;
	cin >> principle;
//asks user for intrest rate
	cout << "What is your intrest rate?: " << endl;
//inputs rate
	double rate ;
	cin >> rate;
	double intrestRate = rate / 100;
//asks user for number of times intrest rate is compunded
	cout << "What is the number of times your intrest in compounded?: "<< endl;
//inputes time compounded
	double timeCompounded;
	cin >> timeCompounded;
//calculates total amount and intrest
	double totalAmount = principle * pow((1 + (intrestRate/timeCompounded)),timeCompounded);
	double intrest = totalAmount - principle;
//dispays the promps
	cout <<"Intrest rate: %"<<rate << endl;
	cout <<"Times compounded: "<<timeCompounded << endl;
	cout << "Principle: $"<<principle<< endl;
	cout<< "Intrest: $" <<intrest << endl;
	cout << "Amount in savings: $" << totalAmount << endl;
	    return 0;
}