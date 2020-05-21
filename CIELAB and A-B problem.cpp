/*
Problem link :  https://www.codechef.com/problems/CIELAB
Time complexity   :  O(1)
Space complexity  :  O(1)
Simple problem reading solution is enough!
*/

#include <iostream>
using namespace std;

int main() {
	 int a,b;
	 cin>>a>>b;
	 int c=a-b;
	 int lastdigit=c%10;
	 if(lastdigit==0)
	  c++;
	 else
	 {
	  if(c>=1 and c<9)
	    c++;
	   else 
	    c--;
	 }
	  cout<<c<<endl;
	return 0;
}
