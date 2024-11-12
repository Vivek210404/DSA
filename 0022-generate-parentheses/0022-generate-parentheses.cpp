class Solution {
public:
vector<string> ans;
    void solve(int cnt,int n,string temp,int op)
    {
        if(cnt == 2*n)
        {
            if(op == 0)
            ans.push_back(temp);
            return;
        }

        solve(cnt+1,n,temp + "(",op + 1);

        if(op > 0)
        solve(cnt+1,n,temp + ")",op - 1);
    }
    vector<string> generateParenthesis(int n) {
        solve(0,n,"",0);
        return ans;
    }
};