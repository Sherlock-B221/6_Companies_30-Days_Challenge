// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        unordered_map<int,int> m;
        int *arr1=new int[2];
        
        for ( int i = 0; i<n; i++){
            if ( m[arr[i]] > 0 )
                arr1[0] = arr[i];
            m[arr[i]]++;
        
        }
        for ( int i = 1; i<=n; i++) {
            if ( m[i] < 1  )
                arr1[1] = i;
        }
        
        return arr1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
