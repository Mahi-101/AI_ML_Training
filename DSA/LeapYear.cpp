#include<iostream>
#include<string>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    cout<<((year % 4 == 0)?((year % 100 == 0) ? ((year % 400 == 0 )?"Leap Year":"Not a Leap Year"):"Leap Year"):"Not a leap year");
    
    // if(year % 4 == 0)
    // {
    //     if(year % 100 == 0)
    //     {
    //         if(year % 400 == 0)
    //         {
    //             cout<<"Leap Year";
    //         }
    //         else{
    //             cout<<"Not a Leap Year";
    //         }
    //     }
    //     else{
    //         cout<<"Not a Leap Year";
    //     }
    // }
    // else{
    //     cout<<"Not a Leap Year";
    // }



    // if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    // {
    //     cout<<"Leap year";
    // }
    // else{
    //     cout<<"Not a Leap Year";
    // }

    return 0;
}