# include <iostream>
using namespace std;
void display ( ) {
    cout<<"end";
}
template <typename T, typename... Args>
void display (T first, Args... rest) {
    cout<<first<<" ";
    display(rest...);
}
int main ( ) {
    display ( 10, "Tanuja",'T',true);
    return 0;
}
