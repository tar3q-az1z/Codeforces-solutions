// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define sz(x)       ((x).size())
#define pb          push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

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
		vector<int> a(n), b(n);
		int a1 = 0, a0 = 0, b1 = 0, b0 = 0;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i]) ++a1;
			else ++a0;
		}
		for(int i = 0; i < n; ++i){
			cin >> b[i];
			if(b[i]) ++b1;
			else ++b0;
		}
		int ans = abs(a1 - b1);
		ans -= abs(a0 - b0) - ans;
		int cnt = 0;
		for(int i= 0; i < n; ++i){
			if(a[i] != b[i]) ++cnt;
		}
		if(cnt > ans) ++ans;
		cout << ans << ln;
	}
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/