class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> ans;
        // for(int i=1;i<=numRows;i++){
        //     long long ans = 1;
        //     vector<int> ansRow;
        //     ansRow.push_back(1);
        //     for(int col = 1;col<numRows;col++){
        //         ans = ans * (numRows-col);
        //         ans = ans/col;
        //         ansRow.push_back(ans);
        //     }
        // }
        // ans.push_back(ansRow);
        // return ans;

        vector<vector<int>> ans;
        for (int i = 0; i < numRows; ++i) {
            vector<int> ansRow(i + 1, 1);
            for (int col = 1; col < i; col++) {
                ansRow[col] = ans[i - 1][col - 1] + ans[i - 1][col];
            }
            ans.push_back(ansRow);
        }
        return ans;
    }
};