#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int right = 0, left = 0;
        int sum = nums[0];
        int Maxlen = 0;
        int n = nums.size();

        while (right < n) {

            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            if (sum == k) {
                Maxlen = max(Maxlen, right - left + 1);
            }

            right++;

            if (right < n)
                sum += nums[right];
        }

        return Maxlen;
    }
};

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    Solution obj;
    int ans = obj.longestSubarray(nums, k);

    cout << "The length of longest subarray sum k is: " << ans;

    return 0;
}