class Solution {
public:
    int secondsBetweenTimes(string s, string e) {

        int h1 = stoi(s.substr(0, 2));
        int m1 = stoi(s.substr(3, 2));
        int s1 = stoi(s.substr(6, 2));

        int h2 = stoi(e.substr(0, 2));
        int m2 = stoi(e.substr(3, 2));
        int s2 = stoi(e.substr(6, 2));

        int total = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

        return total;
    }
};