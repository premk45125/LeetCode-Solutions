class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(26,0);
        if(s.length()!=t.length())
        return false;
        for(int i=0;i<t.length();i++)
        v[t[i]-'a']++;
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']--;
            if(v[s[i]-'a']<0)
            return false;
        }
        return true;
    }
};