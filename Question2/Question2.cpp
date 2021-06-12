// ordering teams

#include<bits/stdc++.h>
using namespace std;
bool eval(int a[],int b[])
{ 

// taking 2 arrays a and b
// and subtracting the values to get the min value so that we can find the value

     int x[3];
     for(int i=0;i<3;i++)
        x[i]=a[i]-b[i];

// checking all the test cases as given if any one it will false it will written false 
// else it will written true;        
        
     if((x[0]>0 && x[1]>=0 && x[2]>=0) || (x[0]>=0 && x[1]>0 && x[2]>=0) || 
		 (x[0]>=0 && x[1]>=0 && x[2]>0)|| (x[0]<0 && x[1]<=0 && x[2]<=0) || 
	 		(x[0]<=0 && x[1]<0 && x[2]<=0) || (x[0]<=0 && x[1]<=0 && x[2]<0))
       	return true;
    return false;


}

int main()
{
 // taking the test cases 
   int t;
   cin>>t;
   while(t--)
   { 
   
   // taking the input of 3 array i,e 3x3
       int a[3],b[3],c[3];
       	for(int i=0;i<3;i++)
        	cin>>a[i];
       	for(int i=0;i<3;i++)
        	cin>>b[i];
    	for(int i=0;i<3;i++)
        	cin>>c[i];
        	
    // checking a,b and b,c and c,a if any one the condition is fasle it will return false     	
        if( eval(a,b) && eval(b,c) && eval(a,c))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

   }

}
