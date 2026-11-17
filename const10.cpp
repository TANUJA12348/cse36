#include <iostream>
using namespace std;

class Example{
    int a,b;

    public:
    void getdata(int,int);
    void display();
    Example sum(Example , Example);
};

void Example :: getdata(int x,int y){
    a = x;
    b = y;
}
void Example :: display(){
    cout << "a = " << a << "b = " << b << endl;
}


Example Example :: sum(Example E1,Example E2){
    Example S;
    S.a = a + E1.a;
    S.b = b + E1.b;
    return S;
}