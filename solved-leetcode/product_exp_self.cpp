#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(int nums[], int n)
{
    vector<int> ans(n);

    int left = 1;

    for(int i = 0; i < n; i++)
    {
        ans[i] = left;
        left *= nums[i];
    }

    int right = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        ans[i] *= right;
        right *= nums[i];
    }

    return ans;
}

int main()
{

    
    int arr[4] = {3, 1, 4, 2};

    vector<int> ans = productExceptSelf(arr, 4);

    for(int i = 0; i < 4; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}