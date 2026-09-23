#include <iostream>
using namespace std;

class B;   // Forward declaration

class A
{
    int a;

public:
    A(int);          // Constructor declaration
    void sum(B);     // Member function
};

class B
{
    int b;

public:
    B(int);                  // Constructor declaration
    friend void A::sum(B);   // A::sum() is friend of B
};

// Constructor of A defined outside the class
A::A(int x)
{
    a = x;
}

// Constructor of B defined outside the class
B::B(int y)
{
    b = y;
}

// Member function of A defined outside the class
void A::sum(B obj)
{
    cout << "Sum = " << a + obj.b << endl;
}

int main()
{
    A obj1(10);
    B obj2(20);

    obj1.sum(obj2);

    return 0;
}