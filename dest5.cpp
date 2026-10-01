# include <iostream>
using namespace std;
class Example {
    int a,b;
    public :
    Example (int ,int );
    void display ( );
    ~Example ( );
};
Example :: Example (int x,int y) {
    a=x;
    b=y;
    cout << "Constructor called" << endl;
}
void Example :: display ( ) {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
Example :: ~Example ( ) {
    cout << " object deleted" <<endl;
}
int main ( ) {
    Example E1(10,20),E2(30,40);
    E1.display ( );
    E2.display ( );
    return 0;
}