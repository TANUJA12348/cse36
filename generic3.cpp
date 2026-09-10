#include <iostream>
using namespace std;

template <class T1, class T2>
T1 sum(T1 a, T2 b)
{
    T1 s;
    s = a + b;
    return s;
}

int main()
{
    cout << "Sum = " << sum(10, 20) << endl;
    cout << "Sum = " << sum(10.3, 20.5) << endl;

    return 0;
}