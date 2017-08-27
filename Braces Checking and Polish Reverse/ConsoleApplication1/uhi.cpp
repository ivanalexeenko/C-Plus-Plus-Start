
#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;
void Sort(char*str, int len)
{
	for (int i = len - 1; i>0; i--)
	{
		for (int j = 0; j<i; j++)
		{
			if (str[j] > str[j + 1])

				swap(str[j], str[j + 1]);
		}
	}
} //��������� ����� ���������
bool anagram(char*word1, char*word2, int len1, int len2)
{
	char*a = new char[strlen(word1) + 1];
	strcpy(a, word1);
	char*b = new char[strlen(word2) + 1];
	strcpy(b, word2);
	Sort(a, strlen(a));
	Sort(b, strlen(b));

	if (len1 == len2)
		if (strcmp(a, b) == 0) return 0;
		else return -1;

	else return -1;
}//��������� ����� �� �������������
void DeleteWord(char*str, char*delstr)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (strncmp(str + i, delstr, strlen(delstr)) == 0)
			memmove(str + i - 1, str + i + strlen(delstr), strlen(str) - i - strlen(delstr) + 1);

	}
}//������� ����� �� ������
void Compare(char**A, char**B, int a, int b)
{
	int n = 0;
	for (int i = 0; i < b; i++)
	{

		for (int j = 0; j < a; j++)
		{

			if (strcmp(B[i], A[j]) == 0) n++;
		}
	}
	if (n == b)
		cout << "YES, all words from string B are included in string A" << endl;


	else 	cout << "NO, not all words from string B are included in A" << endl;


}// ���������, ����� �� �� ���� ������ A �������� ����� ������ B

int main()
{
	/* char A[] = "Everything mirror is possible  harred if you will rimrro try harder";
	char B[] = "Everything if you "; */

	//������ � � � ��� ��������, ���� ���� �������, ����� ����������������� � ���������������� ���������:

	char A[200];
	cout << "Enter sentence A" << endl;
	cin.getline(A, 200);
	char B[200];
	cout << "Enter sentence B" << endl;
	cin.getline(B, 200);

	cout << A << endl;
	char*a = new char[strlen(A) + 1];
	strcpy(a, A);
	char*b = new char[strlen(B) + 1];
	strcpy(b, B);
	//������� ����� �������� �����������, ������ ��� strtok ������ ������


	char**w1 = new char*[15];
	for (int i = 0; i < 15; i++)
		w1[i] = new char[30];

	char**w2 = new char*[15];
	for (int i = 0; i < 15; i++)
		w2[i] = new char[30];

	//������� ��� ������������ ������� �����
	int i = 0;
	int j = 0;
	char*s;
	s = strtok(a, " .,");

	while (s)
	{
		strcpy(w1[i], s);
		i++;
		s = strtok(nullptr, " .,");
	}
	cout << endl;
	cout << endl;
	char*m;
	m = strtok(b, " .,");
	while (m)
	{
		strcpy(w2[j], m);
		j++;

		m = strtok(nullptr, " .,");
	}
	//��������� ��� ������������ ������� ������� �� ���� �����������
	cout << endl;
	cout << endl;
	cout << "Task 1 out from 3:" << endl;

	Compare(w1, w2, i, j);
	cout << endl;
	cout << endl;
	cout << "Tasks 2 and 3" << endl;
	cout << endl;




	for (int k = 0; k <= i; k++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (k != j)
			{
				if (anagram(w1[j], w1[k], strlen(w1[j]), strlen(w1[k])) == 0)
				{
					DeleteWord(A, w1[k]);
					DeleteWord(A, w1[j]);
				}
			}
		}
	}
	//���������� ������ ����� � ������� ������� � ����������� (����� ���� ������, ������������), 
	//�������� �� �������������
	//���� ��������� ����� ���������,
	// �� ������� ��� ����� �� ������
	cout << A << endl;
	cout << endl;
	cout << endl;

	return 0;
}
