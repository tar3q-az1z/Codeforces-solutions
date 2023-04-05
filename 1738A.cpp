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
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n), b1, b0;
		int ones = 0, zeros = 0, ai;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i]) ++ones;
			else ++zeros;
		}
		for(int i = 0; i < n; ++i){
			cin >> ai;
			if(a[i]) b1.push_back(ai);
			else b0.push_back(ai);
		}
		lli ans = 0;
		if(ones == zeros){
			for(int i = 0; i < sz(b0); ++i) b1.push_back(b0[i]);
			sort(b1.begin(), b1.end(), greater<int>());
			for(int i = 0; i < sz(b1) - 1; ++i) ans +=(lli) 2 * b1[i];
			ans += (lli) b1[sz(b1) - 1];
			cout << ans << ln;
		}else if(ones > zeros){
			sort(b1.begin(), b1.end(), greater<int>());
			sort(b0.begin(), b0.end(), greater<int>());
			int k = zeros;
			for(int i = 0; i < k; ++i){
				ans += (lli) 2 * b1[i] + (lli) 2 * b0[i];
			}
			for(int i = k; i < sz(b1); ++i) ans += (lli) b1[i];
			for(int i = k; i < sz(b0); ++i) ans += (lli) b0[i];	
			cout << ans << ln;
		}else{
			sort(b1.begin(), b1.end(), greater<int>());
			sort(b0.begin(), b0.end(), greater<int>());
			int k = ones;
			for(int i = 0; i < k; ++i){
				ans += (lli) 2 * b1[i] + (lli) 2 * b0[i];
			}
			for(int i = k; i < sz(b1); ++i) ans += (lli) b1[i];
			for(int i = k; i < sz(b0); ++i) ans += (lli) b0[i];	
			cout << ans << ln;
		}
	}	
	return 0;
}