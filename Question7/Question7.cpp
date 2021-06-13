#include<bits/stdc++.h>
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
        cin>>n;
        
        // input the array elements
        int arr[n];
        for(int i=0;i<n;i++)
         cin>>arr[i];
		
		//sorting the array elements in ascending order 
        sort(arr,arr+n);

        int count=0,area=1;

        for(int i=n-1;i>=0;i--)
        { 
        
        // comparing the last element with the previous last element to check if its same or not
            if(arr[i+1]==arr[i])
            { 
            
            // we are mutiplying the array element with the area to get the maximum size of rectangle
                area*=arr[i];
                count++;
                i--;
            }
		// just we have check for 4 elements so we will use count vaiable to increment till 2 if its 2 then we will 
		// break it 
            if(count==2)
             break;
        }
	
	// it count is 2 then we are going to return the area of the function 
        if(count==2)
         cout<<area<<endl;
        else
      // print -1 if the count is not 2  
         cout<<"-1"<<endl;

    }
}
