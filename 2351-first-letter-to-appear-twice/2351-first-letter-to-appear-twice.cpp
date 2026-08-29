class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>freq;
        for(auto it:s){
            freq[it]++;
            if(freq[it]==2)
            return it;
        }
        return s[0];
        
    }
};