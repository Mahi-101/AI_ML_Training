#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/*
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
*/

int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        
            if (n < 2) {
                return -1; // Not enough elements
            }
        

        int first = INT_MIN, second = INT_MIN;

        for (int i = 0; i < n; i++) {
            // Update first and second largest
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            }
            // Update second largest if arr[i] is distinct from first
            else if (arr[i] > second && arr[i] < first) {
                second = arr[i];
            }
        }
    
        return (second == INT_MIN) ? -1 : second;

    }

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,9};

    cout<<"second largest element in array :"<<getSecondLargest(arr);

    return 0;
}