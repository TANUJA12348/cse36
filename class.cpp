# include <iostream>
using namespace std;
class Student {
    private:
    int a,b;
    public:
    void getdata ( ){
cout <<" Enter the number :";
    }
    void print ( ) {
        cout<<a<<b;
    }
};
int main ( ) {
    Student A; // . is a member access operator 
    A.getdata( );
    A.print( );
    return 0;
    
}