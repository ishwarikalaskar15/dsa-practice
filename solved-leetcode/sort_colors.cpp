#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :

    void sortZeroOneTwo(vector<int> &nums){

        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums ={0,0,2,2,1,0,1,2};

    obj.sortZeroOneTwo(nums);

    for( int x : nums){
        cout<< x << " ";

    }
    return 0;
}