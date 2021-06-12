#include<iostream>
using namespace std;
int solve()
{ 
// taking the input 
	long long  C,D,L;
	cin>>C>>D>>L;
	
	
        long long   tmp = 0;
       
	    //checking the mainimum cats and dogs 
        long long  mi = 4*(D + max(tmp, C-(2*D)));
        
        // taking all the cats and dogs 
        long long  ma = 4*(C+D);
        
        //  check the legs are divided by 4 
        // and then checking all the legs with minimum and maximum 
        // if all of them are true then output yes else no
        if(L%4==0 && L<=ma && L>=mi)
            cout<<"yes\n";
        else
            cout<<"no\n";
}


int main()
{
	 // input the test case
    long long  T;
    cin>>T;
    
    while(T--)
	 { 
	 
	 solve();
        
    }
    return 0;
}
