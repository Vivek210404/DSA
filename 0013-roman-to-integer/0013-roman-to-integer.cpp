class Solution {
public:
    int prior(char c){
        if(c=='I'){
            return 1;
        }
        
        if(c=='V'){
            return 5;
        }
        
        if(c=='X'){
            return 10;
        }
        
        if(c=='L'){
            return 50;
        }
        
        if(c=='C'){
            return 100;
        }
        
        if(c=='D'){
            return 500;
        }
        if(c=='M'){
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        int ans=0,pre=0;
        for(int i=s.size()-1;i>=0;i--){
            if(prior(s[i])>=pre){
                pre=prior(s[i]);
                ans+=prior(s[i]);
            }
            else{
                pre=prior(s[i]);
                ans-=prior(s[i]);
            }
        }
       return ans;
    }
};