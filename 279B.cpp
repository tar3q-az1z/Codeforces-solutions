// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t, n;
	cin >> n >> t;
	vector<int> a(n);
	for(int i = 0; i < n; ++i)	cin >> a[i];
	int ans = 0, mx = 0, start = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] <= t){
			++ans;
			t -= a[i];
		}else{
			mx = max(mx, ans);
			if(ans) t += a[start];
			start += 1;
			if(i && (ans != 0)) --i;
			if(ans) --ans;
		}
	}
	mx = max(mx, ans);
	cout << mx << ln;
	return 0;
}
/*
1. ans = 1, t = 7
2. mx = 1, t = 13, start = 1, i = 1, ans = 0
3. 
4. ans = 2, t = 2, i = 3
5. ans = 3, t = 1, i = 4

*/