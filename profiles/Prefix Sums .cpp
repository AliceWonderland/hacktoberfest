#include <bits/stdc++.h>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; x++)
#define rloop(x, n) for (int x = n; x >= 0; x--)
#define printarr(array, length)      \
    for (int i = 0; i < length; i++) \
        cout << array[i] << " ";

#define fillarr(array, length)       \
    for (int i = 0; i < length; i++) \
        cin >> array[i];

#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
        ll int n;
        cin>>n;
        if(n%4 == 0)
        {
            int i = 1;
            int j = n;
            vector<int> v1;
            vector<int> v2;
            
            while(v1.size()!=n/2)
            {
                v1.push_back(i);
                v1.push_back(j);
                i++;
                j--;
            }
            
            while(v2.size()!=n/2)
            {
                v2.push_back(i);
                v2.push_back(j);
                i++;
                j--;
            }
            
                sort(v1.begin(), v1.end());
                sort(v2.begin(), v2.end());
                cout<<"YES"<<"\n";
                for (auto i : v1) {
                    cout<<i<<" ";
                }
                cout<<"\n";
                for (auto i : v2) {
                    cout<<i<<" ";
                }
 
        }
        else
            cout<<"NO"<<"\n";
        
	}
	
	return 0;
}
