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
	
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t;
	cin >> t; 
	while(t--){
		int m, s;
		cin >> m >> s; 
		vi a(m);
		int s1 = 0;
		for(int i = 0; i < m; ++i){
			cin >> a[i];
			s1 += a[i];
		}
		int mx = *max_element(all(a));
		int es = mx * (mx + 1) / 2;
		int dif = es - s1;
		if(s < dif){
			cout << "NO\n";
		}else if(s == dif) cout << "YES\n";
		else{
			int extra = s - dif;
			while(extra > 0){
				extra -= ++mx;
			}
			if(extra == 0) cout << "YES\n";
			else cout << "NO\n";
		}
	}	
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/