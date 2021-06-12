// Checking the given string is fibonnaci series are Not

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // taking the input number of test cases
  int testcase;
  cin>>testcase;  
  
  while(testcase--)
  { 
	
	// taking the string as input
  	string s;
  	cin>>s;
  	
  	// fibonnaci series exits if the size is greater then 2 
  	if(s.size()>2)
  	{
  		
  		
  	// taking Hashmap to count the frequency of each element
  	map<char,int> mp;
  	for(int i=0;i<s.size();i++)
  	{
  		mp[s[i]]++;
	}
	
	// storing the frequency of each element
	vector<int> v;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		v.push_back(i->second);	
	} 
	
	
	//sorting the elements in asscending order
	sort(v.begin(),v.end());
	
	int m=0;
	int c=0;
	for(int i=2;i<v.size();i++)
	{ 
	
	// checking from the 2 position if its equal zero and first(fibonnaci series )
	// f[2]=f[0]+f[1]
	
		m=v[i-1]+v[i-2];
		// if the 0 and 1 is equal to 2 then continue;
		// f[2]=f[0]+f[1]
		if(m==v[i])
		{ 
		
			continue;
		}  
		
		// if any of the number is the fibonnaci it will written Not
		else
		{
			c=1;
			cout<<"Not";
			break;
		}
	 }  
	 
	 // it the fibonnaci series exists in the string it will written as Dynamic
	 if(c==0)
	 	cout<<"Dynamic"; 
	 } 
	else 
	{
	 	cout<<"Not";
	}
	
	cout<<endl;
  	
  } 
  return 0;
}
