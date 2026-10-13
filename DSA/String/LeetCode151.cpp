#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    /*
    Given an input string s, reverse the order of the words.

    A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

    Return a string of the words in reverse order concatenated by a single space.

    Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

    Example 1:

    Input: s = "the sky is blue"
    Output: "blue is sky the"
    */

    string s = "the sky is blue";

    int size = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for(int i=0; i<size; i++)
    {
        string word = "";
        while(i<size && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if(word.length() > 0)
        {
            ans += " "+word;
        }
    }

    cout<<ans.substr(1);


    return 0;
}