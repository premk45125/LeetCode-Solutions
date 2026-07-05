class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        string say=countAndSay(n-1); 
        string res="";
        for(int i=0;i<say.size();i++){
            char ch=say[i];
            int count=0;
            while(say[i]==ch){
                count++;
                i++;
            }
            res+=to_string(count)+string(1,ch);
            i-=1;
        }
        return res;
    }
};