#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/*
Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
*/

int maximumWealth(vector<vector<int>>& accounts) {
        if(accounts.empty()) return -1;

        int max_wealth = INT_MIN;

        for(int person = 0; person < accounts.size(); person++)
        {
            int total = 0;
            for(int bal = 0; bal < accounts[person].size(); bal++)
            {
                total += accounts[person][bal];
            }
            max_wealth = max(max_wealth, total);
        }

        return max_wealth;
    }

int main()
{
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};

    cout<<"Maximum wealth : "<<maximumWealth(accounts);

    return 0;
}