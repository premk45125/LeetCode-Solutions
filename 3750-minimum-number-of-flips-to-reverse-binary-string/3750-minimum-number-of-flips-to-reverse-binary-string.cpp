class Solution {
public:
    
    int minimumFlips(int n) {
        string res="";
        while(n>=2){
            res+='0'+n%2;
            n/=2;
        }
        res+='0'+n;
        int count=0;
        int i=0;
        int j=res.length()-1;
        while(i<j){
            if(res[i]!=res[j])
            count+=2;
            i++;
            j--;
        }
        return count;
        
    }
};