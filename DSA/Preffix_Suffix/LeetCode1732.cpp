#include<iostream>
#include<vector>
using namespace std;

/* Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
*/

int largestAltitude(vector<int>& gain) {
        if(gain.empty()) return 0;

        vector<int> ans(gain.size()+1,0);
        int max_alt = 0;

        for(int i=0; i<gain.size(); i++)
        {
            ans[i+1] = ans[i] + gain[i];
            max_alt = max(ans[i+1], max_alt);
        }

        return max_alt;

    }

int main()
{
    vector<int> gain = {-5, 1, 5, 0, -7};

    int ans = largestAltitude(gain);
    cout<<"Highest Peak : "<<ans;

    return 0;
}