//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        // sort(a,a+n);
        // return;
        int l=0,r=n-1;
        for(int i=0;i<n && i<=r;){
            if(a[i]==0){
                swap(a[i],a[l]);
                i++;l++;
            }
            else if(a[i]==2){
                swap(a[i],a[r]);
                r--;
            }
            else{
                i++;
            }
        }
        return;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends