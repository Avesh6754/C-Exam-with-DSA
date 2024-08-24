#include<iostream>
using namespace std;

main()
{
	int value;
	cout<<"Enter the value : "<<endl;
	cin>>value;
	int total;
	for(int i=0;i<value;i++)
	{
		if(i%1==0 && (i%2==0 || i%3==0 || i%5==0 || i%7==0 ||i%11==0) )
		{
			total=total+i;
		}
	}
	cout<<total;
}
