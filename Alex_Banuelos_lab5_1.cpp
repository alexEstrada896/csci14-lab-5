/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <cmath>

int main()
{
//asks user for celcius temperature
	cout << "Enter celcius temperature to convert to fahrenheit: " << endl;
//inputs celcius temperature
	double celcius;
	cin >> celcius;
//inputs celcius in equation so solve for fahrenheit
	double fahrenheit = (9/5)* celcius +32;
//outputs result
	cout << "Fahrenheit: "<< fahrenheit;
	return 0;
}