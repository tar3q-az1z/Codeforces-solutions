// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vss             vector<string>
#define pb              push_back
#define ppb 	        pop_back
#define sz(x)           ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
const long double PI = acos(-1.0L);

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
		lli n;
		cin >> n;
		lli peri (0);
		vii h;
		for(int i = 0; i < n; ++i){
			lli ai, bi;
			cin >> ai >> bi;
			if(ai > bi) swap(ai, bi);
			peri += ai;
			h.pb(bi);
		}
		peri *= 2;
		sort(all(h));
		peri += h[0] + h[n - 1];
		for(int i = 1; i < n; ++i){
			peri += h[i] - h[i - 1];
		}
		cout << peri << ln;
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/