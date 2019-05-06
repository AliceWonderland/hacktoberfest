#include<bits/stdc++.h>

using namespace std;

int main( ){
	int i,k,j,n,a[100005],min;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		min=a[i];
		k=i;
		for(j=n-1;j>i;j--){
			if(a[j]<min){
				min=a[j];
				k=j;
			}
		}
		swap(a[i],a[k]);
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}

			

