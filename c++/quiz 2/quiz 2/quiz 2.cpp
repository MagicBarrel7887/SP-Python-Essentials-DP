// quiz 2.cpp : Defines the entry point for the application.
//

#include "quiz 2.h"

using namespace std;

tests quiz;

int main()
{
	cout << "Hello CMake." << endl;
	cout << "" << endl;
	quiz.testq1();	
	quiz.testq2();
	quiz.testq3();
	quiz.testq4(0);
	quiz.testq5(55.5);
	quiz.testq6(55.5);
	quiz.testq7();
	quiz.testq8();
	quiz.testq9();
	quiz.testq10();
	return 0;
}
