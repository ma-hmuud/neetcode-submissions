class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numsMap;
        for (int i = 0; i < nums.size(); i++) {
            auto it = numsMap.find(nums[i]);
            if (it == numsMap.end()) {
                numsMap.insert({nums[i], 1});
            } else {
                return true;
            }
        }
        return false;
    }
};