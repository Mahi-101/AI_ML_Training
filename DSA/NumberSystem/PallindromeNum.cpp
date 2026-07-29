#include<iostream>
using namespace std;

bool PallindromeNum(int n)
{
    int ans=0, r, m=n;

    while(n>0)
    {
        r = n%10;
        ans = (ans *10) + r;
        n = n/10;
    }

    // if(m == ans)
    // {
    //     cout<<m<<" is a Pallindrome Number \n";
    // }
    // else{
    //     cout<<m<<" is not a Pallindrome Number \n";
    // }

    if(m == ans)
    {
        return true;
    }
    else{
        return false;
    }
}

// THIS FUNCTION IS USE TO PRINT THE PALLINDROME NUMBERS IN GIVEN RANGE.

// void range(int min, int max)
// {
//     for(int i=min; i<=max; i++)
//     {
//         if(PallindromeNum(i))
//         {
//             cout<<i<<" ";
//         }
//     }
// }

int main()
{
    int n;
    cout<<"Enter any Number :";
    cin>>n;

    if(PallindromeNum(n))
    {
        cout<<n<<" is a Pallindrome Number \n";
    }
    else{
        cout<<n<<" is not a Pallindrome Number \n";
    }

    // int min, max;
    // cout<<"Enter the range(min, max) of pallindrome :";
    // cin>>min>>max;
    // range(1,15);  //  --> use this  function to print the pallindrome number come in given range.

    return 0;
}