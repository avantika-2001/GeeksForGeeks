//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void helper(int o,int c, string s,vector<string>& res,int n){
        if(o==n && c==n){
            res.push_back(s);
            return;
        }
        if(o>c){
            helper(o,c+1,s+")",res,n);
        }
        if(o<n){
            helper(o+1,c,s+"(",res,n);
        }
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int o=0,c=0;
        string s="";
        vector<string>res;
        helper(0,0,s,res,n);
        return res;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends