class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int current_max = 1;
        for (int i = 0; i < n; i++) {
            current_max = nums[i] * current_max;
            maxi = max(current_max,maxi);
            if (current_max == 0) {
                current_max = 1;
            }
        }
        current_max = 1;
        for (int i = n-1; i >= 0; i--) {
            current_max = nums[i] * current_max;
            maxi = max(current_max,maxi);
            if (current_max == 0) {
                current_max = 1;
            }
        }
        return maxi;
    }
};