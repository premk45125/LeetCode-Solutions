class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int m=s.length();
        int n=queries.size();
         const long long MOD = 1000000007;
        vector<int> ans;
        vector<int>prefix(m,0);
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=s[i]-'0';
            prefix[i]+=sum;
        }
        vector<long long>numupto(m,0);
        numupto[0]=s[0]-'0';
        for(int i=1;i<m;i++){
            int dig=s[i]-'0';
            if(dig)
            numupto[i]=(numupto[i-1]*10 + dig)%MOD;
            else
            numupto[i]=numupto[i-1];
        }
        vector<int>digupto(m,0);
        int count=0;
        for(int i=0;i<m;i++){
            if(s[i]!='0')
            count++;
            digupto[i]+=count;
        }
        vector<long long>powupto(m+1,0);
        powupto[0]=1;
        
        for(int i=1;i<=m;i++){
            powupto[i]=(powupto[i-1]*10)%MOD;
        }
        
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            long long total=0;
            total+=prefix[r];

            if(l!=0)
            total-=prefix[l-1];
            if(total==0)
            {
                ans.push_back(0);
                continue;
            }
           
            
           
            int k=0;
            if(l>0)
            k=digupto[r]-digupto[l-1];
            long long num=0;
            if(l>0)
            num = (numupto[r] -(numupto[l-1] * powupto[k]) % MOD +MOD) % MOD;
            else if(l==0)
            num+=numupto[r]%MOD;

            ans.push_back((total*num)%MOD);

        }
        return ans;
    }
};