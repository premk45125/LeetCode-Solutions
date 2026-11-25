class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string res="";
        int count=0;
        for(auto it:s){
            if(it==x)
            count++;
        }
        if(count==0)
        return s;

        for(auto it:s){
            if(it==x)
            continue;
            else
            res+=it;
        }
        while(count--)
        res+=x;
        return res;
    }
};