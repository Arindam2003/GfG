class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int left=-1,right=-1;
        while(i<=j)
        {
            if(arr[i]==target && left==-1)
            {
                left=i;
            }
            if(arr[j]==target && right==-1)
            {
                right=j;
            }
            
            if(left!=-1 && right!=-1)
            {
                break;
            }
            
            if(left==-1) i++;
            if(right==-1) j--;
        }
        if(left==-1 && right==-1) return 0;
        return right-left+1;
    }
};
