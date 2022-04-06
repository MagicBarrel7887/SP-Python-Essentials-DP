// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

using namespace std;

tests test;


int main()
{
	cout << "Hello CMake." << endl;
	
	test.myMethod();

	test.testq2();

	test.testq3();

	test.testq4(10);
	test.testq4(3.0);
	test.testq6(2.0);
	
	return 0;
}

// C++ Essentials - part 1 :: Module 1 QUIZ 90%
