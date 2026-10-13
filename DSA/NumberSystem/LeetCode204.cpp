#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, count = 0;
    cout<<"Enter the number for range 0 to n ";
    cin>>n;

    vector<bool> isprime(n+1, true);

    for(int i=2; i<n; i++)
    {
        if(isprime[i])
        {
            count++;
            cout<<i<<" ";

            for(int j=i*2; j<n; j=j+i)
            {
                isprime[j] = false;
            }
        }
    }

    cout<<"\n Total count of Prime Number is "<<count;

    return 0;
}