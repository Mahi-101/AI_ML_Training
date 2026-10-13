#include<iostream>
#include<string>
using namespace std;

int main()
{
    // DECLARING THE CHAR ARRAY
    char str[] = {'a', 'b', 'c','\0'}; // here we have to add last char as '\0' for terminate the string.
    
    // DECLARE EMPTY CHAR ARRAY
    char str1[100]; // to declare the empty char array you have to fix the size.

    cout<<str<<endl;

    // DECLARING THE STRING USING C++ STRING CLASS
    string str2 = "Mahipal";
    cout<<"String output :"<<str2<<endl;

    cout<<"Result: "<<str2.size()<<endl;

    return 0;
}