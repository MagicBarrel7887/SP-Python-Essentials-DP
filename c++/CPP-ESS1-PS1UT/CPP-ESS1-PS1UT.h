﻿// CPP-ESS1-PS1UT.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClass
{
public:
	void qz0();
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
	void qz12();
	void qz13();
	void qz11();
};

void MyClass::qz0()
{

	cout << "\n" << endl;
	cout << "h" << endl;
	cout << "0" << endl;
}

void MyClass::qz1()
{
	int i = 2, j = i++, k = i++;

	i = 3;

	cout << "\n" << endl;
	cout << k - i << j - i << endl;
	cout << "0" << endl;
}

char do1(char* x) {
	return *x;
}
char* do2(char* y)
{
	return y;
}
char* do3(char& z)
{
	return &z;
}

void MyClass::qz2()
{
	char sign = '1';


	cout << "\n" << endl;
	cout << do1(do2(do3(sign))) << endl;
	cout << "2" << endl;
}

void MyClass::qz3()
{
	bool b1 = !true;
	bool b2 = !b1 && false;
	bool b3 = b2 || true;

	if (b3)
		cout << "T" << endl;
	else
		cout << "F" << endl;

	cout << "\n" << endl;
	cout << "h" << endl;
	cout << "3" << endl;
}

void MyClass::qz4()
{
	string s = "123";
	s.append(s.substr(2)).push_back(s[s.length() - 2]);

	cout << "\n" << endl;
	cout << s << endl;
	cout << "4" << endl;
}

float combine(float x1 = 0.0, int x2 = 1.0) {
	return x2 + x1;
}

void MyClass::qz5()
{
	cout << "\n" << endl;
	cout << combine() + combine(1.) + combine(2.,3.) << endl;
	cout << "\n" << endl;
	cout << "h" << endl;
	cout << "5" << endl;
}

void MyClass::qz6()
{
	int k = 3;
	if (k > 0) {
		if (k != 3)
			k--;
		if (k == 3)
			k++;
	}
	if (k < 0) {
		k = 5;
	}
	cout << "\n" << endl;
	cout << k << endl;
	cout << "6" << endl;
}

void MyClass::qz7()
{
	string s1 = "brick";
	string s2 = "block";
	string s;
	s1.swap(s2);
	s2.swap(s);
	s.swap(s2);

	cout << "\n" << endl;
	cout << s1 << endl;
	cout << "7" << endl;
}


void MyClass::qz8()
{
	int i = 1, k = i << 1;
	switch (k)
	{
	case 1: i += 1;
		break;
	case 2: i += 2;
		break;
	default: i += 3;
	}
	cout << "\n" << endl;
	cout << i << endl;
	cout << "8" << endl;
}

void MyClass::qz9()
{
	int a = 2, b = a >> 1;
	int c = a >> b;
	int d = 1 << c;
	int e = d >> d;

	cout << "\n" << endl;
	cout << e << endl;
	cout << "9" << endl;
}


void MyClass::qz10()
{
	short s = 1;
	int i = 2;
	float f = 4.;

	cout << "\n" << endl;
	cout << i/static_cast<float>(s) + i/2 + i/f << endl;
	cout << "10" << endl;
}


void MyClass::qz11()
{
	int i, k = 1;

	for (i = 0; i < 3; i += 2)
		k++;

	cout << "\n" << endl;
	cout << k << endl;
	cout << "11" << endl;
}

void MyClass::qz12()
{
	int i = 2;
	float f = 1;

	cout << "\n" << endl;
	//cout << static_cast<float>(i) >> 1;
	cout << "12" << endl;
}

void MyClass::qz13()
{
	int i = 0, k = i;
	while (i == 0)
	{
		if (k > 1)
			i = k;
		++k;
	}
	cout << "\n" << endl;
	cout << k << endl;
	cout << "13" << endl;
}

// TODO: Reference additional headers your program requires here.
