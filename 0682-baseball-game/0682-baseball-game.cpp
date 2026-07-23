class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int prev1 = st.top();
                st.pop();

                int prev2 = st.top();
                st.pop();

                int curr = prev1 + prev2;

                st.push(prev2);
                st.push(prev1);
                st.push(curr);
            }
            else if (operations[i] == "D") {
                st.push(2 * st.top());
            }
            else if (operations[i] == "C") {
                st.pop();
            }
            else {
                st.push(stoi(operations[i]));
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};