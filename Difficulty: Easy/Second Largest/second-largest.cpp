//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int size = arr.size();
        int large=INT_MIN;
        int sec_large=INT_MIN;
        int i;
        if (size < 2) 
            return -1; 
        
        for(i=0;i<size;i++)
        {
            if(arr[i]>large)
            {
                sec_large=large;
                large=arr[i];
            }
            else if( arr[i]>sec_large && arr[i] != large)
            {
                sec_large=arr[i];
            }
        }
        if (sec_large == INT_MIN)
        {
            return -1;
        }
        
        
        return sec_large;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends