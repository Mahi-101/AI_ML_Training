#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter any number : ";
    cin>>n;

    for(int i=1; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }

    if(n == sum )
    {
        cout<<n<<" is the Perfect Number";
    }
    else{
        cout<<n<<" is not a Perfect Number";
    }
     
    return 0;
}