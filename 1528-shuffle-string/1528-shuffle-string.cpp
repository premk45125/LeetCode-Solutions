class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       int n=s.length();
       vector<char>v(n);
       for(int i=0;i<n;i++){
        v[indices[i]]=s[i];
       } 
       string res="";
       for(char ch:v)
       res+=ch;
       return res;
    }
};