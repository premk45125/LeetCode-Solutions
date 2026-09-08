class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> freq;

        for (auto it : arr1)
            freq[it]++;

        vector<int> v;

        for (auto it : arr2) {
            while (freq[it] != 0) {
                v.push_back(it);
                freq[it]--;
            }
        }

        vector<int> remaining;

        for (auto it : freq) {
            while (it.second != 0) {
                remaining.push_back(it.first);
                it.second--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for (auto x : remaining)
            v.push_back(x);

        return v;
    }
};