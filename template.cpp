#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pil pair<int,long long>
#define pli pair<long long,int>
#define all(a) a.begin(),a.end()
#define tm template<class dt>
using namespace std;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using ull = unsigned long long;
const int MOD = 1e9 + 7;
const db eps = 1e-9;
const db pi = acos(-1.0);
const int iinf = INT_MAX;
const ll inf = LLONG_MAX;
const long double f_inf = FLT_MAX;
#define debug(x) cout << #x << " " << x << "\n";
#define tC(t) for(int ti=1;ti<=t;ti++)
tm dt max_t(const dt &a,const dt &b){return (a>b)?a:b;}
tm dt min_t(const dt &a,const dt &b){return (a>b)?b:a;}
tm void swapx(dt &a,dt &b){a ^= b;b ^= a;a ^= b;}
tm void swap(dt &a,dt &b){dt t = a;a = b;b = t;}
int mod_a(int a,int b){return ((a + b) % MOD);}
int mod_m(int a,int b){return ((a * 1ll * b) % MOD);}
int mod_s(int a,int b){return (((a - b) % MOD) + MOD) % MOD;}
int pow_m(int a,int b){int r=1;while(b){if(b&1){r=mod_m(a,r);}a=mod_m(a,a);b>>=1;}return r;}
ll binpow(ll a,ll b){ll r=1;while(b){if(b&1){r=r*a;}a=a*a;b>>=1;}return r;}
ll gcd(ll a,ll b){while(b){a%=b;swapx<ll>(a,b);}return a;}
ll lcm(ll a,ll b){return (a * 1ll * b) / gcd(a,b);}
int mod_i(int a){return pow_m(a,MOD-2);}
int mod_d(int a,int b){return mod_m(a,mod_i(b));}
auto Case = [](int ti)->string{
	string r = "";
	while(ti){r = (char)((ti % 10) + 48) + r;ti /= 10;}
	return "Case #" + r + ": ";
};
const int mxn = 2e5 + 10;
int fact[mxn], ifact[mxn];

void init(){
	fact[0] = 1;
	for(int i=1;i<mxn;i++){
		fact[i] = mod_m(i, fact[i-1]);
	}
	ifact[mxn-1] = mod_i(fact[mxn-1]);
	for(int i=mxn-1;i>0;i--){
		ifact[i-1] = mod_m(ifact[i], i);
	}
}

int NCR(int n,int r){
	if(r>n || n<0 || r<0)return 0;
	return mod_m(fact[n], mod_m(ifact[r], ifact[n-r]));
}

void Solve(){
  
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cout.precision(30);
	cout.setf(ios::fixed);
	auto ti_start = std::chrono::high_resolution_clock::now();

	int t;
	cin >> t;
	init();
	while(t--){
		Solve();
	}

	auto ti_end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = ti_end - ti_start;
	#ifndef ONLINE_JUDGE
	printf("[%0.3fms]",duration.count() * 1000.0f);
	#endif
	return 0;
}
