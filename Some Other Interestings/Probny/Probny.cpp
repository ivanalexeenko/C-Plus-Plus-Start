#include "stdafx.h"
#include<iostream>
#include<cstring>
using namespace std;
int massive1[100];

int n = 0;

double massive2[100];

int m = 0;

void chisla(char* s)
{


	int x;

	double y;

	for (int i = 0; i<100; i++)

		if (isdigit(s[i]))
		{

			int k;

			for (k = i, x = 0; isdigit(s[k]); k++)

				x *= 10, x += s[k] - '0';

			if (s[k] != '.')
			{

				if (s[i - 1] == '-')x = -x;
				massive1[n] = x;
				n++;
			}

			else
			{
				k++;
				y = x;

				for (double c = 0.1; isdigit(s[k]); k++, c *= 0.1)

					y += c*(s[k] - '0');

				if (s[i - 1] == '-')y = -y;
				massive2[m] = y;
				m++;
			}
			i = k;
		}
}


int main()
{

	setlocale(LC_ALL, "Russian");

	

	char s[100];

	cout << "¬ведите строку: " << endl;

	cin.getline(s, 100);

	cout << endl;
	chisla(s);
	
	cout<< endl;

	return 0;
}
