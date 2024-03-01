#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void parenth(int n, int left, int right, vector<string> &ans, string &temp) {
        // Base Condition.
        if (left == n && right == n) {
        ans.push_back(temp);
        return;
        }

        // for left
        if (left < n) {
            temp.push_back('('); // Add '(' character to temp
            parenth(n, left + 1, right, ans, temp);
            temp.pop_back();
        }
        if (right < left) {
            temp.push_back(')'); // Add ')' character to temp
            parenth(n, left, right + 1, ans, temp);
            temp.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        parenth(n, 0, 0, ans, temp);
        return ans;
    }
};
