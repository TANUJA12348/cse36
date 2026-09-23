# include <iostream>
using namespace std;
class Student {
    int roll ;
     string name;
     public :
     Student ( int  string);
     void display ( ) ;
     static void show ( ) ;
};
Student :: Student ( int r , string n) {
    roll=r;
    name=n;
    count ++;
}
void Student :: display ( ) {
    cout<<roll<<name<<endl;
}
int main ( ) {
 Student S1=Student ( 101,"John");
    S1.display ( );
    Student S2 ( 102,"Smith");
    S2.display ( );
    Student :: show ( );
    
    
    return 0;
}