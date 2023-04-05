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
		int n = 0;
		cin >> n; 
		int a[n];
		vector<pair<int, int>> pp;
		int ai;
		int cnt = 0;
		int l = 0, r = 0;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(i == 0) ai = a[i];
			else if(a[i] == ai){
				++r;
			}else{
				pp.pb(make_pair(l, r));
				l = r + 1;
				++r;
				ai = a[i];
			}
		}
		if(ai == a[n - 1]) pp.pb(make_pair(l, r));
		else pp.pb(make_pair(n - 1, n - 1));
		// for(int i = 0; i < sz(pp); ++i){
		// 	cout << pp[i].first << ' ' << pp[i].second << ln;
		// }
		for(int i = 0; i < sz(pp); ++i){
			l = pp[i].first;
			r = pp[i].second;
			if(l == 0){
				if(r == n - 1) ++cnt;
				else if(a[r] < a[r + 1]) ++cnt;
			}else if(a[l] < a[l - 1]){
				if(r == n - 1) ++cnt;
				else if(a[r] < a[r + 1]) ++cnt;
			}
		}
		if(cnt == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/