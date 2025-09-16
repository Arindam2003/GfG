// User function Template for C++

class Solution {
  public:
    bool isIncreasing(vector<int> arr)
    {
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>=arr[i])
            {
                return false;
            }
        }
        return true;
    }
    
    bool isDecreasing(vector<int> arr)
    {
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<=arr[i])
            {
                return false;
            }
        }
        return true;
    }
    
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int row=Mat.size();
        int count=0;
        for(int i=0;i<row;i++)
        {
            if(isIncreasing(Mat[i]) || isDecreasing(Mat[i]))
            {
              count++;  
            }
        }
        return count;
    }
};