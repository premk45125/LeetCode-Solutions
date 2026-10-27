class Solution {
public:
    int minMaxDifference(int num) {
        vector<int>v1;
        while(num>0){
            v1.push_back(num%10);
            num/=10;
        }
        vector<int>v2=v1;
        int n=v1.size();
        int dig=-1;
        for(int i=n-1;i>=0;i--){
            if(v1[i]<9){
                if(dig==-1)
                {
                dig=v1[i];
                v1[i]=9;
                }
                else if(v1[i]==dig){
                    v1[i]=9;
                }                
            }
        }
        int dig2=-1;
        for(int i=n-1;i>=0;i--){
            if(v2[i]!=0){
                if(dig2==-1)
                dig2=v2[i];
            }
            if(v2[i]==dig2){
                v2[i]=0;
            }
            
        }
        int maxi=0;
        int mini=0;
        for(int i=n-1;i>=0;i--){
            maxi=maxi*10 + v1[i];
            mini=mini*10 + v2[i];
        }
        return maxi-mini;
        
    }
};