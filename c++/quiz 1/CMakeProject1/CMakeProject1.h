// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

using namespace std;


class tests {        // The class
public:              // Access specifier
    void myMethod();   // Method/function declaration
    void testq2();
    void testq3();
    void testq4(int i);
    void testq5(float a);
    void testq6(float a);
};

void tests::myMethod() {
    int var;
    var = 10;
    var = var + var;
    cout << var << endl;
    cout << "Hello World!" << endl;
}

void tests::testq2() {
    float var = .1;
    var = var + 1.;
    var = var + 1e1;
    var = var + 1e-2;
    cout << var << endl;


}

void tests::testq3() {
    int i = 10, j = 3;
    int k = (i % j * i / 3) / (j% i-j/i);
    cout << k << endl;

}

void tests::testq4(int i) {
    int j;
    j = i;
    if (i >= 9)
        i += 9 - i;
    j /= i;


    cout << j << endl;

}

void tests::testq5(float a) {
    float b;
    b = a / 2;
    if (b >= 1)
        a += b;
    if (a > b)
        b += a;

    cout << a + b << endl;

}

void tests::testq6(float a) {
    float b;
    a *= a;
    a *= a;
    a = sqrtf(a) * sqrtf(a);

    cout << a << endl;

}


// TODO: Reference additional headers your program requires here.
