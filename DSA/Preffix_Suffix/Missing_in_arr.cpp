#include<iostream>
#include<vector>
using namespace std;

/*
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
*/

int missingNum(vector<int>& arr) {
    // code here
    if(arr.empty()) return -1;
    if(arr.size() == 1 && arr[0] == 1) return 2;
        
    unsigned long int n = arr.size()+1;
        
    unsigned long int sum = 0; 
    sum = (n*(1+n))/2;
        
    unsigned long int pref_sum = 0;
        
    for(int i=0; i<arr.size(); i++)
    {
        pref_sum += arr[i];
    }
        
    unsigned long int ans = sum - pref_sum;
        
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,9};
    cout<<"Missing value in array is : "<<missingNum(arr);


    return 0;
}

