// Author : Mars_Coder
// https://codeforces.com/problemset/problem/1512/D

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
#define io(x)           for(auto &i: x) cin >> i
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
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const lli l = LLONG_MAX;}inf;
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
		lli n;
		cin >> n; 
		vii b(n + 2);
		lli sum = 0ll;
		priority_queue<lli> p;
		for(auto &i: b){
			cin >> i; 
			sum += i;
			p.push(i);
		}
		bool flag = 0, rep = 1;
		for(lli i = 0; i < n + 2 && !flag; ++i){
			lli psum = sum - b[i], now;
			if(p.top() != b[i]){
				now = p.top();
				psum -= now;
				if(psum == now){
					p.pop();
					while(!p.empty()){
						if(p.top() != b[i] || !rep){
							cout << p.top() << ' ';
						}else{
							rep = 0;
						}
						p.pop();
					}
					cout << ln;
					flag = 1; 
					break;
				}
			}else{
				lli take = p.top();
				p.pop();
				now = p.top();
				psum -= now;
				if(psum == now){
					p.pop();
					while(!p.empty()){
						cout << p.top() << ' '; p.pop();
					}
					cout << ln;
					flag = 1;
					break;
				}else p.push(take);
			}
		}
		if(!flag) cout << -1 << ln;
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