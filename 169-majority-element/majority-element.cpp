// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> freq;
//         int n = nums.size();

//         for (int num : nums) {
//             freq[num]++;
//             if (freq[num] > n / 2)
//                 return num;  // found majority
//         }
//         return -1; // in theory won't happen since majority always exists
//     }
// };
//Boyer-Moore Voting Algorithm (Most Efficient)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;

        for (int num : nums) {
            if (count == 0)
                candidate = num;
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};
