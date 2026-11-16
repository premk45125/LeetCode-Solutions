class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k)
        return s;
        int size=0;
        int sum=0;
        string res="";
        do{
            res="";
            for(int i=0;i<s.size();i++){
                sum+=s[i]-'0';
                size++;
                if(size==k){
                    res+=to_string(sum);
                    sum=0;
                    size=0;
                }
            }
            if(size!=0){
                res+=to_string(sum);
                    sum=0;
                    size=0;

            }
            s=res;
            
        }while(res.size()>k);
        return res;
        
    }
};