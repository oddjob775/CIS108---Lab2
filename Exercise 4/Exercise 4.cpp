/* declare variable - age in years
   define constant - days in year
   AGE in DAYS = Variable x Constant */

#include <iostream>
using namespace std;

int main()

{
	int AGE;

	AGE = 30;

	const int DAYS = 365.25;
	
	cout << "My AGE (30) in DAYS/YEAR (365) =\n";
	cout << AGE * DAYS;

	return 0;

}