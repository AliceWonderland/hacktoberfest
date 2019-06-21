#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pi pair<ll,ll>
#define pii vector<pair<ll,ll> >
#define v vector
#define vi vector<ll>
#define f(a,i,n) for(int i=a;i<n;i++)
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MAX 1000001
#define all(x) x.begin(),x.end()
const ll inf=(ll) 1e18;
 
ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
ll spf[MAX+1];
  void sieve()//complexity = approx 3*10^6
    {
        f(1,i,MAX) {spf[i]=i;} 
        for(ll i=2;i<MAX;i+=2){spf[i]=2;}
        for(ll i=3;i<MAX;i+=2)
        {
            if(spf[i]==i) //if i is prime mark its multiples with spf as i
            {
                for(ll j=i*i;j<MAX;j+=i)
                {
                    spf[j]=min(i,(ll)spf[j]);
                }
            }
        }
    }
int main()
{
	cout<<"Hello World I am learning git and github\n";	
} 