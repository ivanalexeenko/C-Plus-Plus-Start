#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;
int n,x=0, i;


int main()
{  cout << "Enter the number " << endl;
	cin >> n;
	
	for ( i = n; i >0; i--) {
		
		for (int j = i-1; j >= 1; j--) {
			
		if (i % j == 0)
			x += j;
	}
		if (i==x)
			cout << i << endl; x = 0;
	}


    return 0;
}

