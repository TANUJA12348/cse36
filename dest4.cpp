# include <iostream>
using namespace std;
class Example {
    public :
    Example ( );
    ~Example ( );
};
Example :: Example ( ) {
    
    cout << "Constructor called" << endl;
}

Example :: ~Example ( ) {
    cout << "Destructor called" << endl;
}
int main ( ) {
    Example E1,E2,E3;
    return 0;
}