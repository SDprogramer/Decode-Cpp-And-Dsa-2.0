/*
qs 1. x = 2, y = 3, = 6 
z = (x * y) % m Output = 0
*/

/*
qs 2. x = 3, y = 2
cout<<(x!=y)<<" "<<(x>=y) Output = 1 1
*/

/*
qs 3. x = 2, y = 3
x+=y;
x-=y;
x%=y;
cout<<x Output = 2
*/

#include<iostream>
using namespace std;
int main()
{
    // qs 4.
    int r, h;
    cout<<"Enter radius = "; cin>>r;
    cout<<"Enter height = "; cin>>h;
    int vol = 22/7 * r * r * h;
    cout<<vol;
    cout<<endl;
    cout<<endl;

    //qs 5.
    char a, b;
    cin>>a; cin>>b;
    int diff = abs( int( a ) - int( b ) );
    cout<<diff;
}

/*
qs 6. 
( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i Output = 49
*/