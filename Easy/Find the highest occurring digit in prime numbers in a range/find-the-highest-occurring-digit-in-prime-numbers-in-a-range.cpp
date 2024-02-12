//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool prime(int num){
    //   int flag=0;
      if(num==0 || num==1){
          return false;
      }
      if(num==2){
          return true;
      }
      for(int i=2;i<=sqrt(num);i++){
          if(num%i==0){
              return false;
          }
      }
      return true;
  }
    int maxDigit(int L, int R)  {
        // code here
        vector<int>mp(10,0);
        // vector<int>v;
        for(int i=L;i<=R;i++){
            if(prime(i)){
                int j=i;
                while(j>0){
                    mp[j%10]++;
                    j/=10;
                }
            }
        }
        int mx=0,m=-1;
        for(int i=9;i>=0;i--){
            if(mp[i]>mx){
                mx=mp[i];
                m=i;
            }
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends