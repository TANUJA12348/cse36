#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    display(10, 20);
    display(10.3, 20.5);
    display("Tanuja", "Singh");

    return 0;
}