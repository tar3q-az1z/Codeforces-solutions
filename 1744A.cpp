// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define vi          vector<int>
#define vii         vector<lli>
#define vss         vector<string>
#define sz(x)       ((x).size())
#define pb          push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

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
		vi a(n);
		for(auto &i: a) cin >> i;
		string s;
		cin >> s;
		string ans = s;
		for(int i = 0; i < n; ++i){
			int d = a[i];
			for(int j = 0; j < n; ++j){
				if(a[j] == d) ans[j] = s[i];
			}
		}
		if(ans == s) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/