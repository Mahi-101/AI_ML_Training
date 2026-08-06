#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;

    int x = 1;

    /*1 2 3 4
      2 3 4
      3 4
      4
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j<=n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    /*1
      2 1
      3 2 1
      4 3 2 1
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    
    /*1
      2 3
      4 5 6
      7 8 9 10
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<x<<" ";
    //         x++;
    //     }
    //     cout<<endl;
    // }

    
    for(int i=n; i>=1; i--)
        {
            int temp = n;
            for(int j=1; j<=n*i; j++)
            {
                cout<<temp;
                if(j % i == 0)
                {
                    temp--;
                }
            }
            cout<<endl;
        }

    return 0;
}