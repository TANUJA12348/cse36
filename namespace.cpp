# include <iostream>
using namespace std;
namespace start{
    void display ( ) {
        cout<<" I am in display function ";
    }
}
int main ( ) {
    start::display( );
    return 0;
}
