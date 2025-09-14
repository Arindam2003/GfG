// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int row=arr.size();
        int col=arr[0].size();
        
        int ans=-1;
        int maxi=INT_MIN;
        for(int i=0;i<row;i++)
        {
            int rowSum=0;
            for(int j=0;j<col;j++)
            {
                rowSum+=arr[i][j];
            }
            if(rowSum>maxi)
            {
                maxi=rowSum;
                ans=i;
            }
        }
        return ans;
    }
};