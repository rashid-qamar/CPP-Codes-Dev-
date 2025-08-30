#include<iostream>
using namespace std;
int main() {
	int  n, i, j, k;
	cout<<"Enter Array size: ";
	cin>>n ;
	int a[n];
	cout<<"Enter elements: "<<endl;
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	for(i=1; i!=0; i++) {
		int choice;
		cout<<"\nOption :"<<endl;
		cout<<"1. Sorting in Ascending Order"<<endl<<"2. Sorting in Decending Order"<<endl<<"3. Insertion of element"<<endl;
		cout<<"4. Deletion of element"<<endl<<"5. Searching of element"<<endl;
		cout<<"6. Display of Updated element"<<endl<<"7. Exit"<<endl;
		cout<<"/nSelect your choice : ";
		
		cin>>choice;
		
		switch(choice)
		{
			case 1 :{
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++){
						if(a[j]<=a[k]){
							swap(a[j],a[k]);
						}
					}
				}
				break;
			}
			
			case 2 :{
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++){
                		if(a[j]>=a[k]) {
							swap(a[j],a[k]);
						}
					}
				}
				break;
			}
			case 3 :{						
				n++;
				int element,position;
				cout<<"Enter element to insert: ";
				cin>>element;
				cout<<"Enter position to insert: ";
				cin>>position;
				for(int j=n-2;j>=position;j--){
					a[n-1]=a[j];
				}
				a[position-1]=element;
				break;
			}
				
			case 4 :{
				int element,count=0;
				cout<<"Enter element to delete:";
				cin>>element;
				for(int j=0;j<n;j++) {
					if(a[j]==element){
						continue;
					}
					else a[count++]=a[j];
				}
				n--;
				break;
			}
			case 5 :{
				int element,position,flag=0;
				cout<<"Enter element to sarch:";
				cin>>element;
				for(int j=0;j<n;j++) {
					if(element==a[j]){
						position=j+1;
						flag=1;
						break;
					}
				}
				if(flag==1)
					cout<<"Element found at "<<position<<" position";
				else 
					cout<<"Element not found in this array";
					break;
			}
				
			case 6 :{
				for(int j=0;j<n;j++){
					cout<<" "<<a[j];
				}
				break;
			}
			
			case 7 :{
				cout<<"Exiting..";
				break;
			}					
		}
		if(choice==7) { 
			break;
		}
	}
	return 0;
}
