class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        int team=n;
        while(team!=1){
            match+=team/2;
            team =(team+1)/2;
        }
        return match;
        
    }
};