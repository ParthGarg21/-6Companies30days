// { Driver Code Starts
#include <iostream>
#include <vector>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &arr, int n, long long k)
    {
        long long currP = 1l;
        int si = 0, ei = 0, count = 0;

        while (ei < n)
        {
            currP *= arr[ei];

            while (currP >= k)
            {
                currP /= arr[si++];
            }

            count += ei - si + 1;

            ei++;
        }

        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends