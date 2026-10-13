#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> customer = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int minute = 4;

    int sum = 0;

    for (int i = 0; i < customer.size(); i++)
    {
        if (grumpy[i] != 0)
        {
            sum += customer[i];
        }
        else
        {
            grumpy[i] *= customer[i];
        }
    }

    int i = 0, j = 0;
    int maxc = 0, temp = 0;

    while (j < customer.size())
    {
        temp += grumpy[j];
        if (j - i + 1 > minute)
        {
            temp -= grumpy[i];
            i++;
        }
        if (j - i + 1 == minute)
        {
            maxc = max(maxc, temp);
        }
        j++;
    }

    cout<<"ans = "<<sum + maxc;

    return 0;
}