class Solution {
public:
    string sortString(string s) {
        vector<int>freq(26,0);
        string res="";

        for(auto it:s){
            freq[it-'a']++;
        }
        bool find=false;
        do{ 
            find=false;
            for(int i=0;i<26;i++){
            if(freq[i]>0){
                find=true;
                res+='a'+i;
                freq[i]--;
            }
        }
        for(int i=25;i>=0;i--){
            if(freq[i]>0){
                res+='a'+i;
                freq[i]--;
            }
        }
        }while(find);
        return res;
    }
};