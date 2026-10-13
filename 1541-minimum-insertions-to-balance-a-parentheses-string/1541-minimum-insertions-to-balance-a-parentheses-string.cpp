class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();

        stack<char>st;
        int ans=0;

        for(int i=n-1;i>=0;i--){
            if(s[i]==')')
            st.push(s[i]);
            else{
                if(st.empty()){
                    ans+=2;
                }
                else if(st.size()%2==1){
                    st.pop();
                    ans+=1;
                }
                else{
                    st.pop();
                    st.pop();
                }
            }
        }
        if(st.size()>0){
            if(st.size()%2==0){
                ans+=st.size()/2;
            }
            else{
                ans+=(st.size()+1)/2 +1;
            }
        }
        return ans;
        
    }
};