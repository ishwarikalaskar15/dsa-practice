#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxx = max(count, maxx);
            } else {
                count = 0;
            }
        }

        return maxx;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum consecutive 1s: "
         << obj.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}