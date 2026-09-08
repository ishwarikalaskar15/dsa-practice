#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maxxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

            sum = sum + nums[i];

            if (sum > maxxi) {
                maxxi = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        return maxxi;
    }
};

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;

    int maxsum = obj.maxSubArray(nums);

    cout << "The maximum sum is: " << maxsum;

    return 0;
}

