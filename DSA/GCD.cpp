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

int main()
{
    int a, b;
    cout<<"Enter any Two Number :";
    cin>>a>>b;

    gcd_method_1(a,b);

    cout<<gcd_method_2(a,b);

    return 0;
}