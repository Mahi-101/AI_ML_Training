#include<iostream>
using namespace std;

void factor(int n)
{
    cout<<"Factors of "<<n<<" : ";

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
        }
    }

    return;
}

int main()
{
    int n;
    cin>>n;

    factor(n);

    return 0;
}