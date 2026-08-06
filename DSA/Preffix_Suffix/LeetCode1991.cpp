#include <iostream>
#include <vector>
using namespace std;

/*
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4
*/

int findMiddleIndex(vector<int> &nums)
{
    if (nums.empty())
        return -1;

    int total = 0, l_sum = 0;

    for (int val : nums)
    {
        total += val;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int r_sum = 0;
        r_sum = total - l_sum - nums[i];

        if (r_sum == l_sum)
        {
            return i;
        }
        else
        {
            l_sum += nums[i];
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2,3,-1,8,4};
    cout<<"Midddle Index = "<<findMiddleIndex(arr);

    return 0;
}