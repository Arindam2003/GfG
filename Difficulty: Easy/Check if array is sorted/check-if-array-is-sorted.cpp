class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
            {
                return false;
            }
        }
        return true;
    }
};