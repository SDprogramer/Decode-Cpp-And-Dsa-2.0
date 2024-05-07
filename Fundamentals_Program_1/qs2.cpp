#include<iostream>
using namespace std;
int main()
{
    int r = 7;
    int area = ( 22 / 7 ) * r * r;
    int peri = 2 * ( 22 / 7 ) * r;
    if( area>peri ) cout<<"Area is greater than perimeter of the circle";
    else cout<<"Perimeter is greater than area of the circle";
}