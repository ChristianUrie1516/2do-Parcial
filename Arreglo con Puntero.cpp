#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int intArray[], int nSize)
// displayArray - display the members of an array of length nSize
void displayArray1(int intArray[], int nSize)
{
	cout << "The value of the array is:\n" ;
	
	for(int n; n < nSize; n++)
	{
		cout << n << ": " << intArray[n] << "\n";
	}
	cout << "\n";
}

// displayArray - display the members of an array of length nSize
void displayArray2(int intArray[], int nSize)
{
	cout << "The value of the array is:\n" ;
	
	int* pArray = intArray;
	for(int n = 0; n < nSize; n++, pArray++)
	{
		cout << n << ": " << *pArray << "\n";
	}
	cout << "\n";
}
