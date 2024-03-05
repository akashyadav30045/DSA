class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a = nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if (nums.size()!=a){
            return true;
        }
        else{
            return false;
        }
    }
};