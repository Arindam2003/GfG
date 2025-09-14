// User function template for C++

class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                sum+=Grid[i][j];
            }
        }
        return sum;
    }
};