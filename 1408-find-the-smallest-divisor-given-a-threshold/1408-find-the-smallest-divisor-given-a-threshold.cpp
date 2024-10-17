class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        if(nums.size()==threshold) return high;
        while(low<high){
            int mid = low+(high-low)/2, count=0;
            for(auto i : nums){
                count += (i+mid-1)/mid;
            }
            if(count>threshold){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};