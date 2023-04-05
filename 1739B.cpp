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
		vector<int> d(n), a(n);
		for(auto &i : d) cin >> i;
		a[0] = d[0];
		bool ans = 1;
		for(int i = 1; i < n; ++i){
			int a1, a2;
			a1 = -d[i] + a[i - 1];
			a2 = d[i] + a[i - 1];
			if((abs(a1 - a[i - 1]) == abs(a2 - a[i - 1])) && (a1 != a2) && (a1 >= 0 && a2 >= 0)){
				//cout << a1 << ' ' << a2 << ln;
				cout << -1 << ln;
				ans = 0;
				break;
			}
			if(a1 > a2) a[i] = a1;
			else a[i] = a2;
		}
		if(ans){
			for(auto i : a) cout << i << ' ';
			cout << ln;
		}
	}
	return 0;
}