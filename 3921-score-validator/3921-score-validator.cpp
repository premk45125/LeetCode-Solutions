class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int total=0;
        int counter=0;

        for(string s:events){
            if(s=="0"||s=="1"||s=="2"||s=="3"||s=="4"||s=="5"||s=="6")
            {
                total+=s[0]-'0';
            }
            else if(s=="W")
            counter++;
            else if(s=="WD")
            total++;
            else if(s=="NB")
            total++;

            if(counter==10)
            break;
        }
        return {total,counter};
    }
};