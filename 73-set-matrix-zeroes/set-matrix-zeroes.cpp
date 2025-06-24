class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m);
    vector<int> col(n);

    for(int i = 0; i<m; i++){
        for(int j = 0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int c = 0; c<m; c++){
        for(int d = 0; d<n; d++){
            if(row[c] == 1|| col[d]==1){
                matrix[c][d] = 0;
            }
        }
    }
}
};