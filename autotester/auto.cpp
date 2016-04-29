#define _CRT_SECURE_NO_DEPRECATE

#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int count = 4;
	char txt[50];
	for (int i = 0; i < count; i++)
	{
		char test[10] = "test";
		char num[3];
		strcat(strcat(test, _itoa(i+1, num, 10)), ".a");
		ifstream fin(test);
		fin.getline(txt, 50);
		fin.close();
		cout << txt << endl;
	}
	system("pause");
}