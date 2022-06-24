#include<iostream>
using namespace std;

void elim_duplicate(int m[], int n){
for (int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if (m[i]==m[j]){
			for(int k=j;k<n;k++){
				m[k]=m[k+1];
			}
			j--;
			n--;
		}
	}
}
for(int i=0;i<n;i++){
	cout << m[i] << endl;
}	
}
main()
{
	int n,ar[100];
	cout<<"no. of elements to be enter:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<< "enter the "<< i+1 << "\tnumber";
		cin>>ar[i];
	}
	elim_duplicate(ar,n);
}
