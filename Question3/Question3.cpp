// temple land

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{		 
		// in this we are comparing the first and last element from 1... n to n...1  
		int j=n-1;
				for(int i=0;i<(n/2)+1;i++)
				{ 
				
				// if 1 ==1 continue 
					if(a[i]==i+1 && a[j]==i+1)
					{
						j--;
					}  
					// else return 0
					else 
					{
						return 0;
					} 
	
				} 
				
	//	if all the elements satisfy the condition return true		
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
		
		// input the array elements
			int a[n];
			for(int i=0;i<n;i++)
				cin>>a[i];
				
			// check if size is even return no 	
			if(n%2==0)
			{
			cout<<"no";
			} 
			
			// check if 0th element and last element is 1 or not 
			else if(a[0]!=1 or a[n-1]!=1)
			{
				cout<<"no";	
			}
			
			
			else if(solve(a,n))
				cout<<"yes";
			else 
				cout<<"no";
			
				
		
		cout<<endl;
	} 
	return 0;
}
