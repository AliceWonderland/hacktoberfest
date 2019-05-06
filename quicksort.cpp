#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int l,int r){
	int pi=a[r];
	int i,j;
	i=l-1;
	for(j=l;j<r;j++){
		if(a[j]<pi){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return (i+1);
}

void quicksort(int a[],int l,int r){
	if(l<r){
		int pi=partition(a,l,r);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,r);
	}
}

int main( ){
	int i,j,k,c=0,n,a[100005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
