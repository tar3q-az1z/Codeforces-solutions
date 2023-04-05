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
		string s;
		cin >> s; 
		lli ones = 0, zeros = 0;
		for(lli i = 0; i < n; ++i){
			if(s[i] == '0') ++zeros;
			else ++ones;
		}
		lli p1 = 0, p2 = 0;
		for(lli i = 0; i < n;){
			if(s[i] == '1'){
				lli cnt = 0;
				while(s[i] == '1'){
					++cnt;
					++i;
					if(i >= n) break;
				}
				p1 = max(p1, cnt);
			}else{
				lli cnt = 0;
				while(s[i] == '0'){
					++cnt;
					++i;
					if(i >= n) break;
				}
				p2 = max(p2, cnt);
			}
		}
		cout << max({ones * zeros, p1 * p1, p2 * p2}) << ln;
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]
----> [llabs() for long long int type]

*/