class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3!=0)
        return false;
        int req=sum/3;

        int temp=0;
        int count=0;
        for(int i=0;i<n;i++){
            temp+=arr[i];
            if(temp==req){
                count++;
                temp=0;
            }
        }
       
        
        if(count>=3)
        return true;
        else
        return false;
    }
};