class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1); 
    
        for (int i = 0; i < nums.size(); ++i) {
            int a = nums[i];
            bool found = false;
            for (int x = 0; x <= a; ++x) {
                if ((x | (x + 1)) == a) {
                    ans[i] = x; 
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans[i] = -1; 
            }
        }
        return ans;
    }
};