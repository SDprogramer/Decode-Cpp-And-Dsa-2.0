/*
1 ->
S1 = 1 2 3 4 5
S2 = 5 4 , S1 = 1 2 3
S1 = 1 2 , S2 = 5 4
then acc to qs S1 = 1 2 4 , S2 = 5
Answer -> option 2> 2
*/


// Answer 2 ->
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    int count = 0;
    for( int i=1; i<=5; i++ ) 
    {
        s1.push( i );
        count++;
    }
    int k = 3;
    for( int i=0; i<k-1; i++ ) 
    {
        s2.push( s1.top() );
        s1.pop();
    }
    s1.pop(); // Removing kth elem from s1
    while( !s2.empty() )
    {
        s1.push( s2.top() );
        s2.pop();
    }
    while( !s1.empty() ) 
    {
        cout<<s1.top()<< " ";
        s1.pop();
    }
}


// Question 3 -> Clarity ??


// Answer 4 ->
// Option 3 , 4 -> False