// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI              3.141592653589793238462643383279502884L
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
#define all(x)          ((x).begin(), (x).end())
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)

int main(void){
	
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n;
	cin >> n;
	string ans;
	while(n % 7 != 0){
		n -= 4;
		ans.pb('4');
		if(n < 4) break;
	}
	if(n % 7 == 0){
		ans.insert(ans.end(), n / 7, '7');
		n = 0;
	}
	if(n != 0) cout << "-1\n";
	else cout << ans << ln;
	return 0;
}

/*
some familiar issues:
----> [look at global variables and their values]

*/