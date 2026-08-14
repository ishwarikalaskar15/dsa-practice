#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int j = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }

        if(j==-1) return;

        for(int i= j+1;i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

    int main(){
        vector<int> nums= {1,0,2,4,5,0,7,0,0,3};

        Solution obj;
        obj.moveZeroes(nums);

        cout<<" After moving zeros ";

        for(int x : nums){
            cout<< x << " ";
        }
        return 0;
    }