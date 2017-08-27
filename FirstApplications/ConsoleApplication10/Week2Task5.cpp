#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int a, b, c,year;
int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


int main()
{
	cout << "Enter day,month,year ";
	cin >> a >> b >> c;
	if ((c % 4 == 0) && (c % 100 != 0) || (c % 400 == 0)) year = 1;
	if ((a > 31 || a < 1 || b > 12 || b < 1 || (b == 2 && a > 28 && year == 0))||(a>month[b-1] && b!=2  ) || ( b==2 && a>month[b - 1] && year==0) || ( b==2 && year==1 && a>29)) {
		cout << "Wrong date" << endl;
		return 0;
	}

	else
		cout << "Today is " << a << "/" << b << "/" << c << endl;
	if (a < month[b - 1]) a++;
	if ((a == month[b - 1]) && (b != 12) && (year == 0)) a = 1, b++;
	else if ((b != 2) && (b != 12) && (a == month[b - 1]) && (year == 1)) a = 1, b++;
	if ((a == month[b - 1]) && b == 12) c++, a = 1, b = 1;
	if ((b == 2) && (a == 29) && (year == 1)) a = 1,b++;
	if ((b == 2) && (a == 28) && (year == 1)) a = 29;
	cout << "Next day is " << a << "/" << b << "/" << c << endl;
	_gettch();
    return 0;
}

