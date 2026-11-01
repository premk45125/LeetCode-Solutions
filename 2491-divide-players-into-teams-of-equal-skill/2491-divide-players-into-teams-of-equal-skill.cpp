class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        long long sum=0;
        for(auto it:skill){
            sum+=it;
        }
        if(n==2)
        return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        int teams=n/2;
        int score= sum/teams;
        if(score*teams !=sum){
            return -1;
        }
        int l=0;
        int r=n-1;
        map<int,int>mpp;
        long long pdt=0;
        while(l<r){
            if(skill[l]+skill[r]==score){
                pdt += skill[l]*skill[r];
                l++;
                r--;
            }
            else
            return -1;
        }
        return pdt;
        
    }
};