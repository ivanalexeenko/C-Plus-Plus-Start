#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int n,i;
double f,sum;


int main()
{
	cout << "Enter the amount of numbers" << endl;
	cin >> n;
	f = 1;
	sum = 1;
	for (i = 1; i <= n; i++)
	{
		f *= i;
		sum =sum+ (1 / f);
	}
	
	cout << "Summ is " << sum;
	_gettch();
	return 0;



  
}

