class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(i<=9){
                if(i%2==0)
                count++;
            }
            else {
                int sum=0;
                int val=i;
                while(val>0){
                    int r=val%10;
                    sum+=r;
                    val/=10;
                }
                if(sum%2==0)
                count++;
            }
        }
        return count;
        
    }
};