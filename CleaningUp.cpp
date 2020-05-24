/*
Problem Code: CLEANUP
Time complexity :  O(n)
Space complexity : O(n)
The below code can be optimized to constant space complexity.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int n,m;
	        cin>>n>>m;
	        int a[m];
	        int hash[n+1]={0};
	        vector<int> v;
	        for(int i=0;i<m;i++)
	        {
	            cin>>a[i];
	            hash[a[i]]++;
	        }
	        for(int i=1;i<=n;i++)
	        {
	            if(hash[i]==0)
	              v.push_back(i);
	        }
	        
	        for(int i=0;i<v.size();i+=2)
	        {
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	        for(int i=1;i<v.size();i+=2)
	         {
	            cout<<v[i]<<" "; 
	         }
	         cout<<endl;
	   
	        
	}
	return 0;
}
