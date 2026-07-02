class Solution {
   public:
    int findMin(vector<int>& nums) {
        int min = 0;
        int l = 0, r = nums.size() - 1;
        int mid = (r + l) / 2;
        while (l < r) {
            if (nums[r] < nums[mid]) {
                l = mid + 1;
            } else {
                r = mid;
            }
            mid = (r + l) / 2;
        }
        return nums[l];
    }
};
