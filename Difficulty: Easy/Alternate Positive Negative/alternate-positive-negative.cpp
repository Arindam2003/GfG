// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        
        // Step 1: Separate positives and negatives
        for (int num : arr) {
            if (num >= 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }
        
        // Step 2: Merge alternately
        int i = 0, p = 0, n = 0;
        while (p < pos.size() && n < neg.size()) {
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }
        
        // Step 3: Add remaining positives
        while (p < pos.size()) {
            arr[i++] = pos[p++];
        }
        
        // Step 4: Add remaining negatives
        while (n < neg.size()) {
            arr[i++] = neg[n++];
        }
    
    }
};