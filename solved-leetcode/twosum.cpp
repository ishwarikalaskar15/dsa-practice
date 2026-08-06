#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            // Check if the required number already exists
            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            // Store current number and its index
            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}