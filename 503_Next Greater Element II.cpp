/*
Leetcode problem no .-  503
problem name - Next Greater Element II
Difficulty - Medium

*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n =nums.size();
        vector<int>ans(n ,-1);
        for(int i =0;i<n;i++){
            int j = i+1;
            while((j%n)!=i && nums[j%n]<=nums[i])
                j++;
            if((j%n) !=i)
                ans[i] = nums[(j%n)];
        }
        return ans;
    }
};
