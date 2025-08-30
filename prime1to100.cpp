#include<iostream>
using namespace std;
int main() {
	int n=2;
	while(n<=100) 
	{
		int flag=0;
		for(int i=2; i<=n-1; i++) 
		{
			if(n%i==0) 
			{
				flag=1;
			}
		}	
		if(flag==0)
		{
			cout<<n <<" ";
		}
		n++;
	}
	return 0;
}
