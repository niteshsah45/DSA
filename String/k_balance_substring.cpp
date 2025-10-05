class Solution {
public:
    string removeKBalanced(string s, int k) {
        stack<char> st;
        stack<int> count; // track size of current valid substring

        for (char c : s) {
            if (c == '(') {
                st.push(c);
                count.push(1); // new '(' starts a count
            } else { // c == ')'
                if (!st.empty() && st.top() == '(') {
                    st.pop(); // remove '('
                    int topCount = count.top(); count.pop();

                    // merge with previous count if exists
                    if (!count.empty()) {
                        int newCount = count.top() + topCount + 1;
                        count.pop();
                        count.push(newCount);

                        // if we found 2*k balanced substring
                        if (newCount == 2*k) {
                            count.pop(); // remove it
                        }
                    } else {
                        count.push(topCount + 1);

                        if (count.top() == 2*k) {
                            count.pop();
                        }
                    }
                } else {
                    // unmatched ')'
                    st.push(c);
                    count.push(1);
                }
            }
        }

        // rebuild answer
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
