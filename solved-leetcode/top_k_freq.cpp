#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> v;

        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> ans = obj.topKFrequent(nums, k);

    for (int x : ans)
        cout << x << " ";

    return 0;
}