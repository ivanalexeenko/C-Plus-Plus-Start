#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
float a;

int main()
{
	cout << "Enter your number" << endl;
	cin >> a;
	while (a > 1) { a = a / 2; }
if (a == 1) cout << "Yes" << endl;
else cout << "No" << endl;
_gettch();
    return 0;

}
