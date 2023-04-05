// Author : Mars_Coder
// Date   : 19/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n, m;
	cin >> n >> m;
	vector<int> f(m);
	for(int i = 0; i < m; ++i) cin >> f[i];
	sort(f.begin(), f.end());
	int mn = INT_MAX;
	for(int i = 0; i <= m - n; ++i){
		if((f[i + n  - 1] - f[i]) < mn) mn = f[i + n - 1] - f[i];
	}
	cout << mn << ln;
	return 0;
}