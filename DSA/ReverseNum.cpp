#include<iostream>
using namespace std;

int ReverseNum(int n)
{
    int r, ans = 0;

    while(n > 0)
    {
        r = n % 10;
        ans = (ans*10) + r;
        n = n/10;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter any Number : ";
    cin>>n;

    cout<<"Reverse of "<<n<<" is "<<ReverseNum(n);


    return 0;
}