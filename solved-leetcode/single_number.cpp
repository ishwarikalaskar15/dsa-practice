#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int xorr = 0;
     for(int i =0;i<nums.size();i++){
        xorr = xorr ^ nums[i];
     }
     return xorr;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {1,1,2,3,3,8,8,2,5};

    cout<<" single number is "<< obj.singleNumber(nums) << endl;

    return 0;
}
