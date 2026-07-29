#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    //// This is the brute force approach

    // int ans = 1;

    // for(int i=0; i<=30; i++) 
    // {
    //     if(ans == n) return true;

    //     if(ans < INT_MAX/2) ans = ans *2;

    // }

    // return false;

    // //// Optimal approach to solve the question.
    // return (n > 0 && (n & (n-1) == 0));


    //// more optimization by ternary operator.
    return (n>0)?(n & (n-1) == 0) : false;
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    cout<<check(n);

}