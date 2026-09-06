class Solution {
public:
    struct Group {
        long long pos;
        long long speed;
    };

    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = position.size();


        vector<Group> groups;

        for (int i = 0; i < n; ) {
            int j = i;

            while (j + 1 < n &&
                   position[j + 1] - position[j] <= distance) {
                j++;
            }

            groups.push_back({position[j], speed[j]});
            i = j + 1;
        }

        vector<Group> st;

        for (int i = groups.size() - 1; i >= 0; i--) {
            Group cur = groups[i];

            while (!st.empty()) {
                Group right = st.back();

                if (cur.pos + distance >= right.pos) {
                    cur = right;
                    st.pop_back();
                }
                else if (cur.speed > right.speed) {
                    cur = right;
                    st.pop_back();
                }
                else {
                    break;
                }
            }

            st.push_back(cur);
        }

        return st.size();
    }
};