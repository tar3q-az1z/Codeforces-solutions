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

const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
const int MOD = (1e9) + 7;
const int INF = INT_MAX;

int main(void){
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t(1);
	cin >> t; 
	while(t--){
		lli n;
		cin >> n; 
		vii a(n);
		lli ans = 0;
		for(auto &i: a) cin >> i;
		for(lli i = 0; i < n; ++i){
			if(a[i] % 3 == 0){
				a[i] = -1;
				++ans;
			}
		}
		for(lli i = 0; i < n - 1; ++i){
			if(a[i] != -1){
				for(lli j = i + 1; j < n; ++j){
					if(a[j] != -1 && (a[i] + a[j]) % 3 == 0){
						a[i] = a[j] = -1;
						++ans;
						break;
					}
				}
			}
		}
		for(lli i = 0; i < n - 2; ++i){
			if(a[i] != -1){
				for(lli j = i + 1; j < n - 1; ++j){
					if(a[j] != -1){
						for(lli k = j + 1; k < n; ++k){
							if(a[k] != -1 && (a[i] + a[j] + a[k]) % 3 == 0){
								a[i] = a[j] = a[k] = -1;
								++ans;
								break;
							}
						}
						if(a[i] == -1) break;
					}
				}
			}
		}
		cout << ans << ln;
	}
	return 0;
}

/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [array contains duplicate values!]

*/