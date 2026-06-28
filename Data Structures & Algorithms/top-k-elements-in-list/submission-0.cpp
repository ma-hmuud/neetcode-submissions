class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i : nums) {
            freq[i]++;
        }

        vector<pair<int, int>> map;
        for (auto& i : freq) {
            map.push_back(i);
        }

        sort(map.begin(), map.end(), cmp);

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(map[i].first);
        }
        return result;
    }

    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }
};
