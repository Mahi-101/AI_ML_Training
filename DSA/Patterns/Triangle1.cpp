#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;

    //// TRIANGLE PATTERN
    // for(int i=1; i<=4; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=1; j<=i-1; j++)
        {
            cout<<i-j;
        }
        cout<<endl;
    }

    //// SQAURE PATTERN
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    return 0;
}