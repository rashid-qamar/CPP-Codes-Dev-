#include<iostream>
using namespace std;
main()
{
	int n=6;
	int a[n], i, p, e;
	cout<<"Enter the "<<n<<" Elemnts of an Array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nSpecify the Position";
	cin>>p;
	p = p-1;
	cout<<"\nEnter the Value\n";
	cin>>e;
	for(i=n-1; i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=e;
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

