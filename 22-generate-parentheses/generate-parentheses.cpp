class Solution {
public:
    void helper(int open, int close, vector<string> &ans, string str){
        if(open==0&&close==0){
            ans.push_back(str);
            return;
        }
        if(open<close){
            str.push_back(')');
            helper(open, close-1, ans, str);
            str.pop_back();
        }
        if(open>0){
            str.push_back('(');
            helper(open-1, close, ans, str);
            str.pop_back();
        }
        return; 
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n, close = n;
        // string s="";
        // s.reserve(2*n);
        helper(open, close, ans, "");
        return ans;
    }
};