#include<bits/stdc++.h>

using namespace std;

int findwater(const vector<int> &a,int n){
	int i,j,c=0;
	vector<int> l(n),r(n);
	l[0]=a[0];
	for(i=1;i<n;i++){
		l[i]=max(l[i-1],a[i]);
	}
	r[n-1]=a[n-1];
	for(i=n-2;i>=0;i--){
		r[i]=max(a[i],r[i+1]);
	}
	for(i=0;i<n;i++){
		c+=min(l[i],r[i])-a[i];
	}
	return c;
}

int main( ){
	int n,i,j;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	j=findwater(a,n);
	cout<<j<<endl;
	return 0;
}
