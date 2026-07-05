class Solution {
public:
    void leftsmallest(vector<int>& nums,vector<int>&left){
        int n=nums.size();
        stack<int>st;
        int i=0;
        while(i<n){
            
            
                while(!st.empty()&&nums[st.top()]>=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    left[i]=-1;  
                }
                else{
                    left[i]=st.top();
                }
                st.push(i);
                i++;
            
        }
        return;

    }
    void rightsmallest(vector<int>&nums,vector<int>&right){
                int n=nums.size();
        stack<int>st;
        int i=n-1;
        while(i>=0){
            
            
                while(!st.empty()&&nums[st.top()]>=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    right[i]=-1;  
                }
                else{
                    right[i]=st.top();
                }
                st.push(i);
                i--;
            
        }
        return;

    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        vector<int>right(n);
        leftsmallest(heights,left);
        rightsmallest(heights,right);
        int area=0;

        for(int i=0;i<n;i++){
            int l=left[i];
            int r=right[i];
            int ltotal=0;
            int rtotal=0;
            if(l==-1)
            ltotal=i;
            else
            {
             ltotal=i-l-1;
            }
            if(r==-1)
            rtotal=(n-1)-i;
            else
            rtotal=r-i-1;

            area=max(area,heights[i]*(ltotal+rtotal+1));
        }
         return area;

    }
};