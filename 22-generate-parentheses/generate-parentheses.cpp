class Solution {
public:
    void helper(int open, int close, vector<string> &ans, string str){
        if(open==0&&close==0){

            ans.push_back(str);
            return;
        }
        if(open<close)
            helper(open, close-1, ans, str +')');
        if(open!=0)
            helper(open-1, close, ans, str +'(');
        return; 
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n, close = n;
        helper(open, close, ans, "");
        return ans;
    }
};