#include<iostream>
using namespace std;

bool checkprime(int n)
{
    if(n<2)
    {
        return false;
    }
    else{
        for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }
    }
    
    
    return true;
}

void PrimeRange(int n)
{
    cout<<"Range of Prime Number till "<<n<<" is : ";
    
    for(int i=0; i<=n; i++)
    {
        if(checkprime(i))
        {
            cout<<i<< " ";
        }
    }
}

int main()
{

    int n;
    cin>>n;

    if(checkprime(n))
    {
        cout<<n<<" is Prime number \n";
    }
    else{
        cout<<n<<" is NOT Prime number \n";
    }

    PrimeRange(n);

    return 0;
}