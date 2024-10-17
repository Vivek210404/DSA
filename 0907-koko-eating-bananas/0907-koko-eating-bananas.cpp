class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long int low = 1;
        long long int high = *max_element(piles.begin(),piles.end());
        int m = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            long long int count = 0;
            for(int i=0;i<n;i++){
                count=count+ceil((double)piles[i]/mid);
            }
            if(count<=h){     
                m=min(m,mid);
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return m;
    }
};