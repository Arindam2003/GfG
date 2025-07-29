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
        for(int st=1,en=k;en<arr.size();st++,en++)
        {
            currSum=currSum-arr[st-1];
            currSum=currSum+arr[en];
            final=max(final,currSum);
        }
        return final;
    }
};