#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
float km1, km2, dayz;


int main()
{
	cout <<"Enter the 1st day kilometers"<<km1<< endl;
	cin >>km1;
	cout << "Enter the nst day kilometers" << km2 << endl;
	cin >> km2;
	dayz = 1;
	while (km1 <= km2)
	{
		dayz++;
		km1 = km1*1.1;
	}
		cout << "Running days " << dayz << endl;

	
	

	_gettch(); 
    return 0;
}

