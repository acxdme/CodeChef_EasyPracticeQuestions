/*
Time complexity   : O(n)
Space complexity : O(1)
Note : This is a very Trivial problem 
*/
#include <iostream>
using namespace std;

int main() {
	int a[100000];
	for(int i=0;i<100000;i++)
	  {
	      cin>>a[i];
	      if(a[i]!=42)
	       cout<<a[i]<<endl;
	      else
	       break;
	  }
	return 0;
}
