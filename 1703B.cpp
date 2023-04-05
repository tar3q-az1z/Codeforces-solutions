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
	
	int n, t;
	cin >> t;
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		set<char> unq;
		for(int i = 0; i < n; ++i) unq.insert(s[i]);
		int ans = 2 * n;
		ans -= (n - unq.size());
		cout << ans << ln;
	}	
	return 0;
}