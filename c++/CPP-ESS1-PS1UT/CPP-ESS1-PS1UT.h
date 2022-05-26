// CPP-ESS1-PS1UT.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>

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

// TODO: Reference additional headers your program requires here.
