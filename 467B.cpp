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


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, m = 0, k;
	int ans = 0;
	cin >> n >> m >> k;
	int xi[m + 1] = {};
	for(int i = 0; i <= m; ++i) cin >> xi[i];
	for(int i = 0; i < m; ++i){
		int temp = xi[m];
		int mx = max(xi[i], temp), cnt = 0, sol = 0;
		while(mx){
			if((temp & 1) ^ (xi[i] & 1)){
			 if(cnt < n) ++sol;
			}
			++cnt;
			mx >>= 1;
			temp >>= 1;
			xi[i] >>= 1;
		}
		if(sol <= k) ans += 1;
	}
	cout << ans << ln;
	return 0;
}
