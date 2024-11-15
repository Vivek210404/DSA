class Solution {
public:
    int reverse(int x) {
        int64_t rev = 0;
        while(abs(x)>0){
            rev = rev*10+x%10;
            x = x/10;
        }
        if(x<0)
        return (-1)*rev;
        else if(rev>pow(2,31)-1)
        return 0;
        else if(rev<-pow(2,31))
        return 0;
        else
        return rev;
    }
};