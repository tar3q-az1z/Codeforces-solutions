#define _USE_MATH_DEFINES

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define vl vector<lli>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define IT(x) x.begin(), x.end()
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;
#define precision(n) cout << fixed << setprecision(n) // n places after dec.point
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)

lli binPow(lli a, lli b){
	lli ans = 1;
	a %= MOD;
	while(b){
		if(b & 1) ans = (ans * a) % MOD;
		b >>= 1;
		a = (a * a) % MOD;
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	lli t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		lli cnt = 0;
		lli ans = 0;
		while(k){
			if(k & 1) ans = ans + binPow(n, cnt) % MOD;
			ans %= MOD;
			++cnt;
			k >>= 1;
		}
		cout << ans << ln;
	}
	return 0;
}