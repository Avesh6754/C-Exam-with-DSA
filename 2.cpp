#include<iostream>
using namespace std;
//WAP TO SORT ARRAY IN ASCENDING(LOW TO HIGH) ORDER IN C++.
main()
{
		int n,temp;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number of array ""["<<i<<"]"<<endl;
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	
	for(int j=0;j<n;j++)
	{
		cout<<"Ascending number : "<<endl;
		cout<<a[j];
	}
}
