// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string ans = "";
    map<char,int> m;
    for (int i = 0; i<src.length(); i++) {
        ans += src[i];
        int count = 1;
        while ( src[i+1] == src [i] ) {
            count++;
            i++;
        }
        ans += to_string(count);
    }
    
  
  return ans;
}     
 
