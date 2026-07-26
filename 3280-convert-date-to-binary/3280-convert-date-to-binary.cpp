class Solution {
public:
    string binary(int n){
        string res="";
        while(n>=2){
            res+='0'+n%2;
            n/=2;
        }
        res+='0'+n;
        reverse(res.begin(),res.end());
        return res;
    }
    string convertDateToBinary(string date) {
        string res="";
        res+=binary(stoi(date.substr(0,4)));
        res+='-';
        res+=binary(stoi(date.substr(5,2)));
        res+='-';
        res+=binary(stoi(date.substr(8,2)));

        return res;

        
    }
};