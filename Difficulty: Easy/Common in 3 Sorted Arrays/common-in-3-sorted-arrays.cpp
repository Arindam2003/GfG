class Solution {
    
    vector<int> commontwo(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> newarr;
        int a1=0;
        int a2=0;
        while(a1<arr1.size() && a2<arr2.size()){
            if(arr1[a1]==arr2[a2]){
                if(newarr.empty() || newarr.back() != arr1[a1]){
                    newarr.push_back(arr1[a1]);
                }
                a1++;
                a2++;
            }
            else if(arr1[a1]<arr2[a2]){
                a1++;
            }
            else{
                a2++;
            }
        }
        return newarr;
    }
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        vector<int> newtwo=commontwo(arr1,arr2);
        vector<int > ans=commontwo(newtwo,arr3);
        return ans;
        
    }
};