// CPP-ESS1-PS1UT.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClasss
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
	void qz11();
	void qz12();
};

namespace Universe {
	int Galaxy = 1;
}

namespace Universe {
	int Planet = Galaxy + 2;
}

string replicate(string s = "", int r = 1) 
{
	string t;
	while (r--)
		t += s;
	return t;
}
void MyClasss::qz0()
{
	string pattern = "a";
	cout << "\n" << endl;
	cout << replicate(pattern) << endl;
	cout << "0" << endl;
}
void MyClasss::qz1()
{
	vector<char> test(5);

	char* chr1 = test.data() + 2, * chr2 = chr1 + 2;
	cout << "\n" << endl;
	cout << chr2 - test.data() << endl;
	cout << "1" << endl;
}
void MyClasss::qz2()
{
	Universe::Galaxy *= 2; 
	{
		using namespace Universe;
		Planet++;
	}

	cout << "\n" << endl;
	cout << Universe::Galaxy << Universe::Planet;
	cout << "\n" << endl;
	cout << "2" << endl;
}
int op(int i, int j = 1) {
	return i * j;
}
int op(char a, char b) {
	return b - a;
}
int op(float x, float y) {
	return x / y;
}
void MyClasss::qz3()
{
	cout << "3" << endl;
	cout << "\n" << endl;
	cout << op(2) << op('c', 'a') << op(4.f, 2.f);
	cout << "\n" << endl;
	cout << "3" << endl;
}
void swap(float* x, float* y)
{
	float z = *x;
	*x = *y;
	*y = z;

}
void MyClasss::qz4()
{
	vector<float> t = { 3.,2.,1. };
	swap(&t[0], &t[2]);

	cout << "\n" << endl;
	cout << t[1] << endl;
	
	cout << "4::" << endl;
}
void MyClasss::qz5()
{
	int k = 2 % 3 + 5 % 3;

	cout << "\n" << endl;
	cout << k;
	cout << "\n" << endl;
	cout << "5" << endl;
}
void MyClasss::qz6()
{
	float k = 1E-1;


	cout << "\n" << endl;
	cout << k ;
	cout << "\n" << endl;
	cout << "6" << endl;
}
void MyClasss::qz7()
{
	vector<double> arr = { 1e-1,1e0,1e1 };
	double* ptr = arr.data() + 2;
	cout << "\n" << endl;
	cout << arr[1] - *ptr;
	cout << "\n" << endl;
	cout << "7" << endl;
}
double eval(double x)
{
	return x / (.5 * x);
}
void use(double n)
{
	int v = 1 / n;
	v = eval(v);
	cout << v;
}
void MyClasss::qz8()
{
	cout << "\n" << endl;
	use(1.f);
	cout << "\n" << endl;
	cout << "8" << endl;
}
void MyClasss::qz9()
{

	cout << "\n" << endl;
	float x = 1.0 / 5.0;
	int i = x;
	cout << i << endl;
	cout << "9" << endl;
}
void MyClasss::qz10()
{
	int i = 1, k = i & 0;
	do {
		k++;
		if (k > 1)
			i = k;
	} while (i < 2);
	cout << k << endl;
	cout << "10" << endl;
}
void MyClasss::qz11()
{
	int a = 0x02, b = 001;
	int c = a ^ b;
	int d = c | a;
	int e = d & 0;
	cout << e << endl;
	cout << "11" << endl;
}
void MyClasss::qz12()
{
	vector<float*> ft = { new float[1],new float[2], new float[3] };
	for (int i = 0; i < 3; i++) {
		float* p = ft[i];
		*p = i;
	}
	cout << *ft[1];
	for (int i = 0; i < 3; i++) {
		delete[] ft[i];
	}
	cout << "HE" << endl;
	cout << "12" << endl;
}