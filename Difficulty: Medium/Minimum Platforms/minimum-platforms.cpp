class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int n_arr=arr.size();
        int n_dep=dep.size();
        int j=0;
        int i=0;
        int count=0;
        int max_count=0;
        while(i<n_arr && j<n_dep)
        {
            if(arr[i]<=dep[j])
            {
                count++;
                i++;
            }else{
                count--;
                j++;
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
