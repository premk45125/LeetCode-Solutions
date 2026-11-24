class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int count=0;
        unordered_map<char,int>freq;
        for(auto ch:allowed){
            freq[ch]++;
        }

        for(int i=0;i<n;i++){
             bool flag=true;

             for(auto it:words[i]){
                if(freq[it]>0)
                continue;
                else
                {
                    flag=false;
                    break;
                }
             }
             if(flag){
                count++;
             }
        }
        return count;
        
    }
};