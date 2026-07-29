#include <iostream>
using namespace std;

int sum ( int*,int*);
int main ( ){
    int a,b,r;
    cout<<"Enter the elements";
    cin>>a>>b;
    r=sum( &a,&b);
    cout<<r;
}
int sum( int*x,int*y){
    int s;
    cin>>s;
    s=*x+*y;
    return s;
}