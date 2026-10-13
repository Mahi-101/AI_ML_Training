#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        
        int freq[26] = {0};

        for(int i=0; i<s1.length(); i++)
        {
            freq[s1[i]-'a']++; // s1[i] - 'a' gives the index of the character in the frequency array
        }

        int windsize = s1.length();

        for(int i=0; i<s2.length(); i++)
        {
            int windfreq[26] = {0};

            int windind = 0, indx = i;    // windind is the index of the current window, indx is the index of the current character in s2

            while(windind < windsize && indx < s2.length())
            {
                windfreq[s2[indx]-'a']++;
                windind++, indx++;  
            }

            if(isFreqSame(freq, windfreq))
            {
                return true;
            }
        }

        return false;
    }

int main()
{
    /*
    Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

    In other words, return true if one of s1's permutations is the substring of s2.

    Example 1:

    Input: s1 = "ab", s2 = "eidbaooo"
    Output: true
    Explanation: s2 contains one permutation of s1 ("ba").
    */

    string s1, s2;

    cout<<"Enter two strings for permutation check: (s1 is must be less than s2 in size.)(Also all character must be in lower case) \n";
    cin >> s1 >> s2;

    cout << checkInclusion(s1, s2) << endl;

    return 0;
}