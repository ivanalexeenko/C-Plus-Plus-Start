#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
float S1, S2, a, r;


int main()
{

	cout << "Insert circle's square" << endl;
	cin >> S1;
	cout << "Insert foursquare's square" << endl;
	cin >> S2;
	a = sqrt(S2 / 4);
	r = sqrt(S1 / 3.14);
	if (a >= r) cout << "Inside" << endl;
	else cout << "Outside" << endl;
	system("pause");

	return 0;
}
