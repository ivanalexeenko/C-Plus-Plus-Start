#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cmath>
#include<cstring>
#include<stack>
using namespace std;
int main() 
{
	stack<char> S;
	char str [40];
	char brace[40] = {0};
	int k = 0;
	cin.getline(str, 40);
	system("color 9");
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '('|| str[i] == '[') {
			S.push(str[i]);
		}
		else if ((str[i] == ')' || str[i] == ']') && S.empty()) { cout << "Nope,this is incorrect =( " << endl; return false;
		}
		else if (str[i] == ')' || str[i] == ']')  {
			if
				(
					 ((str[i] == ')') && (S.top() == '('))||((str[i] == ']') && (S.top() == '['))
					)
			

			S.pop();
			
		}
		
	}
	cout << endl;
	
	if (S.empty()==true) cout << "Yeah,that's correct! " << endl; 

	else  cout << "Nope,this is incorrect =( " << endl;
return 0;

}