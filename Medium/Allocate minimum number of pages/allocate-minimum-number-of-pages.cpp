//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[],int stud , int maxSol,int N){
        int pageSum = 0;
        int cnt = 1;
        for(int idx = 0; idx < N ;idx++ ){
            if(A[idx] > maxSol)
              return false;
            if(pageSum + A[idx] > maxSol){
               cnt++;
               pageSum = A[idx];
               if(cnt > stud)
                return false;
            }
            else{
                pageSum += A[idx];
            }
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int start = 0;
        int end = accumulate(A,A+N,0),ans = -1;
        
        if(M > N)
         return -1;
        while(start <= end){
            int mid = (start + end) >> 1;
            if(isPossible(A,M,mid,N)){
                ans = mid;
                end = mid - 1;
            }
            else
              start = mid + 1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends