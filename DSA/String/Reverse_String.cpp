#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "Mahipal";
    cout<<s<<endl;

    int i = 0, j = s.size()-1;
    while(i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout<<s<<endl;

    return 0;
}