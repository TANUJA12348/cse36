#include <iostream>
using namespace std;

class Example{
    int a,b;

    public:
    void getdata(int,int);
    void display();
    Example sum(Example );
};

void Example :: getdata(int x,int y){
    a = x;
    b = y;
}
void Example :: display(){
    cout << "a = " << a << "b = " << b << endl;
}


Example Example :: sum(Example E1){
    Example S;
    S.a = a + E1.a;
    S.b = b + E1.b;
    return S;
}

int main ( ) {
    Example e1, e2, s;
    e1.getdata(10, 20);
    e2.getdata(30, 40);
    s = e1.sum(e2);

    cout << "Sum = ";
    s.display();

    return 0;
}