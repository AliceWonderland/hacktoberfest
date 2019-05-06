#include<bits/stdc++.h>

using namespace std;

void towerofHanoi(int n,char from_rod,char to_rod,char aux_rod){
	if(n==1){
		cout<<"Move disk 1 from "<<from_rod<<" to "<<to_rod<<endl;
		return ;
	}
	towerofHanoi(n-1,from_rod,aux_rod,to_rod);
	cout<<"Move disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<endl;
	towerofHanoi(n-1,aux_rod,to_rod,from_rod);
}

int main( ){
	int n;
	cin>>n;
	towerofHanoi(n,'A','C','B');
	return 0;
}
