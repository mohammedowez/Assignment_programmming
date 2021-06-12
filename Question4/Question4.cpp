#include <iostream>
#include<vector>
using namespace std;

int solve(vector<string> &s,int n)
{
	// checking the condition if s[i]=="cookie" and s[i+1]=="cookie" if both are equal then return 0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=="cookie")
		{
			if(i==n-1 or s[i+1]=="cookie")
			{
				return 0;
			}
		}
		// if one is cookie and another one is different then run the loop and come out of the loop, return true;
	} 
	
	// return true
	return 1;
}

int main() 
{
 
 
  // input the test case
	int t;
	cin>>t;
	while(t--)
	{
		// input the number 
	    int n;
	    cin>>n;
	    
	    // input the array of string 
	    vector<string> v(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
		} 
		
		// function call to solve the program
		if(solve(v,n))
		{
			cout<<"YES";
		} 
		else 
			cout<<"NO";
			
	    cout<<endl;
	    
	    
	}
	return 0;
}
