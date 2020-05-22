/*
Problem Code: JOHNY 
Time complexity : O(n*Logn)
Space complexity :O(1)
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
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     int f;
	     cin>>f;
	     int match=a[f-1];
	     sort(a,a+n);            //sorting took order of nlogn time
	     int k=0;
	     for(k=0;k<n;k++)
	     {
	         if(a[k]==match)
	          {
	              cout<<k+1<<endl;
	              break;
	          }
	     }
	}
	return 0;
}
