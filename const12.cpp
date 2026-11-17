
#include <iostream>
using namespace std;

class Example
{
    int a, b;

public:
    Example(int, int);
    Example(Example);
    void display();
};

Example::Example(int x, int y)
{
    a = x;
    b = y;
}

Example::Example(Example e1)
{
    a = 30 + e1.a;
    b = 40 + e1.b;
}

void Example::display()
{
    cout << "a = " << a << "  b = " << b << endl;
}

int main()
{
    Example e1(10, 20);

    Example s(e1);

    cout << "Sum = ";
    s.display();

    return 0;
}
