#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout<<"Enter any number :";
    cin>>n;

    // // First Method
    // while(n > 0)
    // {
    //     if(n & 1) count++;

    //     n  = n >> 1;
    // }

    //// Second Method
    while(n > 0)
    {
        count++;
        n = n & (n-1);
    }

    cout<<count;

    return 0;
}