
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted)
            return 0;

        if (n == 2)
            return -1;

        int small = 'z';
        int large = 'a';

        for(char ch:s){
            if(ch<small)
            small=ch;
            if(ch>large)
            large=ch;
        }

        if (small==s[0] || large==s[n-1])
            return 1;
        for(int i=1;i<n-1;i++){
            if(s[i]==small || s[i]==large)
            return 2;
        }
        return 3;
        // if ( large==0 && small)
        //     return 3;

        // return 2;
    }
};
