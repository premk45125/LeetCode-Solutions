class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> st;

        for(auto it:words){
            string res="";
            for(auto x:it){
                res+= code[x-'a'];
            }
            st.insert(res);
        }
        return st.size();
        

    }
};