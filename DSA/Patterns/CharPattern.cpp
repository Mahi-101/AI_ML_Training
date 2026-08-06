#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;

    // Run the following Loop or Pattern One by One. If we run all to gether it will may stuck in loops or not get the proper output.

    char A = 'A';
    char a = 'D';

    /*A B C D
      B C D
      C D
      D
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j<=n; j++)
    //     {
    //         cout<<A<<" ";
    //         A++;
    //     }
    //     cout<<endl;
    //     A = 'A' + i;
    // }


    /*D
      C D
      B C D
      A B C D
    */
   
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    //     a = a - i -1;
    // }

    
    /*A
      B C
      D E F
      G H I J
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout<<A<<" ";
    //         A++;
    //     }
    //     cout<<endl;
    // }


    /*A A A A
      B B B B
      C C C C
      D D D D
    */
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<<A<<" ";
    //     }
    //     cout<<endl;
    //     A++;
    // }

    return 0;
}