class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxArea = getArea(heights, l, r);
        while (l < r) {
            int currentArea = getArea(heights, l, r);
            maxArea = max(currentArea, maxArea);

            if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }

        return maxArea;
    }

    static int getArea(vector<int>& heights, int left, int right) {
        return min(heights[left], heights[right]) * (right - left);
    }
};
