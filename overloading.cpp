# include <iostream>
using namespace std;
void sum ( );
int sum ( int,int);
float sum ( int,float,int);
int main ( ) {
    int a,b,r1;
    float r2,c;
    cout<<" Enter the numbers ";
    cin>>a>>b>>c;
    sum( ); // first function calling 
    r1=sum( a,b);
    r2=sum( a,b,c);
    cout<<"The sum of numbers is"<<r1<<endl;
    cout<<"The sum of numbers is"<<r2<<endl;
    return 0;
}
void sum () {
    int x,y,s;
    cout<<" Enter the numbers ";
    cin>>x>>y;
    s=x+y;
    cout<<"The sum of numbers is"<<s<<endl;
}
int sum ( int x,int y) {
    int s=x+y;
    return s;
}
float sum ( int x,float y,int z) {
    float s=x+y+z;
    return s;
}
