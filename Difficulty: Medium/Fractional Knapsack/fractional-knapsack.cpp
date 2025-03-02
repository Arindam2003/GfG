//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class implemented

struct Item{
    int value;
    int weight;
};



class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    static bool myComp(Item a,Item b)
    {
        double i1=(double)a.value/a.weight;
        double i2=(double)b.value/b.weight;
        return i1>i2;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        int n=val.size();
        vector<Item> item(n);
        for(int i=0;i<n;i++)
        {
            item[i]={val[i],wt[i]};
        }
        
        sort(item.begin(),item.end(),myComp);
        double total=0;
        for(int i=0;i<n;i++)
        {
            if(item[i].weight<=capacity)
            {
                total=total+item[i].value;
                capacity=capacity-item[i].weight;
            }
            else{
                double frac=(double)item[i].value/item[i].weight;
                double x=frac*capacity;
                total=total+x;
                break;
            }
        }
        return total;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends