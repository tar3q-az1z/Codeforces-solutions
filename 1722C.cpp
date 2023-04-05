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
		int n;
		string s;
		cin >> n;
		vector<map<string, int>> p(3);
		int p1 (0), p2(0), p3(0);
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < n; ++j){
				cin >> s;
				++p[i][s];
			}
		}
		for(auto i : p[0]){
			string ql = i.first;
			if(p[1].count(ql) == 0 && p[2].count(ql) == 0) p1 += 3;
			else if(p[1].count(ql) == 1 && p[2].count(ql) == 1){
				// do nothing
			}else if(p[1].count(ql) == 1) p1 += 1;
			else p1 += 1;
		}
		for(auto i : p[1]){
			string ql = i.first;
			if(p[0].count(ql) == 0 && p[2].count(ql) == 0) p2 += 3;
			else if(p[0].count(ql) == 1 && p[2].count(ql) == 1){
				// do nothing
			}else if(p[0].count(ql) == 1) p2 += 1;
			else p2 += 1;
		}
		for(auto i: p[2]){
			string ql = i.first;
			if(p[0].count(ql) == 0 && p[1].count(ql) == 0) p3 += 3;
			else if(p[0].count(ql) == 1 && p[1].count(ql) == 1){
				// do nothing
			}else if(p[0].count(ql) == 1) p3 += 1;
			else p3 += 1;	
		}
		cout << p1 << ' ' << p2 << ' ' << p3 << ln;
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/