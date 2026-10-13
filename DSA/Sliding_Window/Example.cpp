#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int> n = {2,5,1,8,4,9,6,1};
    int k = 2, sum = 0;

    for(int i=0; i<k; i++)
    {
        sum += n[i];
    }
    int ans = sum;

    for(int i=k; i<n.size(); i++)
    {
        sum += n[i];
        sum -= n[i-k];

        ans = max(ans, sum);
    }

    cout<<"Max sum of two elements in array : "<<ans;

    return 0;
}