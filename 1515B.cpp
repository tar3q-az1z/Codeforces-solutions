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
int integral_sqrt(int x){
	int l = 0, r = sqrtl(x) + 100, mid;
	int ans;
	while(l <= r){
		mid = r - (r - l) / 2;
		lli sq = mid * mid;
		if(sq == x) return mid;
		if(sq > x) r = mid - 1;
		else{
			l = mid + 1;
			ans = mid;
		}
	}
	return ans;
}

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
		int n;
		cin >> n;
		if(n % 2 == 0 && (integral_sqrt(n / 2) * integral_sqrt(n / 2)) == n / 2) cout << "YES\n";
		else if(n % 4 == 0 && (integral_sqrt(n / 4) * integral_sqrt(n / 4)) == n / 4) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]

*/