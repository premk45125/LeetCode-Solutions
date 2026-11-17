class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        unordered_map<int,int>freq;
        for(auto it:target)
        freq[it]++;

        for(auto it:arr){
            freq[it]--;
            if(freq[it]<0)
            return false;
        }
        return true;
        
    }
};