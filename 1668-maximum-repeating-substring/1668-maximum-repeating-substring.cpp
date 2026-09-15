class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n1 = sequence.length();
        int n2 = word.length();
        int ans = 0;

        for (int i = 0; i <= n1 - n2; i++) {
            int count = 0;
            int j = i;

            while (j + n2 <= n1 && sequence.substr(j, n2) == word) {
                count++;
                j += n2;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};