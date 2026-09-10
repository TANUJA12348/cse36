#include <iostream>
using namespace std;

class example {
    int a, b;

public:
    void getab(int, int);
    void display();
    friend void average(example);
};   

void example::getab(int x, int y) {
    a = x;
    b = y;
}

void example::display() {
    cout << a << " " << b << endl;
}

void average(example E) {
    int avg = (E.a + E.b) / 2;
    cout << "Average = " << avg << endl;
}

int main() {
    example E1;

    E1.getab(10, 20);
    E1.display();
    average(E1);

    return 0;
}