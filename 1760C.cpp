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
		int n;
		cin >> n;
		vi s(n);
		map<int, int> mp;
		for(int i = 0; i < n; ++i){
			cin >> s[i];
			++mp[s[i]];
		}
		int mx1 = *max_element(all(s));
		int mx2 = *min_element(all(s));
		for(int i = 0; i < n; ++i){
			if(s[i] < mx1 && s[i] > mx2) mx2 = s[i];
		}
		for(int i = 0; i < n; ++i){
			if(s[i] != mx1) cout << s[i] - mx1 << ' ';
			else if(mp[s[i]] <= 1) cout << s[i] - mx2 << ' ';
			else cout << s[i] - mx1 << ' ';
		}
		cout << ln;
	}
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/