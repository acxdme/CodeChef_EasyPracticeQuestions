/*
QuestionCode : Horses
Time complexity : O(n logn)
Space complexity :O(n) [Space can be futher optimized by sorting the array itself]

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        v.push_back(a[i]);
	    }
	    sort(v.begin(),v.end());
	    int mn=INT_MAX;
	    for(int i=0;i<n-1;i++)
	    {
	        if(v[i+1]-v[i] < mn)
	         mn= v[i+1]-v[i] ;
	    }
	    cout<<mn<<endl;
	   
	   
	}
	return 0;
}
