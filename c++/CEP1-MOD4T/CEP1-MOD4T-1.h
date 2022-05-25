#pragma once

#include <iostream>
#include <string>

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
private:
};
namespace S {int A = 1;}
namespace S {int B = A + 2;}
namespace S1 {int A = 1;}
namespace S2 {int A = 2 ;}
namespace SpaceA {int A;}
namespace SpaceB {int A;}
using namespace SpaceA; 
using namespace SpaceB;

void MyClasss::qz0()
{
	
	S::A = S::A + 1; {
		using namespace S;
		++B;
	}
	cout << S::B << S::A << endl;
	cout << "1 \n" << endl;
}

void MyClasss::qz2() {
	{ using namespace S1;
	S2::A = A + 1;
	}
	{using namespace S2;
	S1::A = A + 1;
	}
	cout << S1::A << S2::A << endl;
	cout << "\n" << endl;
	cout << "1 \n" << endl;
}

void MyClasss::qz3()
{
	SpaceA::A = SpaceB::A = 1;

	cout << A + 1 << endl;
	cout << "\n" << endl;
	cout << "3 \n" << endl;
}