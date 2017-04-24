// perest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

class trans
{
	int x;
public:
	trans(int tran)
	{
		x = tran;
	}
	void print()
	{
		cout << "Ответ: 0x" << hex << x << endl;
	}
};

void main()
{
	int x;
	trans *ptrans;
	setlocale(LC_ALL, "rus");
	cout << "Введите число: ";
	cin >> x;
	ptrans = new trans(x);
	ptrans->print();
	delete []ptrans;
	system("pause");
}

