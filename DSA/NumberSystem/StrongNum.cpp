#include<iostream>
using namespace std;

int fact(int n)
{
    int f = 1;

    if(n == 0 || n == 1)
    {
        return f;
    }
    else{
        for(int i=2; i<=n; i++)
        {
            f *= i;
        }
    }

    return f;
}


int main()
{
    int n, sum = 0;
    cout<<"Enter any Number : ";
    cin>>n;

    int temp = n;
    while(n > 0)
    {
        sum += fact(n%10);
        n = n/10;
    }

    if(temp == sum)
    {
        cout<<"Strong Number";
    }
    else{
        cout<<"Not Strong Number";
    }

    return 0;
}