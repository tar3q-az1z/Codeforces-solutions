// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vch             vector<char>
#define double          long double
#define vss             vector<string>
#define vpp(T1, T2)     vector<pair<T1, T2>>
#define pq              priority_queue // high prec.
#define pqq(T)          priority_queue<T, vector<T>, greater<T>> 			
#define pb              push_back
#define ppb 	        pop_back
#define mp              make_pair
#define Fi(p)           get<0>(p)
#define Sc(p)           get<1>(p)
#define sz(x)           int ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
#define _print(x)       cout << #x << ": " << x << ln;
const double PI = acos(-1.0L);
const int MOD = (1e9) + 7;

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
		int n, x, y;
		cin >> n >> x >> y;
		for(int i = 1; i <= y - x; ++i){
			int cnt = 0, tm2 = y;
			bool flag = 0;
			vi a;
			while(1){
				++cnt;
				a.pb(tm2);
				if(tm2 == x) flag = 1;
				tm2 -= i;
				if(tm2 <= 0) break;
				if(cnt >= n) break;
			}
			if(flag){
				if(cnt != n){
					sort(all(a));
					while(cnt != n){
						//_print(a.back());
						a.pb(a.back() + i);
						++cnt;
					}
				}
				for(auto j: a) cout << j << ' ';
				cout << ln;
				break;
			}
		}
	}	
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]
!----> [No sync with puts fn]

*/
