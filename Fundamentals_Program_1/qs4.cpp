#include<iostream>
using namespace std;
int main()
{
    int l = 7, b = 6;
    int area = l * b;
    int peri = 2 * ( l + b );
    if( area > peri ) cout<<"area in bigger";
    else cout<<"perimeter in bigger";
}