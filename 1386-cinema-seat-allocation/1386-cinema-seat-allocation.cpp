class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, set<int>> mpp;

        for(auto it : reservedSeats) {
            mpp[it[0]].insert(it[1]);
        }

        int ans = 2 * n;

        for(auto &it : mpp) {
            int row = it.first;
            set<int>& s = it.second;

            bool left = true;   
            bool middle = true;  
            bool right = true;   

            for(int seat : s) {
                if(seat >= 2 && seat <= 5)
                    left = false;

                if(seat >= 4 && seat <= 7)
                    middle = false;

                if(seat >= 6 && seat <= 9)
                    right = false;
            }

            if(left && right) {
            }
            else if(left || middle || right) {
                ans--;
            }
            else {
                ans -= 2;
            }
        }

        return ans;
    }
};