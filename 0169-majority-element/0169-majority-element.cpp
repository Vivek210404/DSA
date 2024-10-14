class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n/2];

        
        map <int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }
        return -1;

    }
};