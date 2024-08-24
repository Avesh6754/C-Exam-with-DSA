#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number of array ""["<<i<<"]"<<endl;
		cin>>a[i];
	}
	int max=a[0];
	
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"The largest number : "<<max;
}

//WAP TO FIND THE LARGEST ELEMENT FROM THE ARRAY IN  C++.
//WAP TO SORT ARRAY IN ASCENDING(LOW TO HIGH) ORDER IN C++.
//WAP TO FIND THE SUM OF PRIME NUMBERS FROM 1 TO N.
//WAP TO FIND THE SUM OF EVEN NUMBERS FROM 1 TO N USING RECURSION.
//WAP TO CREATE PATTERN AS MENTIONED BELOW IMAGE.
