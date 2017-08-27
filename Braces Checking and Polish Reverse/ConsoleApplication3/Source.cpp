#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cctype>
//1.	Задана строка.  Удалить все слова палиндромы.  
//Найти наибольшее по длине слово палиндром и наибольшее по значению число-слово палиндром,
//номера этих слов в исходной строке и поменять их местами, слова, состоящие из цифр заменить на заданное слово.
using namespace std;
void SortWord(char**str, int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (strlen(str[j])<strlen(str[j + 1]))

				swap(str[j], str[j + 1]);
		}
	}
}
void SortDigit(char**str, int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (atoi(str[j])<atoi(str[j + 1]))

				swap(str[j], str[j + 1]);
		}
	}
}
// сортировка по убыванию

bool IsPalindrom(char*str0)
{
	char str[1000];
	strcpy(str, str0); //создала новую строку и скопировала в нее исходную

	for (int i = 0; i < strlen(str) / 2; i++)
		swap(str[i], str[strlen(str) - i - 1]);
	if (strcmp(str, str0) == 0) return 0;
	else return 1;
}
//проверяет на палиндромность слово или число-слово
void DeleteWord(char*str, char*delstr)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (strncmp(str + i, delstr, strlen(delstr)) == 0)
			memmove(str + i - 1, str + i + strlen(delstr), strlen(str) - i - strlen(delstr) + 1);

	}
}
//удаляет слово из строки

void Exchange(char*str0, char*str1, char*str2)
{
	for (int i = 0; i<strlen(str0); i++)
	{
		if (strncmp(str0 + i, str1, strlen(str1)) == 0)
		{
			memmove(str0 + i + strlen(str2), str0 + i + strlen(str1), strlen(str0) - i - strlen(str1) + 1);
			strncpy(str0 + i, str2, strlen(str2));

		}
	}

}
//меняет заменяет одно слово в строке другим (str1 на str2)
bool IsDigitWord(char*str)
{
	char*s;
	s = strtok(str, " ");
	bool switcher = true;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]) == 0) switcher = false;
	}
	if (switcher == true) return 0;
	else return -1;


}
//проверяет, является ли слово в строке числом
void Replace(char*str0, int k, char*word)
{
	memmove(str0 + strlen(word), str0 + k, strlen(str0) - k + 1);
	strncpy(str0, word, strlen(word));
}
// нужна для ExchangeWords
void ExchangeWords(char*str0, char*word1, char*word2)
{
	if (strstr(str0, word2) > strstr(str0, word1))
		swap(word1, word2);
	char*pos = strstr(str0, word2);
	Replace(strstr(str0, word1), strlen(word1), word2);
	Replace(pos, strlen(word2), word1);
}
// меняет слова в строке
int main()
{
	char str0[] = "rotator 121 You aibohphobia 2223 are 123321  1232 pretty refer 9 :) ";
	int words = 0;
	//строка для проверки, можно закомментировать и раскоментировать следующее:
	// давайте вводить слова через пробел, я вместо delim-массива в strtok пробел загоняла всегда
	/* char str0[200];
	cin.getline(str0, 200);
	system("cls"); */
	cout << str0 << endl;
	cout << endl;
	char*k;
	char*str = new char[strlen(str0) + 1];
	strcpy(str, str0);//чтобы посчитать кол-во слов в строке

	char*str1 = new char[strlen(str0) + 1];
	strcpy(str1, str0);//для нахождения палиндромов-слов

	char*str2 = new char[strlen(str0) + 1];
	strcpy(str2, str0);//для нахождения палиндромов-чисел
	k = strtok(str, " ");
	while (k)
	{
		words += 1;
		k = strtok(nullptr, " ");
	}
	//посчитала слова в строке
	char**pal = new char*[words];
	for (int i = 0; i < words; i++)
		pal[i] = new char[15];
	//массив для заполнения словами-палиндромами


	char*s;
	s = strtok(str1, " ");
	int i = 0;
	while (s)
	{


		bool switcher = true;
		for (int j = 0; j < strlen(s); j++)
		{
			if (isalpha(s[j]) == 0) switcher = false;
		}
		if (switcher == true)
		{
			if (IsPalindrom(s) == 0)
			{
				strcpy(pal[i], s);
				i++;

			}

		}
		s = strtok(nullptr, " ");
	}
	cout << "Palindroms (words): " << endl;
	for (int j = 0; j < i; j++)
		cout << pal[j] << endl;
	cout << endl;
	cout << endl;
	//ищет слова-палиндромы и загоняет их в массив

	char**paldigit = new char*[words];
	for (int i = 0; i < words; i++)
		paldigit[i] = new char[15];
	char*m;
	m = strtok(str2, " ");
	int a = 0;
	while (m)
	{


		bool switcher = true;
		for (int j = 0; j < strlen(m); j++)
		{
			if (isdigit(m[j]) == 0) switcher = false;
		}
		if (switcher == true)
		{
			if (IsPalindrom(m) == 0)
			{
				strcpy(paldigit[a], m);
				a++;

			}

		}
		m = strtok(nullptr, " ");
	}
	cout << "Palindroms (numbers): " << endl;
	for (int j = 0; j < a; j++)
		cout << paldigit[j] << endl;
	// ищет числа-палиндромы и загоняет их в массив


	SortWord(pal, i);
	SortDigit(paldigit, a);

	cout << "Longest palindrom-word: " << pal[0] << endl;
	cout << "Biggest palindrom-digit: " << paldigit[0] << endl;

	cout << endl;
	cout << "Let's exchange biggest word- and biggest digit-palindrom: \n\n" << endl;
	ExchangeWords(str0, pal[0], paldigit[0]);
	cout << str0 << endl;
	cout << endl;
	cout << endl;

	cout << "Enter the word you want to see instead of numbers:" << endl;
	char word[30];
	cin.getline(word, 30);
	char*str3 = new char[words];
	strcpy(str3, str0);
	char*m3 = strtok(str3, " ");
	while (m3)
	{
		bool switcher = true;
		int len = strlen(m3);
		for (int i(0); i < strlen(m3); i++)
			if (isdigit(m3[i]) == 0) switcher = false;

		if (switcher == true)
		{
			char*m4 = strstr(str0, m3);
			Exchange(str0, m3, word);
		}
		m3 = strtok(nullptr, " ");
	}
	cout << "Changed sentence:" << endl;
	cout << endl;
	cout << str0 << endl;
	cout << endl;

	cout << endl;
	cout << "Let's delete all palindroms in the sentence" << endl;
	cout << endl;




	for (int b = 0; b <= i; b++)
	{
		DeleteWord(str0, pal[b]);
	}


	cout << "Result of all actions: \n\n" << endl;
	cout << str0 << endl;
	cout << endl;


	//очищение памяти
	for (int i = 0; i < words; i++)
		delete[] pal[i];
	delete[] pal;
	delete[] str;
	delete[] str1;
	delete[] str2;
	for (int i = 0; i < words; i++)
		delete[] paldigit[i];
	delete[] paldigit;
	delete[] str3;

	return 0;
}

