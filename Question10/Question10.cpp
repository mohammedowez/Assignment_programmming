#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
	
		// input the test case
	int t;
	cin>>t;
	while(t--)
	{
		
		// input the number 
	    int n;
	    float g=0;
	    cin>>n;
	    
	    // if number is less then 1500
	    if (n<1500){
	    
	       // calculate this step 
	        g=n+ 0.1*n+ 0.9*n;
	        
	        }
	    
		// if the number is greater than 1500 calculate this steps    
	         else if (n>1500) {
	            
	            g=n+500+0.98*n;
	         
	        }
	    // in the final answer we have to print the 2 decimal digits so we use setprecision    
	        cout<<fixed<<setprecision(2)<<g<<endl;
	}
	return 0;
}
