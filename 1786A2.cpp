// Author : Mars_Coder
// https://codeforces.com/problemset/problem/1786/B

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
const int INF = INT_MAX;
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
lli uround(lli a, lli b) {return (((a) * 1.0000) / (b) + 0.500000);}
lli pow2(lli p){return (1ll << p);}

// nxt templ.


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
		int n;
		cin >> n;
		n -= 1;
		bool flag = 1;
		int aW = 1, aB = 0, bW = 0, bB = 0;
		bool W = 0, B = 1;
		for(int i = 2; i > 0;){
			if(n <= 0) break;
			if(flag){
				for(int j = 0; j < min(i, n); ++j){
					if(B){
						bB++;
						B = 0;
						W = 1;
					}else{
						++bW ;
						B = 1; W = 0;
					}
				}
				n -= i;
				++i;
				for(int j = 0; j < min(i, n); ++j){
					if(B){
						bB++;
						B = 0;
						W = 1;
					}else{
						++bW ;
						B = 1; W = 0;
					}
				}
				n -= i;
				++i;
				flag = 0;
			}else{
				flag = 1;
				for(int j = 0; j < min(i, n); ++j){
					if(B){
						++aB; B = 0; W = 1;
					}else{
						++aW; B = 1; W = 0;
					}
				}
				n -= i;
				++i;
				for(int j = 0; j < min(i, n); ++j){
					if(B){
						++aB; B = 0; W = 1;
					}else{
						++aW; B = 1; W = 0;
					}
				}
				n -= i;
				++i;
			}
		}
		cout << aW << ' ' << aB << ' ' << bW << ' ' << bB << ln;
	}
	return 0;
}


/*
some familiar issues & sugg.:
!----> [RE-READ THE CODE!]
!----> [invariants to array?]
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]

*/