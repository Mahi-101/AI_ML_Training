#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
//    // cout<<"Hello World";

//    string s = "Mahipal";
//    cout<<s<<endl;
//    cout<<"Size of String s :"<<s.size()<<endl;
//    cout<<"length of String s :"<<s.length()<<endl;

//    // Using find 
//    cout<<"Finding 'p' in string s using find() function (return the index) : "<<s.find('p')<<endl;

//    // Using method like push_back() and pop_back we can add and remove the character.
//    // substr(starting index, length of substring).

//    cout<<s.substr(2,3)<<endl;

//    // Traversal of string
//    for(int i=0; i<s.size(); i++)
//    {
//     cout<<s[i];
//    }
//    cout<<endl;

//    // Range Based Loop --> Each for loop
//    for(char val: s)
//    {
//     cout<<val;
//    }
//    cout<<endl;

//    s.push_back('!');
//    cout<<s<<endl;

//    s.pop_back();
//    cout<<s<<endl;

//    cout<<"Erase function"<<s.erase()<<s<<endl;
   
    vector<string> str = {"bella", "label", "roller"};

    for(string s: str)
    {
        for(char ch: s)
        {
            cout<<ch<<" ";
        }
    }

    unordered_map<char, int> freq;

        for(string s: str)
        {
            for(char ch: s)
            {
                freq[ch]++;
            }
        }

    for(auto &pair: freq)
    {
        if(pair.second % str.size() == 0)
        {
            int n = pair.second/str.size();

            for(int i = 0; i < n; i++)
            {
                cout<<pair.first;
            }
        }
    }

    return 0;
}