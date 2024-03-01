#include <vector>

using namespace std;

class Solution {
public:
    void subsequence(vector<int>& arr, int i, int n, vector<vector<int>>& ans, vector<int>& temp) {
        // Break Condition
        if (i == n) {
            ans.push_back(temp);
            return;
        }
        // Not including the current element
        subsequence(arr, i + 1, n, ans, temp);
        // Including the current element
        temp.push_back(arr[i]);
        subsequence(arr, i + 1, n, ans, temp);
        temp.pop_back(); // Backtrack to remove the included element
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsequence(nums, 0, nums.size(), ans, temp);
        return ans; // Return the generated subsets
    }
};
