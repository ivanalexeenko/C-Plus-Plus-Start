#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int month[12] = { 31, 28,31,30,31,30,31,31,30,31,30,31 };
int a,b,c,A,B,C,days ;

int vis(int c) {
	int year = 0;
	if ((c % 4 == 0) && (c % 100 != 0) || (c % 400 == 0)) year = 1;
	if (year == 1) month[1] = 29;
	else  month[1] = 28;

	return year;
}





int main()
{
	int year = 0;
	cout << "Enter day,month,year(1)  " << endl;
	cin >> a >> b >> c;
	vis(c);
	if (b > 12 || b<1 || a>month[b - 1] || a < 1) {
		cout << "Wrong date"<<endl;
		exit(0);
	}

	cout << "Enter day,month,year(2)  " << endl;
	cin >> A >> B >> C;
	vis(C);
	if (B > 12 || B<1 || A>month[b - 1] || A < 1) {
		cout << "Wrong date"<<endl;
		exit(0);
	}

	days = 0;
	vis(c);
	while (a != A || b != B || c != C) {
		year = vis(c);
		if (a < month[b - 1]) { a++; days++; }
		if ((a == month[b - 1]) && (b != 12) && (year == 0)) a = 1, b++, days++; 
		
	  else if ((b != 2) && (b != 12) && (a == month[b - 1]) && (year == 1)) a = 1, b++,days++;
		if ((a == month[b - 1]) && b == 12) c++, a = 1, b = 1, days++;
		year = vis(c);
		
		if ((b == 2) && (a == 29) && (year == 1)) a = 1, b++, days++;
		
		if ((b == 2) && (a == 28) && (year == 1)) a = 29,
		days++;
		
	}

	cout << "You have been living for " <<days<< endl;
 return 0;
}
	


