# include <iostream>
using namespace std;
class customer {
    string name;
    int *data;
     public:
     customer ( ) {
        name="tanuja";
        data=new int;
        *data=10;
        cout<<"Constructor is called";
     }
     // Deconstructor
     ~customer ( ) {
        delete data;
        cout<<"Destructor is called";
     }
 };
int main ( ) {
    customer A1;
return 0;
}