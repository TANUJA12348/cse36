# include <iostream>
using namespace std;
class customer {
    string name;
    int account_number;
    int balance;
    public:
    customer ( ) {
        name="tanuja";
        account_number=1000;
        balance=5;
    }
    customer ( string a,int b,int c){    // parameterized constructor  constructor overloading -function name same but not parameter
        name=a;
        account_number=b;
        balance=c;
    }
   
};

int main ( ) {
    customer A1;
    customer A2( "tanya",2000,100);
    A1.display();
    A2.display();
    return 0;
}