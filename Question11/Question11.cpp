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
		// taking the input as character 
		char ch;
		cin>>ch;
		
		// if character match with any one of the letter it will print the result 
		// charcter can be in any form upper case or lower case
		
		if(ch =='b' or ch=='B')
			cout<<"BattleShip";
		else if(ch=='c' or ch=='C')
			cout<<"Cruiser";
		else if(ch=='d' or ch=='D')
			cout<<"Destroyer";
		else if(ch=='f' or ch=='F')
			cout<<"Frigate";
			
			
		cout<<endl;
	}
	return 0;
}
