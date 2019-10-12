#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,q;
		cin >> n>> m >>q;
		int arr[n][m]={0};
		while(q--){
			int x,y,count=0;
			cin >> x>> y;
			for(int i=0;i<n;i++){
				arr[x][i]=arr[x][i]+1;
				
				if(arr[x][i]%2!=0){
					count++;
				}
				else{
					count--;
				}
//				cout << count <<endl;
			}
			
			for(int i=0;i<n;i++){
				arr[i][y]=arr[i][y]+1;
				
					if(arr[y][i]%2!=0){
					count++;
				}
				else{
					count--;
				}
			}
			
//			for(int i=0;i<m;i++){
//				for(int j=0;j<n;j++){
//					cout << arr[i][j] << " ";	
//				}
    			cout << count <<endl;
			}
		}
		
	}
