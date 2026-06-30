class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //  -4 -1 -1 0 1 2
        sort(nums.begin(), nums.end(), cmp);
        vector<vector<int>> result;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int l = i+1, r = len-1;
            while (l < r) {
            int sum = nums[l] + nums[i] + nums[r];
                if (sum == 0) {
                    vector<int> li = {nums[l] , nums[i] , nums[r]};
                    result.push_back(li);
                    l++;
                    r--;

                    while (l < r && nums[l] == nums[l-1])
                        l++;
                    while (l < r && nums[r] == nums[r+1])
                        r--;
                    
                } else if (sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return result;    
    }

    static bool cmp(int& a, int& b) {
        return a < b;
    }
};
