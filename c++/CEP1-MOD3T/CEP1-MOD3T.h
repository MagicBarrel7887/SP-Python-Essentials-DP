// CEP1-MOD3T.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>

using namespace std;
// 4 **
// 5 8
// 6 12
// 7 8

class MyClass
{
public:

	void qz1();

	void qz2();

	void qz3();

	int fun(int p);

	void qz4();

	int lls(int p = 2, int q = 3);

	int fuc();

	int fuch(int p);

	int fuchn(int p, int q);

	void qz8();

	void qz10();

private:
	void temp();

};

void MyClass::temp()
{
	cout << "n" << endl;
	cout << "1" << "\n" << endl;
}

void MyClass::qz1()
{
	bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
	bool floats = sizeof(double) < sizeof(float);
	bool chars = sizeof(char) == 1;
	int v = ints && floats && chars;
	cout << v << endl;
	cout << "1" << "\n" << endl;
}

void MyClass::qz2()
{
	vector<int> t = { 8,4,2,1 };
	int *p1 = &t[0] + 2, * p2 = p1 - 1;

	p1++;

	cout << *p1-t[p1-p2] << endl;
	cout << "2" << "\n" << endl;
}



void MyClass::qz3()
{
	int a = 1, b = fun(a);
	cout << a + b << endl;
	cout << "3" << "\n" << endl;
}


int MyClass::fun(int p)
{
	++p;
	return p++;
}

/// <summary>
/// 
/// </summary>



void MyClass::qz4()
{
	cout << lls() + lls(1) + lls(1, 2) << endl;
	cout << "4" << endl;
}


int MyClass::lls(int p, int q)
{
	return p + q;
}





int MyClass::fuc()
{
	return 1;
}


int MyClass::fuch(int p)
{
	return p > 1 ? 1 : 0;
}


int MyClass::fuchn(int p , int q)
{
	return q > p ? q - p : p - q;
}

void MyClass::qz8()
{
	cout << fuc() + fuch(1)+ fuchn(1,2) << endl;
	cout << "8" << "\n" << endl;
}




char f1(char c) {
	return c == 'z' ? 'a' : c + 1;
}
char f2(char &c) {
	c = f1(c);
	return c;
}
void MyClass::qz10()
{
	char x = 'x';
	cout << f2(x) << endl;
	cout << f2(x) << endl;
	cout << f2(x) << endl;
	cout << "10" << "\n" << endl;
}
// TODO: Reference additional headers your program requires here.
