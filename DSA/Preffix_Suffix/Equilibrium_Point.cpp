#include<iostream>
#include<vector>
using namespace std;

/*
Input: arr[] = [-7, 1, 5, 2, -4, 3, 0]
Output: 3
Explanation: The sum of left of index 3 is -7 + 1 + 5 = -1 and sum on right of index 3 is -4 + 3 + 0 = -1.
*/

int findEquilibrium(vector<int> &arr) {
    // code here
    if(arr.size() < 3) return -1;
        
        
        
    // for(int i=2; i<arr.size(); i++)
    // {
    //     int sum_p = 0, sum_s = 0;
            
    //     for(int j=i+1; j<arr.size(); j++)
    //     {
    //         sum_p += arr[j];
    //     }
    //     for(int j=i-1; j>=0; j--)
    //     {
    //         sum_s += arr[j];
    //     }
            
    //     if(sum_s == sum_p)
    //     {
    //         return i;
    //     }
    // }
        
    int i=2, n=arr.size();
    int total = 0, l_sum = 0;
        
    for(int val: arr)
    {
        total += val;
    }
        
    for(int i=0; i<arr.size(); i++)
    {
        int r_sum = 0;
            
        r_sum = total - l_sum -arr[i];
        if(r_sum == l_sum)
        {
            return i;
        }
        else
        {
            l_sum += arr[i];
        }
    }
             
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 0, 3};
    cout<<"Equilibrium at index : "<<findEquilibrium(arr);

    return 0;
}