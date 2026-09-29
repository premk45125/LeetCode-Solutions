class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        unordered_map<string,int> freq;
        int count=0;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
            
            
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1){
                count++;
                if(count==k)
                return arr[i];
            }
        }
       

        return "";
        
    }
};