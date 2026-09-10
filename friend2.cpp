#include <iostream>
using namespace std;

class test;   // Forward declaration

class example {
    int a;

public:
    void geta(int);
    void Adisplay();

    friend int sum(example, test);
};

void example::geta(int x) {
    a = x;
}

void example::Adisplay() {
    cout << "The value of a: " << a << endl;
}


class test {
    int b;

public:
    void getb(int);
    void Tdisplay();

    friend int sum(example, test);
};

void test::getb(int y) {
    b = y;
}

void test::Tdisplay() {
    cout << "The value of b: " << b << endl;
}


int sum(example E, test T) {
    int s = E.a + T.b;
    return s;
}


int main() {
    example E1;
    test T1;

    E1.geta(10);
    T1.getb(20);

    E1.Adisplay();
    T1.Tdisplay();

    cout << "Sum = " << sum(E1, T1) << endl;

    return 0;
}