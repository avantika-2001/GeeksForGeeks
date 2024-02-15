//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

    public:
    
    int combine(int n, string s[]){
        //code
        int i = 0,x = 0,y=0,z1=0,z2=0;
        while(i<n){
            if(s[i][0]!=s[i].back()){
                if(s[i][0]=='R')z1+=1;
                else z2+=1;
            }
            else if(s[i][0]=='R')x+=1;
            else y+=1;
            i+=1;
        }
        if(z1+z2==0){
            if(max(x,y)==1)return 0;
            return max(x,y)*(s[0].length());
        }
        if(z1==0||z2==0){
            if(x==0&&y==0)return 0;
            return (x+y+1)*(s[0].length());
        }
        int ans = x+y+2*min(z1,z2);
        if(z1!=z2)ans+=1;
        return ans*(s[0].length());
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        Solution ob;
        cout<<ob.combine(n,s)<<endl;
    }
    return 0;
}

// } Driver Code Ends