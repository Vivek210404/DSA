class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;

        while(low<high){
        int mid= (low+high)/2;
        if(arr[mid]-mid-1<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        if(arr[low]-low-1<k){
            return low+k+1;
        }
        return low+k;
    }
};