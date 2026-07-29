#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    // // Without third Variable Approach
    // b = a + b;
    // a = b - a;
    // b = b - a;

    // // With the use of third variable 
    // int temp = a;
    // a = b;
    // b = temp;

    // Using the Bitwise E-OR Operators.
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<" a = "<<a<<" b = "<<b;
}

int main()
{
    int a, b;
    cout<<"Enter any two number :";
    cin>>a>>b;

    swap(a, b);

    return 0;
}