// CEP1-MOD2T.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>

using namespace std;


class MyClass
{
public:
	void qz1();

	void qz2();

	void qz3();

	void qz4();

	void qz5();

	void qz6();

	void qz7();

	void qz8();

	void qz9();

	void qz10();

private:

};

void MyClass::qz1()
{
	for (float val = -10.0; val < 20.0; val = -val * 2)
		cout << "*";
	cout << " ";
	cout << "1" << endl;
}


void MyClass::qz2()
{
	float val = 100.0;
	do {
		val = val / 5;
		cout << "*";
	} while (val > 1.0);

	cout << " ";
	cout << "2" << endl;
}

void MyClass::qz3()
{
	vector<int> a = {2, 0, 1};
	vector<int> b = { 1,2,3 };
	for (int i = 0; i < 3; i++)
		b[a[i]] = b[2 - i];
	cout << b[0]<< b[2];
	cout << " ";
	cout << "3" << endl;
}

void MyClass::qz4() {
	int a = 1, b = 2;
	int c = a | b;
	int d = c & a;
	int e = d ^ 0;

	cout << e << d << c;
	cout << " ";
	cout << "4" << endl;
}

void MyClass::qz5() {
	struct Str
	{
		int in;
		char ch;
	};

	vector<Str> t = { {1,'a'},{2,'b'} };

	for (int i = 0; i < 2; i++)
		t[i].in += (t[1 - i].ch - t[i].ch);

	cout << t[0].in<< t[1].in;
	cout << " ";
	cout << "5" << endl;
}

void MyClass::qz6() {
	vector<vector<int>> g = { {2,4},{3,6},{5,10} };
	for (int i = 1; i >= 0; i--)
		for (int j = 0; j < 2; j++)
			g[i][j] += g[j][i];
	cout << g[1][1];
	cout << " ";
	cout << "6" << endl;
}

void MyClass::qz7() {
	int a = 2;
	switch (a<<a)
	{
	case 8: a++;
	case 4: a++;
	case 2: break;
	case 1: a--;
	}
	cout << a;
	cout << " ";
	cout << "7" << endl;
}

void MyClass::qz8() {
	int i = 0, j = i++, k = --i;
	if (i > 0)
		j++;
	else
		k++;
	if (k == 0)
		i++;
	else
		k++;

	cout << i * j *k ;
	cout << " ";
	cout << "8" << endl;
}

void MyClass::qz9() {
	struct Stru
	{
		int i1, i2;
		char c1, c2;
	};
	Stru a = { 1,2,'a','b' };
	Stru b = { 5, 6, 'x','y' };



	cout << static_cast<char>(b.c1 + a.i1);
	cout << static_cast<int>(a.c2 - a.c1);
	cout << static_cast<int>(b.c2 - b.c1);

	cout << " ";
	cout << "9" << endl;
}

void MyClass::qz10()
{
	int a = 1, b = 2;
	int c = a << b;
	int d = 1 << c;
	int e = d >> d;

	cout << e;
	cout << " ";
	cout << "10" << endl;
}


void MyClass::qz10()
{
	int i = 1, j = i++, k = --i;

	if (i > 0){
		j++;
		k++;
	}
	else {
		k++;
		i++;
	}
	if (k == 0) {
		i++;
		j++;

	}
	else {
		if (k > 0)
			k--;
		else
			k++;
		i++;
	}
		


	cout << e;
	cout << " ";
	cout << "10" << endl;
}
// TODO: Reference additional headers your program requires here.
