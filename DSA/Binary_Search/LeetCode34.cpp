#include <bits/stdc++.h>
using namespace std;

// Function to find the first and last position of an element in a sorted array
// Time Complexity: O(log n) + O(k) where k is the number of occurrences of the target Brute force approach would be O(n) but we can do better using binary search
/*
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans = {-1, -1};
    if (nums.empty())
        return ans;

    int mid, low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            break;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    int i = mid, j = mid;

    while (i >= low)
    {
        if (nums[i] == target)
        {
            ans[0] = i;
            i--;
        }
        else
        {
            break;
        }
    }
    while (j <= high)
    {
        if (nums[j] == target)
        {
            ans[1] = j;
            j++;
        }
        else
        {
            break;
        }
    }

    return ans;
}

// Optimized approach using binary search to find the first and last position of an element in a sorted array
// Time Complexity: O(log n) + O(log n) = O(log n)
int positionFinding(vector<int> &nums, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}

vector<int> searchRange_Optimal(vector<int> &nums, int target)
{
    if (nums.empty())
        return {-1, -1};

    int low = 0, high = nums.size() - 1;

    int start = positionFinding(nums, low, high, target);
    int end = positionFinding(nums, low, high, target + 1) - 1;

    if (start < nums.size() && nums[start] == target)
    {
        return {start, end};
    }
    else
    {
        return {-1, -1};
    }
}

int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> ans = searchRange(v, 8);

    for (int val : ans)
    {
        cout << val << " ";
    }

    // Using Optimal Approach
    vector<int> ans_optimal = searchRange_Optimal(v, 8);

    cout << "\nOptimal Approach: ";
    for (int val : ans_optimal)
    {
        cout << val << " ";
    }

    return 0;
}