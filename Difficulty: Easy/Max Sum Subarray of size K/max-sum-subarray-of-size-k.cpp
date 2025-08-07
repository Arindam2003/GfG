class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int currSum=0;
        for(int i=0;i<k;i++)
        {
            currSum=currSum+arr[i];
        }
        int final=currSum;
        int n=arr.size();
        for(int st=1,en=k;en<n;st++,en++)
        {
            currSum=currSum-arr[st-1];
            currSum=currSum+arr[en];
            final=max(currSum,final);
        }
        return final;
    }
};