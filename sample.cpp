// adding of two number without using the carry

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // taking the input number of test cases
  int testcase;
  cin>>testcase;  
  
  while(testcase--)
  { 

  	// takig numbers as input;
  	long long  a,b;
  	cin>>a>>b; 
  	
  	long long sum=0;
  	long long mult=1;
  	long long res=0;
	// it will repeat the loop until it will be zero 
  	while(a or b)
  	{  
  	//adding numbers to find a bit 
  	sum=(a%10) + (b%10);
  	 
  	// removing a carry from a number
	sum=sum%10;
	
	// adding to the final result
	res=res+(sum*mult);
	
	//increasing the position of bit
	mult=mult*10;   
  	
  	// divide the number 
  	a=a/10;
  	b=b/10;
  		
	} 
	//output the result
	cout<<res;
	cout<<endl;
  	
  } 
  return 0;
}
