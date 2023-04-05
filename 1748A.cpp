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
lli integral_sqrt(lli x){
	lli l = 0, r = sqrtl(x) + 100, mid;
	lli ans;
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
		lli n;
		cin >> n; 
		if(n % 2 == 0){
			n /= 2;
			lli ans = 2 * (n * (n + 1) / 2);
			cout << integral_sqrt(ans) << ln;
		}else{
			n /= 2;
			lli ans = 2 * (n * (n + 1) / 2) + (n + 1);
			cout << integral_sqrt(ans) << ln;
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