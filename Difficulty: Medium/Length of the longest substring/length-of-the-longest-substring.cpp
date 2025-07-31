class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        unordered_map<char,int> mpp;
        
        int l=0;
        int r=0;
        int maxlen=0;
        while(r < s.size())
        {
            if(mpp.find(s[r])!=mpp.end())
            {
                if(mpp[s[r]]>=l)
                {
                    l=mpp[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlen=max(len,maxlen);
            mpp[s[r]]=r;
            r++;
            
        }
        return maxlen;
        
    }
};