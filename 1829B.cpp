// @Author: Mars_Coder
// @date: 10-May-23 9:27:58 PM +06
// https://codeforces.com/problemset/problem/1829/B

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


using lli = long long int;
using uInt = unsigned int;
using ulli = unsigned long long int;
using vi = vector<int>;
using vii = vector<lli>;
using vc = vector<char>;
using udouble = long double;
using vd = vector<double>;
using vs = vector<string>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;  // high prec., pq<T> p;
template<typename T> using pq_ = priority_queue<T, vector<T>, greater<T>>;  // dec. as: pq_<T> x;
template<typename T1, typename T2> using vp = vector<pair<T1, T2>>;  // vp<T1, T2> ..

#define ln                "\n" // no flush, oppos of endl
#define _flush            endl
#define stop_sync         ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios         cin.tie(nullptr) // no flush
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
#define msg(x)            cout << (#x) << ln
#define bug(x)            cout << (#x) << ": " << (x) << ln
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define printm(m)         for(auto i: m) cout << Fi(i) << " -> " << Sc(i) << ln
#define prints(s)         for(auto i: s) cout << i << ' '; cout << ln
#define uceil(a, b)       ((a + b - 1) / (b))
#define gcd(a, b)         __gcd(a, b)
#define unq_v(a)          a.resize(distance(a.begin(), unique(all(a)))) // for same valued consec. grp
#define mk_upper(s)       transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)       transform(s.begin(), s.end(), s.begin(), ::tolower)
#define valid(nx, ny)     (nx >= 1 && nx <= row && ny >= 1 && ny <= col)
#define dbug(args...)     {string s = #args;replace(all(s), ',', ' '); stringstream s2; s2 << s; vs ss;\
while(s2){string now;     s2 >> now; ss.pb(now);} debug(ss, args);} // string sucks :(, don't know why!


const int dx[]{+1, -1, +0, +0};  // for 4 dir move
const int dy[]{+0, +0, +1, -1};
const int ddx[]{+0, +0, +1, -1, -1, +1, -1, +1};  // for 8 dir move(4 ed + 4 cor)
const int ddy[]{-1, +1, +0, +0, +1, +1, -1, -1};

const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const lli l = LLONG_MAX;}inf;

bool isUp(char ch){locale loc; return isupper(ch, loc);}
void debug(vs s) {cout << "#------------------#\n";}
auto ffs(int x){return __builtin_ffs(x);}  // 1 based idx from right of one
auto ffs(lli x){return __builtin_ffsll(x);}
auto clz(uInt x){return __builtin_clz(x);}  // leading zeros from left ....
auto clz(ulli x){return __builtin_clzll(x);}
auto ctz(uInt x){return __builtin_ctz(x);}  // trailing zeros from right ....
auto ctz(ulli x){return __builtin_ctzll(x);}
auto cto(uInt x){return __builtin_popcount(x);}  // no of 1 bit
auto cto(ulli x){return __builtin_popcountll(x);}
auto parity(uInt x){return __builtin_parity(x);}  // cto % 2
auto parity(ulli x){return __builtin_parityll(x);}
auto pow2(uInt x){return (1u) << x;}  /* returning unsigned */
auto pow2(ulli x){return (1ull) << x;}  // x <= 63
lli binpow(lli a, lli b){lli ans = 1ll; while(b > 0){if(b & 1) ans *= a; a *= a; b >>= 1;} return ans;}
lli binpow(lli a, lli b, lli m){a %= m; lli ans = 1ll; while(b > 0){if(b & 1) ans = ans * a % m; a = a * a % m; b >>= 1;} return ans;}

template<typename type> type Nsum(type n){return (n * (n + 1)) / (type)2;}
template<typename type> type uround(type a, type b) {return (((a) * 1.0000) / (b) + 0.500000);}
template<typename T, typename... param> void debug(vs ss, T a, param... args){
	cout << ss.front() << " = " << a << '\n'; ss.erase(ss.begin()); debug(ss, args...);
}


// array<T, n> a = {}

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
		int n;
		cin >> n; 
		int ans = 0, cnt = 0;
		for(int i = 0, ai; i < n; ++i){
			cin >> ai; 
			if(ai == 0) ++cnt;
			else{
				ans = max(ans, cnt);
				cnt = 0;
			}
		}
		cout << max(ans, cnt) << ln;
	}
	return 0;
}


/*
some familiar issues & sugg.:
!----> [RE-READ THE CODE!]
!----> [invariants to array?]
!----> [kinda back-tracking?]
!----> [use clear() at last if resize() used!]
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [binary search? -> ubd, lbd]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]
!----> [unq_v for vec only]
!----> [bitmask vs unsigned]

*/
