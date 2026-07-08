class Solution {
public:
    vector<string> commonChars(vector<string>& word) {
        int n=word.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<word[0].length();i++){
            mpp[word[0][i]]++;
        }
        string s=word[0];
        sort(s.begin(),s.end());
        int j=0;
        while(j<s.length()){
            char ch=s[j];
            for(int i=1;i<n;i++){
            string st=word[i];
            int count=0;
            
            for(int k=0;k<st.length();k++){
                if(st[k]==ch)
                count++;
                
            }
            if(count<mpp[ch])
            mpp[ch]=count;
            if(count==0)
            break;

        }
        j++;
        }
        vector<string>ans;
        for(auto it:mpp){
            while(it.second!=0){
            ans.push_back(string(1,it.first));
            it.second--;

            }

        }
        return ans;
        
    }
};