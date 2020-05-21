*/
Time complexity  : O(n)
Space complexity : O(1)
This question requires to count the number of trailing zeroes in a factorial, the idea is to count the number of 5's in the factorial
process calculation.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long  int n;
	    cin>>n;
	    long long  count=0;
	    for(int i=5;i<=n;i*=5) //we are calculating count as  count =  floor(n/5)+floor(n/25) +floor(n/125)+.... upto n/i>0
	    {
	         if(n/i>0)
	          count+=n/i;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
