class Solution {
public:
    int addDigits(int num) {
        // int sum = 0;
        // while(num>9){
        //     while(num>0){
        //         sum+=(num%10);
        //         num/=10;
        //     }
        //     num=sum;
        //     sum=0;
        // }
        // return num;

        if (num == 0)
            return 0;
        else if (num % 9 == 0)
            return 9;
        else
            return num % 9;
    }
};