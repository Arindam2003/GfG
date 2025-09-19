// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        int valid=min(N,M);
        for(int i=0;i<valid;i++)
        {
            
            // i-th row sum...
            int rowSum=0;
            for(int j=0;j<M;j++)
            {
                rowSum+=A[i][j];
            }
            
            // i-col..
            int colSum=0;
            for(int j=0;j<N;j++)
            {
                colSum+=A[j][i];
            }
            
            if(rowSum!=colSum)
            {
                return 0;
            }
        }
        return 1;
    }
};