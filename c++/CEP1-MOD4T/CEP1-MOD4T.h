// CEP1-MOD4T.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClass{
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
void qz13();
void qz14();
void qz15();};

void MyClass::qz0(){
	cout << "H" << endl;
	cout << "1 \n" << endl;
}

void MyClass::qz1(){
	string s1 = "ab";
	string s2 = "Abc";

		if(s1 > s2)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	cout << "H" << endl;
	cout << "1 \n" << endl;
}

void MyClass::qz2(){
	short s = 1;
	int i = 2;
	float f = 4.4;
	double d = 8.8;

	cout << s / i + f / i + d / s << endl;
	cout << "2 \n" << endl;
}

void MyClass::qz3(){
	string s = "a";

	//cout << s << "b" + "c" << endl;
	cout << "3 \n" << endl;
}

void MyClass::qz4(){
	int i = 2;
	float f = 5.8;

	f = static_cast<int>(f);
	i = static_cast<float>(i);

	cout << f/i << endl;
	cout << "4 \n" << endl;
}

void MyClass::qz5(){
	int i = 2;
	string s = "2";

	//cout << s+i;
	cout << "5 \n" << endl;
}

void MyClass::qz6(){
	string s = "AB";
	s.append(s).push_back(s[s.length() - 1]);

	cout << s << endl;
	cout << "6 \n" << endl;
}

void MyClass::qz7(){
	string s1 = "aleph";
	string s2 = "alpha";
	string s;

	s1.swap(s1);
	s2.swap(s);
	s.swap(s2);

	cout << s2;
	cout << "5 \n" << endl;
}

void MyClass::qz8(){
	vector<string> t = { "alpha","beta","gamma" };
	int *cnt = new int[3], *p = &cnt[0];

	for (int i = 0; i < t.size(); i++)
		*p++ = t[i].length();
	cout << cnt[0] << cnt[1] << cnt[2];

	cout << "\n" << endl;
	cout << "8 \n" << endl;
}

void MyClass::qz9(){
	int *it[3];

	for (int i = 0; i < 3; i++)
	{
		it[i] = new int[i + 1];
		for (int j = 0; j < i + 1; j++)
			it[i][j] = 10 * i + j;
	}
	cout << "H" << endl;
	cout << it[2][2];
	for (int i = 0; i < 3; i++)
		delete[] it[i];

	cout << "\n" << endl;
	cout << "9 \n" << endl;
}

void MyClass::qz10(){
	string s = "0123";
	cout << s.substr(1,3).substr(2).substr();

	cout << "\n" << endl;
	cout << "10 \n" << endl;
}

void MyClass::qz11(){
	string s = "1";
	string s2 = "2";
	cout << s.compare(s2);

	cout << "\n" << endl;
	cout << "11 \n" << endl;
}

void MyClass::qz12(){
	string s = "ABC";
	for (int i = 1; i < s.length(); i += 2)
		s[i - 1] = s[i] + 'a' - 'A';
	cout << s;


	cout << "\n" << endl;
	cout << "12 \n" << endl;
}

void MyClass::qz13(){
	int i = 2;
	float f = 4.4;
	//cout << f % static_cast<float>(i);

	cout << "\n" << endl;
	cout << "13 \n" << endl;
}

void MyClass::qz14(){
	vector<float*> ft = { new float[3], new float[3], new float[3] };
	float *p = nullptr;

	for (int i = 0; i < 3; i++)
	{
		p = ft[i];
		*p = p[1] = *(p + 2) = 10 * i;

	}

	cout << ft[1][1];

	delete[] ft[0];
	delete[] ft[1];
	delete[] ft[2];

	cout << "\n" << endl;
	cout << "14 \n" << endl;
}

void MyClass::qz15(){
	short s = 1;
	int i = 2;
	float f = 4.4;
	double d = 6.6;

	cout << i/static_cast<float>(s) + int(f)/i + (long)d/s  << endl;
	cout << "15 \n" << endl;
}
// TODO: Reference additional headers your program requires here.