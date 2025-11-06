class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> freq(1001, 0);
        vector<int> ans;

        for (int num : nums1) {
            freq[num] = 1;  // mark present in nums1
        }
        for (int num : nums2) {
            if (freq[num] == 1) {  // present in both
                ans.push_back(num);
                freq[num] = -1;    // avoid duplicates in ans
            }
        }
        return ans;
    }
};
