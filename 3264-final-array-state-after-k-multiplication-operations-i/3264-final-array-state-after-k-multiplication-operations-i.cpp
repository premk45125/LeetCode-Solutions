class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            int val=pq.top().first;
            val=val*multiplier;
            int idx=pq.top().second;
            pq.pop();
            pq.push({val,idx});
        }
        while(!pq.empty()){
            int val=pq.top().first;
            int i=pq.top().second;
            pq.pop();

            nums[i]=val;
        }
        return nums;
        
    }
};