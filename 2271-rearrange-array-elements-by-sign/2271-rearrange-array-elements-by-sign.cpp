class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        // vector<int> pos;
        // vector<int> neg;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }
        //     else{
        //         neg.push_back(nums[i]);
        //     }
        // }
        // vector<int> wh;
        // int i = 0, j = 0, k = 0;
        // while(k < n){
        //     if(k % 2 == 0)
        //         wh.push_back(pos[i++]);
        //     else
        //         wh.push_back(neg[j++]);
        //     k++;
        // }
        // return wh;

        vector <int> ans(n,0);
        int posIndex=0, negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};