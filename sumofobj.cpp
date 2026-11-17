#include <iostream>
using namespace std;

class Example
{
    int a,b;

public:
    void getdata ( int , int );
    void display ( );
    Example sum ( Example &);
};
void Example :: getdata ( int x,int y) {
    a=x;
    b=y;
}
void Example :: display ( ) {
    cout<<a<<" "<<b<<endl;
}
Example Example :: sum ( Example &E1) {
    Example S;
    S.a= a+ E1.a;
    S.b= b+ E1.b;
    return S;
}
int main ( ) {
    Example E1, E2, E3;

    E1.getdata(10, 20);
    E2.getdata(30, 40);

    E3 = E1.sum(E2);

    E3.display();

    return 0;
}