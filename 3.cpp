#include<iostream>
using namespace std;



int sum(int value)
{
	int total=0;
	for(int i=0;i<=value;i++)
	{
		if(i%2==0)
		{
			total=total+i;
		}
	}
	cout<<total;
	
}
main()
{
	int value;
	cout<<"Enter the value : "<<endl;
	cin>>value;
	
	sum(value);
}
