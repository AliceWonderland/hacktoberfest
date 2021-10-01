/*
Author: Karan Kunwar (@south_pole)
Institution: IIIT-A.
*/
#include<bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define endl ("\n")
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define ms memset
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,l,r)  for(i=l ; i<=r ; i++)
#define rrep(i,l,r) for(i=r ; i>=l ; i--)
#define trav(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define all(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
#define prdb(x) cout << fixed << setprecision(10) << x
#define sz(x) (int)(x).size()
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
clock_t time_p=clock();
void timer(){time_p=clock()-time_p;cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"sec\n";}
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int>	vi;
typedef vector<ll>	vl;
typedef vector<pii>	vpii;
typedef vector<pl>	vpl;
typedef vector<vi>	vvi;
typedef vector<vl>	vvl;

const ll INF = 1e18+1;
ll expo (ll x, ll y) {ll res = 1; while (y) {if (y & 1)res = res * x; res %= MOD; y = y >> 1; x = x * x; x %= MOD;} return res;}
ll smod(ll a,ll md=MOD) {a=a%md; if(a<0)a+=md; return a;}
ll nCk(ll n, ll k) { ll res = 1; if (k > n - k)k = n - k; for (ll i = 0; i < k; ++i) { res *= (n - i); res /= (i + 1); }return res;} 


void south_pole(){
      cout << "Hello World\n";
}

int main() 
{
      // #ifndef ONLINE_JUDGE
      //   freopen("input.txt", "r", stdin); 
      //   freopen("output.txt", "w", stdout);
      // #endif
      ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
      int t = 1;
      // cin >> t;
      while(t--) {
            south_pole();
      }
      timer();
      return 0;
}