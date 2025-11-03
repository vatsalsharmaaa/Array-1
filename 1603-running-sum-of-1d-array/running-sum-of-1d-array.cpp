class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        int preSum=0;
        int val;
        for(int i=0;i<n;i++){
            val = preSum+ nums[i];
            ans.push_back(val);
            val=0;
            preSum+=nums[i];
        }
        return ans;
    }
};