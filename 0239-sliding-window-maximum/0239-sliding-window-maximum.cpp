class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>q;
        for(int i=0;i<k;i++){
            q.push({nums[i],i});
        }
        vector<int>v;
        // v.push_back(q.top().first);
        int r=k-1;
        int l=0;
        while(r<n){
            v.push_back(q.top().first);
            l++;
            while (!q.empty() && q.top().second < l)
            q.pop();
            r++;
            if(r<n){
                q.push({nums[r],r});
            }
        }
        return v;
    }
};