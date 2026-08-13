#include <iostream>
using namespace std;

class sum {
    int a, b;

public:
    void getdata(int, int);
    int add();
};

void sum::getdata(int x, int y) {
    a = x;
    b = y;
}

int sum::add() {
    int s = a + b;
    return s;
}

int main() {
    int a1, b1;

    cout << "Enter the numbers: ";
    cin >> a1 >> b1;

    sum S1;
    S1.getdata(a1, b1);

    cout << "The sum is: " << S1.add();

    return 0;
}