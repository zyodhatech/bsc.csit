#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, result = 0;
	cout << "Enter a number, say x :" << endl;
	cin >> x;
	
	if(x>=0)
		result = pow(x,2) + sqrt(x);
	else if (x<0 && x>-10)
		result = 1 - exp(x);
	else if (x <= -10)
		result = abs(x+5);
		
	cout << "y = " << result << endl;
	
	return 0;

}
