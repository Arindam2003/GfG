class Solution {
  public:
    void helper(string &s,int left,int right)
    {
        if(left>=right)
        {
            return ;
        }
        swap(s[left],s[right]);
        helper(s,left+1,right-1);
    }
    bool isPalindrome(string& s) {
        // code here
        string org=s;
        helper(s,0,s.size()-1);
        string rev=s;
        if(org==rev)
        {
            return true;
        }else{
            return false;
        }
    }
};