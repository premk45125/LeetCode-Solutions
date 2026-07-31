class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int used=0;
        int count=0;
        while(mainTank>0){
            used++;
            mainTank--;
            if(used==5){
                if(additionalTank>=1)
               {
                 mainTank+=1;
                 additionalTank-=1;
               }
                count+=used;
                used=0;
            }
        }
        count+=used;
        return count*10;
        
    }
};