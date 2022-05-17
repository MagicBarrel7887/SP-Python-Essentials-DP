// cpp-ess1-mod2.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
using namespace std;

// TODO: Reference additional headers your program requires here.
class MyClass
{
public:
	void myClass();
	void temp();
	void qz2();
	void qz3();
	void qz4();
	void qz5();
	void qz6();
	void qz7();
	void qz8();
	void qz9();
	void qz10();
	void myClasss();
	void MyClasss();

private:

};

void MyClass::myClass()
{
	int i = 2;
	float a = 3;
	bool f1 = i > a, f2 = a > i, f3 = a / i > i / a;
	if (f3)
		if (f2)
			i += 1;
		else
			i += 2;
	else if (f1)
		i += 3;
	else
		i += 4;
	cout << i << endl;
	cout <<"1" <<"\n"<< endl;
}

void MyClass::temp()
{
	int i = 1;
	cout << i << endl;
	cout << "1" << endl;
}

void MyClass::qz2()
{
	int i = 10;
	float a = 100.0;
	while (i>0)
	{
		i /= 2;
		a /= 10;
	}
	cout << a << endl;
	cout << "2" <<"\n"<< endl;
}

void MyClass::qz3()
{
	int i = 10;
	float a = -1.0;
	while (i<0)
	{
		a = a + 10.0 * a / -10;
	}
	cout << i << endl;
	cout << "3" <<"\n"<< endl;
}

void MyClass::qz4()
{
	float a;
	int i = 0;
	for (a = .009; a < 1e2; a *= 1e1)
		i++;
	cout << i << endl;
	cout << "4" <<"\n"<< endl;
}

void MyClass::qz5()
{
	int i = 1, j = 2;
	if (i > j && j > i)
		i++;
	if (i > j || j > i)
		j++;
	if (i | j)
		i++;
	if (i & j)
		j++;

	cout << i * j << endl;
	cout << "5" <<"\n" << endl;
}

void MyClass::qz6()
{
	int i = 1, j = 2, k;
	i = i << j;
	j = j << i;
	k = j >> i;
	cout << k << endl;
	cout << "6" <<"\n" << endl;
}

void MyClass::qz7()
{
	vector<int> t(5);
	for (int i = 0; i < 5; i++)
		t[i] = 2 * i * i;

	cout << t[4] / t[1] << endl;
	cout << "7" << "\n" << endl;
}

void MyClass::qz8()
{
	vector<vector<float>>arr = { {.1,1.,10.},{10.,.1,1.},{.1,10.,1.0} };

	float x = 1.;
	for (int i = 0; i < 3; i++)
		x *= arr[i][i];

	cout << x << endl;
	cout << "8" << "\n" << endl;
}

void MyClass::qz9()
{
	struct A
	{
		int a;
		float b;
	};
	struct B
	{
		int b;
		float a;
	};
	struct C
	{
		A a;
		B b;
	};
	C c1 = { 1,2,3,4 }, c2 = { 5,6,7,8 };
	cout << c1.b.a + c2.a.b << endl;
	cout << "9" << "\n" << endl;
}

void MyClass::qz10()
{
	struct A
	{
		int a;
		char b;
	};


	struct B
	{
		char a;
		int b;
	};

	A a = { 2,'A' };
	B b = { 'C', 1 };

	cout << b.a - a.b - b.b + a.a << endl;
	cout << "10 10" << endl;
}