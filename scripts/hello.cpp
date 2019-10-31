#include<iostream>
using namespace std;
int main()
{
	int i=1,j=1,val,n;
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n-i)
		{
			cout<<' '<<' ';
			j++;
		}
		j=i;
		while(j<=n)
		{
			cout<<j<<' ';
			j++;
		}
		val=i;
		while(j<=i-1)
		{
			cout<<val<<' ';
			j++;
			val++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
