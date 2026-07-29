#include<iostream>
using namespace std;

int main()
{
    int n, ans = 1;
    cin>>n;

    if(n == 0 || n == 1)
    {
        cout<<"factorial of "<<n<<" : "<<1;
    }
    else{
        for(int i=2; i<=n; i++)
        {
            ans *= i;
        }

        cout<<ans;
    }


    return 0;
}