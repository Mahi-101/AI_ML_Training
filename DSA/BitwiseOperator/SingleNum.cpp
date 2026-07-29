#include<iostream>
#include<vector>
using namespace std;

void single(vector<int> &arr)
{
    int ans = 0;

    for(int val : arr)
    {
        ans ^= val;
    }

    cout<<ans;
}

int main()
{
    vector<int> arr = {1,4,2,1,2};

    single(arr);

    return 0;
}