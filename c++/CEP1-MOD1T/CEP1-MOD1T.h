// CEP1-MOD1T.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

using namespace std;


// TODO: Reference additional headers your program requires here.
class MyClass
{
public:
	void quiz2();
	void quiz();

	void quiz3();

	void quiz4();

	void quiz5();

	void quiz6();

	void quiz7();

	void quiz8();

	void quiz9(int i);

	void quiz10();

	void quiz11();

	void quiz12();

	void quiz13();

private:

};

void MyClass::quiz2()
{
	int i = 3, j = 2, k = -1;
	if (i > 0) {
		if(j <=0){
			if (k < 0)
				k++;
			if (k <= 0)
				k--;
		}
		if (j > 0)
			i++;

	}
if (i <= 0)
	j++;
k = i + j + k;

cout << k << endl;
cout << "/n1" << endl;
}


void MyClass::quiz()
{
	cout << -1e-1 << endl;
	cout << "s" << endl;
	cout << 0x1A << endl;
	cout << "/n2" << endl;
}

void MyClass::quiz3()
{
	int i = 3, j, k;
	if (i > 0)  j = 2 + i * i;
	if (i <= 0) j = 2 * i - 1;
	if (j >= 0) k = j % i + 2;
	if (j < 0)  k = i % j + 2;
	if (k < 0) k = k % i % j;
	if (k >= 0)k = j % i % k;
	cout << k << endl;
	cout << "/n" << endl;
	cout << "/n3" << endl;
}

void MyClass::quiz4() {
	float x = 1. / 2. + 2. / 4.;
	cout << x << endl;
	cout << "/n4" << endl;
}

void MyClass::quiz5() {
	float x = 1.0 / 4.0;
	int i = x;
	cout << x << endl;
	cout << "/n5" << endl;
}

void MyClass::quiz6() {
	int i = 3, j = ++i, k = ++i;
	cout << k << j << i << endl;
	cout << "/n6" << endl;
}

void MyClass::quiz7() {
	int i = 1;
	int j = ++i;
	int k = j++;

	cout << k << endl;
	cout << "/n7" << endl;
}

void MyClass::quiz8() {
	int i = 3, j = ++i, k = ++i;
	i = 5;
	//cin >> i;
	cout << k + i << j - i << i * i << endl;
	cout << "/n8"<< endl;
}

void MyClass::quiz9(int i) {

	cout << "/n9" << endl;

	//cin >> i;

	cout << i << hex << i + i << oct << i << endl;
	
}

void MyClass::quiz10() {
	float x = 2.5;

	cout << "/n10" << endl;

	//cin >> x;

	cout << scientific << "x" << endl;

}

void MyClass::quiz11() {

	cout << "/n11" << endl;
	cout << 0E1 << endl;

}

void MyClass::quiz12() {
	int k = 1 % 2 + 4 % 2;
	cout << "/n12" << endl;
	cout << k << endl;

}

void MyClass::quiz13() {

	cout << "/n13" << endl;
	// cout << 018 << endl;

}