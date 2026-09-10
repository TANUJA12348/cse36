#include <iostream>
#include <cstdarg>
using namespace std;

void printValues(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        int value = va_arg(args, int);
        cout << value << " ";
    }

    va_end(args);
}

int main()
{
    printValues(2, 10, 20);

    return 0;
}