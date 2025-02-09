class Solution {
    public:
        string reverseWords(string s) {
            stack<string> st;
            int i;
    
            s += ' ';
            string str = "";
    
            for (i = 0; i < s.length(); i++) {
                if (s[i] == ' ') {
                    if (!str.empty()) //So empty strings wont be added
                        st.push(str);
                    str = "";
                } else
                    str += s[i];
            }
    
            string ans = "";
            while (!st.empty()) // .size() returns and unsigned int
            {
                ans += st.top() + " ";
                st.pop();
            }
    
            if (ans.back() == ' ') {
                ans.pop_back();
            }
            return ans;
        }
    };