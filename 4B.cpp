// Author : Mars_Coder

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define sz(x) (x).size()
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int d = 0, s;
	cin >> d >> s;
	int mn[d], mx[d];
	for(int i = 0; i < d; ++i) cin >> mn[i] >> mx[i];
	int ans[d] = {};
	for(int i = 0; i < d; ++i){
		if(mn[i] > s){
			cout << "NO\n"; return 0;
		}
		s -= mn[i];
		ans[i] += mn[i];
	}
	if(s != 0){
		for(int i = 0; i < d; ++i){
			int x = mx[i] - mn[i];
			if(x > s){
				ans[i] += s;
				s = 0;
				break;
			}
			s -= x;
			ans[i] += x;
		}
	}
	if(s != 0){cout << "NO\n"; return 0;}
	cout << "YES\n";
	for(int i = 0; i < d; ++i) cout << ans[i] << ' ';
	cout << ln;
	return 0;
}