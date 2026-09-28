class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=text.length();
        map<char,int>mpp;
        for(auto it:brokenLetters){
            mpp[it]--;
        }
        bool flag=true;
        int count=0;

        for(int i=0;i<n;i++){
            if(text[i]==' '){
                if(flag)
                count++;
                else
                flag=true;
                continue;
            }
            if(mpp.find(text[i])!=mpp.end())
            flag=false;

        }
        if(flag)
        count++;
        return count;
        
    }
};