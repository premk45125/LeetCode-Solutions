class Solution {
public:
    bool isFascinating(int n) {
        if(n>333)
        return false;
        int twice=2*n;
        int thrice=3*n;
        string res=to_string(n);
        vector<bool> v(10,false);
        res+=to_string(twice);
        res+=to_string(thrice);
        for(char ch:res){
            v[ch-'0']=true;

        }
        if(v[0])
        return false;
        for(int i=1;i<10;i++){
            if(v[i]==false)
            return false;
        }
        return true;
        
    }
};