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
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i =  0; i < n ; ++i) cin >> a[i];
		sort(a.begin(), a.end());
		int ans = INT_MAX;
		for(int i = 0; i < n - 2; ++i){
			for(int j = i + 1; j < n - 1; ++j){
				for(int k = j + 1; k < n; ++k){
					ans = min(ans, (a[j] - a[i]) + (a[k] - a[j]));
				}
			}
		}
		cout << ans << ln;
	}
	return 0;
}