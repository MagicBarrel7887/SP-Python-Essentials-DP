// module-2-quiz-2.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

using namespace std;

class quiz
{
public:
	int quiz1();
	void quiz2();

private:

};

int quiz::quiz1()
{
	int i = 2; 
	float a = 3;
	bool f1 = i > a, f2 = a > i, f3 = a/i > i / a;
	if (f3)
		if (f2)
			i += 1;
		else
			i += 3;
	else if (f1)
		i += 3;
	else
		i += 4;
	return i;
}

void quiz::quiz2()
{
	int i = 10;
	float a = 1000.0;
	while (i >0)
	{
		i /= 2;
		a /= 10;
	}
	cout << a << endl;
}

// TODO: Reference additional headers your program requires here.
