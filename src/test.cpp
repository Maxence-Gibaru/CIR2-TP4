#include <iostream>

using namespace std;

class A {
protected:
    int x;

public:
    A() {
        x = 0;
        cout << "1";
    }

    A(int px) {
        x = px;
        cout << "2";
    }

    A(const A &pa) {
        x = pa.x;
        cout << "3";
    }
};

class B {
protected:
    A a;
    int y;

public:
    B(const A &pa = A()) : a(pa) {
        cout << "4";
    }

    B(const A &pa, int py) {
        a = pa;
        y = py;
        cout << "5";
    }
};

class C : public B {
protected:
    A a;
    int z;

public:
    C(int pz = 1) {
        z = pz;
        cout << "6";
    }

    C(A pa) : B(pa) {
        z = 0;
        cout << "7";
    }

    C(const B &pb) : B(pb), a(1) {
        z = 0;
        cout << "8";
    }
};