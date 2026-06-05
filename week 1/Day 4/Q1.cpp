class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        int i = 0,j = m - 1;
        int k = 0;
        int ans = 0;
        while(k < n){
            if(i == j){
                ans += mat[k][i];
            }else{
                ans += mat[k][i];ans += mat[k][j];
            }
            i++;j--;
            k++;
        }
        return ans;
    }
};