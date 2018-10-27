#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
#define endl '\n'
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define vl  vector<ll>
#define vi  vector<int> 
#define sz(a) a.length()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define prec(n) fixed<<setprecision(n)
#define ms(a, n) memset(a, n , sizeof(a))
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
bool pr[1000007];
const int N=1e6+5;
const int MOD=(int)1e9+7;
ll fpow(ll x,ll y,ll p){ll res=1;while(y){if(y&1)res=res*x;res%=p;y=y>>1;x=x*x;x%=p;}return res;}
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i<sqrt(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
ull ipow(ull base,int exp){ull res=1ULL;while(exp){if(exp&1){res*=(ull)base;}exp>>=1;base*=base;}return res;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}


int main()
{
  cout<<"Welcome to the world of CP"<<endl;
}
