#include <iostream>
#include<vector>
using namespace std;

int solve(vector<long> &a,long n)
{
	// checking the condition if s[i]=="cookie" and s[i+1]=="cookie" if both are equal then return 0;
	long m=1;
	for(long i=0;i<n;i++)
	{
		m=m*a[i];
		// if one is cookie and another one is different then run the loop and come out of the loop, return true;
	} 
	
	// return true
	for(long i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			return 1;
		}
	}
	return 0;
}

int main() 
{
 
 
  // input the test case
	int t;
	cin>>t;
	while(t--)
	{
		// input the number 
	    long n;
	    cin>>n;
	    
	    // input the array of string 
	    vector<long> v(n);
	    for(long i=0;i<n;i++)
	    {
	    	cin>>v[i];
		} 
		
		// function call to solve the program
		if(solve(v,n))
		{
			cout<<"yes";
		} 
		else 
			cout<<"no";
			
	    cout<<endl;
	    
	    
	}
	return 0;
}
