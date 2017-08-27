#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout << "Insert 4 numbers" << endl;
	int c[4], i = 0, max = -4000000;
	do {
		cin >> c[i++];
	} while (i < 4);
	for (i = 0  ; i < 4; i++)
		if (max < c[i] && c[i] % 2 == 0)
			max = c[i];
	if (max == -4000000) cout << "No " << endl; return 0;
	cout << " The largest even=" << max << endl;
	//_gettch();
    return 0;
}

