#include<bits/stdc++.h>
using namespace std;

int main()
{
	// input the test case
    int t;
    cin>>t;

    while(t--)
    {
    	
    // enter the number
		long n;
		cin>>n;
		
	// enter the array	
		long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
	
	// srting an array in the ascending order
		
		sort(a,a+n);
		
	//	compare it with first element and with n-1
		cout<<(a[0]*(n-1))<<"\n";

    }
}
