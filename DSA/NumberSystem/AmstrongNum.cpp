#include<iostream>
#include<cmath>
using namespace std;

bool isAmstrong(int n)
{
    if(n<0) return false;

    int ans=0, digit=0, m=n;
    int temp = n;

    while(temp>0)
    {
        digit++;
        temp /= 10;
    }

    temp = n;
    while(temp>0)
    {
        int r = temp%10;
        ans = ans + round(pow(r, digit));
        temp /= 10; 
    }

    if(m == ans)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int n;
    cout<<"Enter any Number : ";
    cin>>n;

    if(isAmstrong(n))
    {
        cout<<n<<" is Armstrong Number \n";
    }
    else
    {
        cout<<n<<" is not a Armstrong Number \n";
    }


    return 0;
}