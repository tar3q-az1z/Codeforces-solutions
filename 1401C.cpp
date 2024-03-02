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
	
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vi a(n), b(n);
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(all(b));
		int mn = b[0];
		bool flag = 1;
		for(int i = 0; i < n; ++i){
			if(a[i] != b[i]){
				if((a[i] % mn != 0) || (b[i] % mn != 0)){
					flag = 0;
					break;
				}
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/
