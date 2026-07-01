#include <iostream>
using namespace std;

int main()
{
	float fahrenheit = 0;
	float celsius = 0;
	
	cout << "Enter the temperature in deg. Celsius : ";
	cin >> celsius;
	
	fahrenheit = (9*celsius)/5 + 32 ;
	
	cout << endl;
	cout << "Temprature in Fahrenheit : " << endl;
	cout << celsius << " deg C" << " = " << fahrenheit << " deg F" ;
	
	return 0;
}
