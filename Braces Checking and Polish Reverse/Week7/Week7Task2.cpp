#include "stdafx.h"
#include<iostream>
#include <cmath>
#include<cstring>
#include<stack>
int priority(char a) {
	if (a == '+' || a == '-') return 1;
	else if (a == '*' || a == '/') return 2;
	else return -1;
}
using namespace std;
int main()
{
	cout << "Enter a sequence: " << endl;
	char str[100];
	cin.getline(str, 100);
	char symb[100];
	stack<char> s;
	int k = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isdigit(str[i])) {
			symb[k] = str[i];
			k++;
		}
		else if (str[i] == '(') s.push(str[i]);
		else if (str[i] == ')') {
			while (s.top() != '(') {
				symb[k] = s.top();

				k++;
				s.pop();
			}
			s.pop();
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			if (s.empty() == true) s.push(str[i]);
			else {
				do {
					char a = s.top();
					s.pop();
					if ((a == '(') || priority(str[i]) > priority(a)) {
						s.push(a);
						break;
					}
					else {
						symb[k] = a;
						k++;
					}


				} while (s.empty() == false);
				s.push(str[i]);
			}
		}
	}
		while (s.empty() == false)
		{
			symb[k] = s.top();
			s.pop();
			++k;
		}
		cout << "Polish reverse of a sequence : " << endl;
	for (int i = 0; i < k; i++) cout << symb[i] ;
	cout << endl;
	double x1,x2 ;
	stack <double> t;

	for (int i = 0; i <k; i++) {
		if (isdigit(symb[i])) {
			t.push(symb[i]-'0');

		}
		 if (symb[i] == '+' || symb[i] == '-' || symb[i] == '*' || symb[i] == '/') {
			switch (symb[i]) {
			case '+':
			x2 = t.top();
			t.pop();
			x1 = t.top();
			t.pop();
			t.push(x1 + x2);
			break; 
			case '-':
			x2 = t.top();
			t.pop();
			x1 = t.top();
			t.pop();
			t.push(x1 - x2);
			break; 
			case '*':
			x2 = t.top();
			t.pop();
			x1 = t.top();
			t.pop();
			t.push(x1 * x2);
			break; 
			case '/':
			x2 = t.top();
			t.pop();
			x1 = t.top();
			t.pop();
			t.push(x1 / x2);
			break; 

			}
		}
	}
	cout << "The answer is : " << endl;
	cout << t.top() << endl;
	system("color 9");
	
	
	
	return 0;
}

  