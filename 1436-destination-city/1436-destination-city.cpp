class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        map<string,string>mpp;
        for(auto it:paths){
            mpp[it[0]]=it[1];
        }
        string res=paths[0][0];
        while(mpp.find(res)!=mpp.end()){
            res=mpp[res];
        }
        return res;
        
    }
};