class Solution {
public:
    string defangIPaddr(string address) {
        int start = 0;
        string ans;
        int end = address.length();

        while (start < end) {
            if (address[start] == '.') {
                ans += "[.]";
            } else {
                ans += address[start];
            }
            start++;
        }
        return ans;
    }
};
