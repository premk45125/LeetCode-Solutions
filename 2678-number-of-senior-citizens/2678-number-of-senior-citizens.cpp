class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(auto it:details){
            int age=10*(it[11]-'0')+(it[12]-'0');
            if(age>60)
            count++;
        }
        return count;
        
    }
};