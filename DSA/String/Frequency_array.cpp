#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[26] = {0};

    string s = "mahipal";

    for(char ch: s)
    {
        arr[ch - 'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        if(arr[i] != 0) cout<<char(i+'a')<<" --> "<<arr[i]<<endl;
    }

    return 0;
}