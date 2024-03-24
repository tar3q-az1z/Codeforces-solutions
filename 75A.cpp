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
	
	int a, b; 
	cin >> a >> b; 
	int c = a + b;
	int mf = 1;
	int af = 0, bf = 0, cf = 0;
	while(a){
		if(a % 10){
			af += mf * (a % 10);
			mf *= 10;
		}
		a /= 10;
	}
	mf = 1;
	while(b){
		if(b % 10){
			bf += mf * (b % 10);
			mf *= 10;
		}
		b /= 10;
	}
	mf = 1;
	while(c){
		if(c % 10){
			cf += mf * (c % 10);
			mf *= 10;
		}
		c /= 10;
	}
	if(af + bf == cf) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]
----> [llabs() for long long int type]

*/