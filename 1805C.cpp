// Author : Mars_Coder
// https://codeforces.com/problemset/problem/1805/C

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln                "\n" // no flush, oppos of endl
#define _flush            endl
#define stop_sync         ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios         cin.tie(nullptr) // no flush
#define lli               long long int
#define vi                vector<int>
#define vii               vector<lli>
#define vch               vector<char>
#define double            long double
#define vss               vector<string>
#define vpp(T1, T2)       vector<pair<T1, T2>>
#define pq                priority_queue // high prec.
#define pqq(T)            priority_queue<T, vector<T>, greater<T>> 			
#define pb                push_back
#define ppb 	          pop_back
#define mp                make_pair
#define Fi(p)             get<0>(p)
#define Sc(p)             get<1>(p)
#define sz(x)             int ((x).size())
#define all(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define bin_sc(a, x)      binary_search(all(a), x)
#define lbd(a, x)         lower_bound(all(a), x) // an iter.
#define ubd(a, x)         upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)      equal_range(all(a), x) // a pair of lb, ub
#define minE(a)           (*min_element(all(a)))
#define maxE(a)           (*max_element(all(a)))
#define FIXED(x)          cout << fixed << setprecision(x)
#define mem(a, v)         memset(a, v, sizeof a) // 0,-1 for int, and all char
#define filla(a, n, v)    fill(a, a + n, v) // for arr.
#define fillv(a, v)       fill(all(a), v) // for vec.
#define _fillv(a, n, v)   fill_n(a.begin(), n, v)
#define glue(x, y)        x##y
#define feed(x)           cout << x << ln
#define feeds(x)          cout << x << ' '
#define dbug(x)           cout << (#x) << ": " << (x) << ln
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define printm(m)         for(auto i: m) cout << Fi(i) << " -> " << Sc(i) << ln
#define prints(s)         for(auto i: s) cout << i << ' '; cout << ln
#define uceil(a, b)       ((a + b - 1) / (b))
#define gcd(a, b)         __gcd(a, b)
#define unq_v(a)          a.resize(distance(a.begin(), unique(all(a)))) // for same valued consec. grp
#define mk_upper(s)       transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)       transform(s.begin(), s.end(), s.begin(), ::tolower)


const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const lli l = LLONG_MAX;}inf;

bool isUp(char ch){locale loc; return isupper(ch, loc);}
template<typename type> type Nsum(type n){return (n * (n + 1)) / (type)2;}
template<typename type> type uround(type a, type b) {return (((a) * 1.0000) / (b) + 0.500000);}
template<typename type> type pow2(type p){return ((type) 1) << p;}


// array<T, n> a = {}
double real_sqrt(long long int value, int prec = 5){
	long long int l = 0, r = sqrtl(value) + 100, mid, sq;
	double ans = 0.0;
	while(l <= r){
		mid = r - (r - l) / 2;
		sq = mid * mid;
		if(sq == value){
			ans = mid;
			break;
		}
		if(sq < value){
			ans = mid;
			l = mid + 1;
		}else r = mid - 1;
	}
	double up = 0.1;
	for(int i = 0; i < prec; ++i){
		while(ans * ans <= value){
			ans += up;
		}
		ans -= up;
		up = up / 10;
	}
	return ans;
}

int main(void){
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t(1), tcase(0);
	cin >> t; 
	while(++tcase, t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		lli n, m;
		cin >> n >> m; 
		vector<double> ymx(n);
		scanv(ymx);
		sort(all(ymx));
		for(lli i = 0; i < m; ++i){
			lli a, b, c;
			cin >> a >> b >> c;
			if(4 * a * c < 0){
				cout << "NO" << ln;
				continue;
			}
			double low = b - 2 * real_sqrt(a * c);
			double high = b + 2 * real_sqrt(a * c);
			auto ans = ubd(ymx, low);
			if(ans != ymx.end() && (*ans < high)){
				cout << "YES" << ln; 
				cout << (lli) (*ans) << ln;
			}else cout << "NO" << ln;
		}
		cout << ln;
	}
	return 0;
}


/*
some familiar issues & sugg.:
!----> [RE-READ THE CODE!]
!----> [invariants to array?]
!----> [kinda back-tracking?]
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [binary search? -> ubd, lbd]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]
!----> [unq_v for vec only]

*/