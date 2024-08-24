#include<iostream>
using namespace std;
main()
{
	int i=10,j=12;
	
	for(int i=0;i<12;i++)
	{
		for(int k=i;k<12;k++)
		{
				cout<<" ";
		}
		for(int j=0;j<10;j++)
		{
			if(i==11|| (j>0 && j<2))
			{
				cout<<" * ";
			}
			else
			{
				cout<<" ";
			}
		}
		for(int j=10;j>0;j--)
		{
			if(j>7 && j<9)
			{
				cout<<" * ";
			}
			else
			{
				cout<<"  ";
			}
		}
		for(int k=j;k>0;k--)
		{
				cout<<" ";
		}
		cout<<endl;
	}
}
