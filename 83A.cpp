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
	
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i : a) cin >> i;
	lli ans = 0;
	for(int i = 0; i < n - 1; ++i){
		lli segment = 1;
		while(a[i + 1] == a[i]){
			++segment;
			++i;
			if(i + 1 == n) break;
		}
		if(segment == 1) ans += 1;
		else ans += (segment * (segment + 1)) / 2;
	}
	if(n >= 2){
		if(a[n - 1] != a[n - 2]) ans += 1;
	}else ans += 1;
	cout << ans << ln;
	return 0;
}
