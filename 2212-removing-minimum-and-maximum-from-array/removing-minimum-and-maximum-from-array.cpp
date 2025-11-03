class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(nums[i]<nums[k])
            i=k;
            if(nums[j]>nums[k])
            j=k;

        }
        return min(min(max(i+1,j+1),max(n-i,n-j)),min(i+1+n-j,j+1+n-i));
    }
};