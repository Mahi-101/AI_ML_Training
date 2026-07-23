#include<iostream>
using namespace std;

// fibonacci is represent by --> fib(n)

int fibonacci(int a)
{
    // base case
    if(a < 0)
    {
        return -1;
    }
    if(a == 0)
    {
        return 0;
    }
    if(a == 1) return 1;

    return fibonacci(a-1) + fibonacci(a-2);

}

int loopfibonaci(int n)
{
    int a = 0, b = 1;
    // cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++)
    {
        
        int cur = a + b;
        // cout<<cur<<" ";
        a = b;
        b = cur;
    }

    return a;
}


int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}