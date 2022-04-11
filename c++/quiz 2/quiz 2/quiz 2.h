// quiz 2.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>


using namespace std;


class tests {        // The class
public:              // Access specifier
    void testq1();   // Method/function declaration
    void testq2();
    void testq3();
    void testq4(int i);
    void testq5(float a);
    void testq6(float a);
    void testq7();
    void testq8();
    void testq9();
    void testq10();

};

void tests::testq1() {
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

}

void tests::testq2() {
    int i = 10;
    float a = 1000.0;
    while (i>0)
    {
        i /= 2;
        a /= 10;
    }
    cout << a << endl;
}

void tests::testq3() {
    int i = 10;
    float a = -1.0;
    while (i < 0) {
        a = a + 10.0 * a / -10;
         --i;
    }
    cout << i << endl;
}

void tests::testq4(int pi) {
    float a;
    int i = 0;
    for (a = .009; a<1e2; a *= 1e1)
    {
        i++;
    }
    cout << i << endl;
}

void tests::testq5(float a) {
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


}

void tests::testq6(float a) {
    int i = 1, j = 2, k;
    i = i << j;
    j = j << i;
    k = j >> i;
    cout << k << endl;

}

void tests::testq7() {
    vector<int> t(5);
    for (int i = 0; i < 5; i++){ t[i] = 2 * i * i; }
    cout << t[4] / t[1] << endl;
    cout << "testq7" << endl;
    cout << " " << endl;

}

void tests::testq8() {
    vector<vector<float>> arr = { {.1,1.,10.}, {10., .1,1.}, {.1,10.,1.} };
    float x = 1.;
    for (int i = 0; i <3; i++)
    {
        x *= arr[i][i];

    }
    cout << x << endl;
    cout << "testq8" << endl;
    cout << " " << endl;
}

void tests::testq9(){
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
}

void tests::testq10() {
    struct A {
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
}
// TODO: Reference additional headers your program requires here.
