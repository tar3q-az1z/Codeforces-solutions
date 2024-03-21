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
	
	vi a(6);
	int sum = 0; 
	for(auto &i: a){
		cin >> i; 
		sum += i; 
	}
	if(sum % 2 != 0) cout << "NO\n";
	else{
		bool flag = 0;
		for(int i = 0; i < 4 && !flag; ++i){
			for(int j = i + 1; j < 5 && !flag; ++j){
				for(int k = j + 1; k < 6 && !flag; ++k){
					int isum = 0;
					isum += a[i] + a[j] + a[k];
					if(isum == (sum / 2)){
						flag = 1;
					}
				}
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO" << ln;
	}
	return 0;
}

/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/