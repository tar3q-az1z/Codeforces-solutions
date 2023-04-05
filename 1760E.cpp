// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vch             vector<char>
#define double          long double
#define vss             vector<string>
#define pb              push_back
#define ppb 	        pop_back
#define sz(x)           int ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
const double PI = acos(-1.0L);

int main(void){
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
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
		lli ones (0), now = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] == 0){
				now += ones;
			}else ++ones;
		}
		ones = 0;
		lli ans = now;
		now = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] == 0){
				a[i] = 1;
				for(int j = 0; j < n; ++j){
					if(a[j] == 0) now += ones;
					else ++ones;
				}
				ans = max(ans, now);
				a[i] = 1 - a[i];
				break;
			}
		}
		now = 0;
		ones = 0;
		for(int i = n - 1; i >= 0; --i){
			if(a[i] == 1){
				a[i] = 0;
				for(int j = 0; j < n; ++j){
					if(a[j] == 0) now += ones;
					else ++ones;
				}
				ans = max(ans, now);
				break;
			}
		}
		cout << ans << ln;
	}	
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/