// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void gcd_method_1(int a, int b)
{
    //  METHOD --> 1 Use of built in function.
    int ans = __gcd(a,b);
    cout<<ans;

    
}

int gcd_method_2(int a, int b)
{
    // METHOD --> 2 Use of condtions
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a > b) return gcd_method_2(a-b, b);
    else
    {
        return gcd_method_2(a, b-a);
    }

}

int gcd_method_3(int a, int b)
{
    // METHOD --> 3 Use of loop
    while(a > 0 && b > 0)
    {
        if(a > b) a = a%b;
        else b = b%a;
    }
    if(a == 0 ) return b;
    return a;
}

// THIS IS A RECURSIVE METHOD OF GCD here we are assuming that a is greater than b.
int gcd_method_4(int a, int b)
{
    if(b == 0) return a;

    return gcd_method_4(b, a%b);
}

int main()
{
    int a, b;
    cout<<"Enter any Two Number :";
    cin>>a>>b;

    gcd_method_1(a,b);

    cout<<gcd_method_2(a,b);
    
    cout<<gcd_method_3(a,b);

    cout<<gcd_method_4(a,b);

    return 0;
}