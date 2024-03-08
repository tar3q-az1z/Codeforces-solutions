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
	
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		int lcm = (sz(a) * sz(b)) / __gcd(sz(a), sz(b));
		string s1 = "", s2 = "";
		for(int i = 0; i < lcm / sz(a); ++i) s1 += a;
		for(int i = 0; i < lcm / sz(b); ++i) s2 += b;
		bool flag = 1;
		for(int i = 0; i < sz(s1); ++i){
			if(s1[i] != s2[i]){
				flag = 0;
				break;
			}
		}
		if(flag) cout << s1 << ln;
		else cout << -1 << ln;
	}
	return 0;
}

/*
some familiar issues:
----> [look at global variables and their values]

*/