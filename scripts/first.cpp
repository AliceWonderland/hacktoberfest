#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,r;
	cin>>n>>l>>r;
	te=l-1;
	while(te--){
		v.push_back(pow(2,i));
		i++;
	}
	for(j=l;j<n;j++)
		v.push_back(1);
	for(i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;

}