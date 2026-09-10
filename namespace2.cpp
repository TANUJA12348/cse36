#include <iostream>
using namespace std;

namespace start
{
    int x=10;
    void display()
    {
        cout << "A";
    }
}

namespace end
{
 double x=6.5;
    void display()
    {
        cout << "B";
    }
}
void display ( );

int main()
{
    string x="CSE-36";
    display ( );
    cout<<x;
  end::display();
  start ::display();
  cout<<start::x;
  cout<<end::x;
    return 0;
}
void display () {
    cout<<" Main";
}
