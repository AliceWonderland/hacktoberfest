#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mode 1e9+7
#define mp make_pair
// #define for(i, n) for(ll i=0; i<n ;i++)
// #define forR(i ,n) for(ll )
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
        cin>>n;
        int ans = 0;
        int a[n][n];

        for(int i =0; i<n; i++){
            for(int j=0; j<n ;j++)
        {
            cin>>a[i][j];
        }
        }

        for(int i = n-1; i>=0; i--){
            if(a[0][i] != i+1){
                for(int j =0; j<=i; j++){
                    for(int k =j; k<=i; k++){
                        int temp = a[k][j];
                        a[k][j] = a[j][k];
                        a[j][k] = temp;

                    }
                }
                ans++;
            }
        }
        cout<<ans<<"\n";
	}
	return 0;
}