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
	lli t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vl a(n);
		for(auto &i : a) cin >> i;
		lli ans[35];
		memset(ans, 0, sizeof(ans));
		for(lli i = 31; i >= 0; --i){
			for(lli j = 0; j < n; ++j){
				if((a[j] >> i) & 1){
					++ans[i];
					a[j] = 0;
				}
			}
		}
		lli res = 0;
		for(lli i = 0; i <= 31; ++i){
			if(ans[i]){
				res += (ans[i] * (ans[i] - 1)) / 2;
			}
		}
		cout << res << ln;
	}

	return 0;
}
