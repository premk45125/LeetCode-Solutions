class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>v(26,false);
        for(auto it:sentence){
            v[it-'a']=true;
        }
        for(auto it:v){
            if(it==false)
            return false;
        }
        return true;
        
    }
};