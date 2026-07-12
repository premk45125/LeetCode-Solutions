class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0)
        return {};
        unordered_map<int,int>mpp;
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        sort(temp.begin(),temp.end());
        mpp[temp[0]]=1;
        int j=2;
        for(int i=1;i<n;i++){
             if(temp[i]!=temp[i-1])
             {
                mpp[temp[i]]=j;
                j++;
             }
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=mpp[arr[i]];
        }
        return res;
        
    }
};