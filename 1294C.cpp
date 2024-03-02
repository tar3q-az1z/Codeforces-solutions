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
#define _print(x)       cout << (#x) << ": " << (x) << ln
#define uceil(a, b)     ((a + b - 1) / (b))
const double PI = acos(-1.0L);
const int MOD = (1e9) + 7;
const int INF = INT_MAX;

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
		vi a;
		while(n % 2 == 0){
			a.pb(2);
			n /= 2;
		}
		for(int d = 3; d * d <= n; d += 2){
			while(n % d == 0){
				a.pb(d);
				n /= d;
			}
		}
		if(n > 1) a.pb(n);
		if(sz(a) < 3) cout << "NO\n";
		else{
			int i = 0, a2, a3 = 1;
			int a1 = a[i];
			if(a[i] != a[i + 1]){
				++i;
				a2 = a[i];
				++i;
			}else{
				++i;
				a2 = a[i] * a[i + 1];
				i += 2;
			}
			if(i == sz(a)) cout << "NO\n";
			else{
				for(; i < sz(a); ++i) a3 *= a[i];
				if(a3 == a1 || a3 == a2) cout << "NO\n";
				else{cout << "YES\n", cout << a1 << ' ' << a2 << ' ' << a3 << ln;}
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
