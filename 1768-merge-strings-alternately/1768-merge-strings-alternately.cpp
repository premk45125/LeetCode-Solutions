class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int i=0;
        int j=0;
        string res="";
        bool flag=true;
        while(i<n1 && j< n2){
            if(flag){
                res+=word1[i];
                i++;
                flag=false;
            }
            else{
                res+=word2[j];
                j++;
                flag=true;
            }
        }
        while(i<n1)
        {
            res+=word1[i];
            i++;
        }
        while(j<n2){
            res+=word2[j];
            j++;
        }
        return res;
        
    }
};