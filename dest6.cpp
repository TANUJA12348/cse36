#include <iostream>
using namespace std;

class Example{
    static int count;
    public:
    Example(){
        count++;
        cout << " the number of objects created is " << count << endl;
    }

    ~Example(){
        cout << " the number of objects destroyed is " << count << endl;
        count--;
    }
};

int Example::count = 0; // static variable definition

int main(){
    Example E1,E2,E3;
    return 0;
}