#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int n,i,y,s=0,j;

int main()
{
	cout << "Your number is : " << endl;
	cin >> n;
	for (i = 0; i <= n; i++) {
		j = i;
		while (j) {
			j /= 10;
			s++;
		} 
		if ((i*i - i) % int(pow(10, s)) == 0)
			cout << i << endl;
		s = 0;	
	}
    return 0;
}

