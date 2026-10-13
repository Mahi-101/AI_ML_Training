#include<iostream>
#include<vector>
using namespace std;

/*
Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/

int main()
{
    vector<int> arr = {0,0,1,1,0,1,0,1,1,1,1,1,0,1,0,0,1,0,1,0,1,1,1,};
    int k = 3;

    int i = 0, j = 0;

    while(j<arr.size())
    {
        if(arr[j] == 0)
        {
            k--;
        }
        if(k<0)
        {
            if(arr[i] == 0)
            {
                k++;
            }
            i++;
        }
        j++;
    }

    cout<<"Longest sequence of 1 are : "<<j-i;

    return 0;
}