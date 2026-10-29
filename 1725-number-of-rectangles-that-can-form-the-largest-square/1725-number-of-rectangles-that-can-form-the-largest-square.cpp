class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        map<int,int>mpp;
        int maxi=0;
        int idx=-1;
        for(auto it:rectangles){
            maxi=min(it[0],it[1]);
            if(maxi>idx)
            idx=maxi;
            mpp[maxi]++;
        }
        int count=0;
        for(auto it:mpp){
            count=max(count,it.second);
        }
        return mpp[idx];
    }
};