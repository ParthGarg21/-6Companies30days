// { Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &words)
    {
        unordered_map<string, vector<string>> hm;

        for (string &s : words)
        {
            string r = s;
            sort(r.begin(), r.end());
            hm[r].push_back(s);
        }

        vector<vector<string>> ans;

        for (const pair<string, vector<string>> &p : hm)
        {
            ans.push_back(p.second);
        }

        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> string_list[i];
        }
        Solution ob;
        vector<vector<string>> result = ob.Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends