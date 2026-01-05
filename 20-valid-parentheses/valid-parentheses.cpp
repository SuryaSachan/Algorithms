class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        stack<char> st;

        for(int i=0;i<s.size();i++){
            if(!st.empty() && mp[st.top()]==s[i])
                st.pop();
            else
                st.push(s[i]);

        }
        if(st.empty())
            return true;
        return false;
    }
};