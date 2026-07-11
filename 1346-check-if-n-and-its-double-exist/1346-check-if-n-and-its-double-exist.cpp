class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mpp;
        mpp[arr[0]]=0;

        for(int i=1;i<arr.size();i++){
            if(mpp.find(arr[i]*2)!=mpp.end() ||(arr[i]%2==0 && mpp.find(arr[i]/2)!=mpp.end()))
            return true;
            else{
                mpp[arr[i]]=i;
            }

        }
        return false;
        
    }
};