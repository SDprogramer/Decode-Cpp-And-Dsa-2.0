/*
1 -> #include <bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
}
output = infinite times In while loop in next lie
*/

/*
2 -> #include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}
output = hello
hello
hello
hello
*/

/*
3 -> #include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}
output = in for loop
in for loop
in for loop
*/

/*
4 -> #include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}
output = 9 1
8 2
7 3
6 4
5 5
*/

#include<iostream>
using namespace std;
int main()
{
    // qs 5 ->
    int sum1 = 0;
    int num1 = 4556;
    int dig1 = 0;
    while( num1!=0 )
    {
        dig1 = num1 % 10;
        if( dig1%2==0 )
        {
            sum1 = sum1 + dig1;
        }
        num1 = num1 / 10;
    }
    cout<<"sum = "<<sum1;
    cout<<endl;

    // qs 6 ->
    int num2 = 12;
    int store = num2;
    int dig2 = 0;
    int rev = 0;
    while( num2!=0 )
    {
        dig2 = num2 % 10;
        rev = ( rev * 10 ) + dig2;
        num2 = num2 / 10;
    }
    cout<<"sum = "<<( rev + store );
    cout<<endl;

    // qs 7 & 8 -> DOne in class lecture

    // qs 9 -> Armstrong number
    int dig3 = 0;
    int sum3 = 0;
    for( int j=1; j<=500; j++ )
    {
        int bag = j;
        while( bag!=0 )
        {
            dig3 = bag % 10;
            dig3 = dig3 * dig3 * dig3;
            sum3 = sum3 + dig3;
            bag = bag / 10;
        }
        if( j==sum3 )
        {
            cout<<"armstrong no = "<<j;
            continue;
        }
    }
}
