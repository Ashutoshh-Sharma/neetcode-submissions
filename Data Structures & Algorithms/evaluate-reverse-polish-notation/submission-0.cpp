class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int total = 0;
        for (auto& ch : tokens) {
            if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                if (ch == "+") {
                    st.push((y + x));
                } else if (ch == "-") {
                    st.push((x - y));
                } else if (ch == "*") {
                    st.push((y * x));
                } else if (ch == "/") {
                    st.push((x / y));
                }
            } else {
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
