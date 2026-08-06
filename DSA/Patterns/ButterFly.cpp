#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<n-2-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=n-2; j>=1; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=n-1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1; i>=1; i--)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1; i>=1; i--)
    // {
    //     for(int j=i; j>1; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}