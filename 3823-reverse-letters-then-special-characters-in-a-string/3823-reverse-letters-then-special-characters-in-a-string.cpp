class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();

        int i = 0, j = n - 1;
        while (i < j) {
            while (i < j && !islower(s[i])) i++;
            while (i < j && !islower(s[j])) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        i = 0;
        j = n - 1;
        while (i < j) {
            while (i < j && islower(s[i])) i++;
            while (i < j && islower(s[j])) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};