class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string res="";
        for(int i=0;i<s.length();i++){
            string word="";

            while(i<s.length()&&s[i]!=' '){
                word+=s[i];
                i++;
            }

            if(word.length()>0)
{
            reverse(word.begin(),word.end());
            res+=" "+word;

}            
        }
        
        return res.substr(1);
        
    }
};