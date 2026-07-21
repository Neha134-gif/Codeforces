#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool func(vector<int>& nums, int indx, int sum) {
        int n = nums.size();
        if (sum == 0) {
            return true;
        }
        if (sum < 0 || indx == n) {
            return false;
        }
        bool path1 = func(nums, indx + 1, sum - nums[indx]);
        bool path2 = func(nums, indx + 1, sum);
        return path1 || path2;
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return func(nums, 0, k);
    }
};