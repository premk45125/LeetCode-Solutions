class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;

        while(num > 0) {
            v.push_back(num % 10);
            num /= 10;
        }

        sort(v.begin(), v.end());

        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < v.size(); i++) {
            if(i % 2 == 0)
                sum1 = sum1 * 10 + v[i];
            else
                sum2 = sum2 * 10 + v[i];
        }

        return sum1 + sum2;
    }
};