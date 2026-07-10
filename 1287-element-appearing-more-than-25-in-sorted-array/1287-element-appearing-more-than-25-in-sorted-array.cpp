class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        if(n<4)
        return arr[0];
        vector<int>pos;
        pos.push_back(0);
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1])
            pos.push_back(i);
        }
        int size=pos.size();
        int req=n/4 +1;
        for(int j=1;j<size;j++){
            if(pos[j]-pos[j-1]>=req){
                return arr[pos[j-1]];
            }
        }
        if(n-pos.back()>=req){
            return arr[pos.back()];
        }
return -1;
        
    }
};