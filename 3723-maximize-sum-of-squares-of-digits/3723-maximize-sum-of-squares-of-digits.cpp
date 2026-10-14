class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)
        return "";

        string res="";
        if(sum<=9)
        {
            res+='0'+sum;
            num--;
            while(num--){
                res+='0';
            }
            return res;
        }
        while(num--){
            if(sum>=9)
            {
                res+='0'+9;
                sum-=9;
            }
            else if(sum>0){
                res+='0'+sum;
                sum=0;
            }
            else
            res+='0';
        }
        return res;

        
    }
};