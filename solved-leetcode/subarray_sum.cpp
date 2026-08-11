#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        mp[0]=1;

        int count= 0;
        int sum= 0;

        for(int i =0;i<nums.size();i++){

            sum+= nums[i];

            int need = sum-k;

            if(mp.find(need)!= mp.end()){
                 count+= mp[need];
            }

            mp[sum]++;

        }
        return count;
    }
};


  
int main() {
    Solution obj;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    int ans = obj.subarraySum(nums, k);

    cout << ans << endl;

    return 0;
} 
            
        

        
        