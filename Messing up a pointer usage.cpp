#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int nNumberofArgs. char* pszArgs[])
{
	int     upper = 0;
	int     n     = 0;
	int     lower = 0;
	
	// output the values of the variables before...
	cout << "the initial values are" << end1;
	cout << "upper = " << upper << end1;
	cout << "n     = " << n     << end1;
	cout << "lover = " << lower << end1;
	
	// now stone a double into the apace
	// allocated for an int
	cout << "\nStoring 13.0 into the location &n" << end1;
	double* pD = (double*)&n;
	*pD = 13.0;
	
	// display the results
	cout << "\nThe final results are: " << end1;
	cout << "upper = " << upper << end1;
	cout << "n     = " << n     << end1;
	cout << "lower = " << lower << end1;
	
	// wait until user is ready before terminating program
	// to allow the user to see the pragram results
	system("PAUSE");
	return 0;
}
