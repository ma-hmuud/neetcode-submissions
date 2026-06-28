class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> _set;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (_set.find(diff) != _set.end() && _set[diff] != i) {
                return {_set[diff], i};
            }
            _set[nums[i]] = i;
        }

        return {0};
    }
};
