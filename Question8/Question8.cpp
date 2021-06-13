#include<bits/stdc++.h>
using namespace std;

int main()
{
	// input the test case
    int t;
    cin>>t;

    while(t--)
    {
    
	//	take 3 varible as input 
    	long long a,b,c;
    	cin>>a>>b>>c;
    	
    // check if n is odd or even 
	// if its odd then multiply a by 2 and find the max and min of the both 	
    	if(c&1)
			cout<<(max(2*a,b)/min(2*a,b));
		else 
	//just take the max and min and print the result	
			cout<<(max(a,b)/min(a,b));
    	cout<<endl;

    }
}
