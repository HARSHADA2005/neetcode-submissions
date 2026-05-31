class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v1 = nums;
        nums.insert(nums.end(),v1.begin(),v1.end());
        return nums;
    }
};