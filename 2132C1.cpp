#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

using i64 = long long int;
using uInt = unsigned int;
using ui64 = unsigned long long int;
using vi = vector<int>;
using vii = vector<i64>;
using vs = vector<string>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;  // high prec., pq<T> p;
template<typename T> using pq_ = priority_queue<T, vector<T>, greater<T>>;  // dec. as: pq_<T> x;
template<typename T1, typename T2> using vp = vector<pair<T1, T2>>;  // vp<T1, T2> ..

/*---------- pbds -------------*/
// *oset.find_by_order(idx ∈[0, n - 1]), oset.order_of_key(ai) + set/map fns
// order_of_key(ai) -> no of elements less than ai
// ordered_set/map:
/*
    pbds<int, null_type, less<int>> uset; -> ordered_set
    pbds<int, null_type, greater<int>>  -> decr. order
    pbds<int, null_type, less_equal<int>> -> multi-set(increasing)
    pbds<int, null_type, greater_equal<int>> -> multi-set(decreasing)
    pbds<int, int, less<int>> -> ordered_map
    pbds<int, int, less_equal<int>> -> multi-map
    ............
    !! ALERT !! (for using less_equals<key>)
    using less_equals<key> makes lower_bound works as upper_bound and vice-versa
    for erase use: any.erase(any.find_by_order(any.order_of_key(val)));
    don't use .find() because it will always return .end()
*/

template<typename key, typename val = null_type, typename cmp = less<key>> 
using pbds = tree<key, val, cmp, rb_tree_tag, tree_order_statistics_node_update>;

/*-----------------------------*/

#define ln                "\n" // no flush, oppos of endl
#define _flush            endl
#define stop_sync         ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios         cin.tie(nullptr) // no flush
#define pb                push_back
#define ppb               pop_back
#define mp                make_pair
#define Fi(p)             get<0>(p)
#define Sc(p)             get<1>(p)
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define lbd(a, x)         lower_bound(All(a), x) // an iter.
#define ubd(a, x)         upper_bound(All(a), x) // an iter.
#define minE(a)           (*min_element(All(a)))
#define maxE(a)           (*max_element(All(a)))
#define FIXED(x)          cout << fixed << setprecision(x)
#define mem(a, v)         memset(a, v, sizeof a) // 0,-1 for int, and all char
#define bug(x)            cout << (#x) << ": " << (x) << ln
#define uceil(a, b)       ((a + b - 1) / (b))
#define unq_v(a)          a.resize(distance(a.begin(), unique(All(a)))) // for same valued consec. grp
#define mk_upper(s)       transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)       transform(s.begin(), s.end(), s.begin(), ::tolower)
#define valid(nx, ny)     (nx >= 1 && nx <= row && ny >= 1 && ny <= col)
#define dbug(args...)     {string s = #args;replace(All(s), ',', ' '); stringstream s2; s2 << s; vs ss;\
while(s2){string now;     s2 >> now; ss.pb(now);} debug(ss, args);} // string sucks :(, don't know why!

vector<int> dx = {1,-1,0,0,1,-1,-1,1}; // (4 ed. + 4 dia.)
vector<int> dy = {0,0,1,-1,1,1,-1,-1}; // first four are ed.

const long double PI = acos(-1.0L);
struct{const int i = (1e9) + 7; const i64 l = (i64)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const i64 l = LLONG_MAX;}inf;

const auto start_time = chrono::high_resolution_clock::now();
void _timer_(){
    const auto end_time = std::chrono::high_resolution_clock::now();
    double delta = (double) chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count();
    FIXED(2);
    cout << "[time: "<< delta <<" ms]\n";
}

bool isUp(char ch){locale loc; return isupper(ch, loc);}
void debug(vs s) {cout << "#------------------#\n";if(sz(s)){};}
int ffs(int x){return __builtin_ffs(x);}  // 1 based idx from right of one
int ffs(i64 x){return __builtin_ffsll(x);}
int clz(uInt x){return __builtin_clz(x);}  // leading zeros from left ....
int clz(ui64 x){return __builtin_clzll(x);}
int ctz(uInt x){return __builtin_ctz(x);}  // trailing zeros from right ....
int ctz(ui64 x){return __builtin_ctzll(x);}
int cto(uInt x){return __builtin_popcount(x);}  // no of 1 bit
int cto(ui64 x){return __builtin_popcountll(x);}
int parity(uInt x){return __builtin_parity(x);}  // cto % 2
int parity(ui64 x){return __builtin_parityll(x);}
auto pow2(uInt x){return (1u) << x;}  /* returning unsigned */
auto pow2(ui64 x){return (1ull) << x;}  // x <= 63

i64 binpow(i64 a, i64 b){i64 ans = 1ll; while(b > 0){if(b & 1) ans *= a; a *= a; b >>= 1;} return ans;}
i64 binpow(i64 a, i64 b, i64 m){a %= m; i64 ans = 1ll; while(b > 0){if(b & 1) ans = ans * a % m; a = a * a % m; b >>= 1;} return ans;}
i64 NcR(i64 n, i64 r){i64 x = 1ll, y = 1ll;if(n - r < r) r = n - r; while(r){x *= n;y *= r; i64 cm = gcd(x, y);x /= cm;y /= cm;--n;--r;}return x;}
i64 lcm(i64 a, i64 b){ if(a > b) swap(a, b); return (a * (b / gcd(a, b)));}
i64 NpR(i64 n, i64 r){i64 x = 1ll;while(r){x *= n; --n;--r;}return x;}
int XOR1toN(int N){ int md = N % 4; return md == 0? N:(md == 3? 0:(md == 2? N + 1:1));} // O(1) T.C.
int XORLtoR(int L, int R){return XOR1toN(R) ^ XOR1toN(max(L - 1, 0));} // xor from range L to R - O(1)

/*for finding modular mul. inverse(a^-1 mod m)*/
//i64 modInv(i64 a, i64 m){ return binpow(a, m - 2, m);} /* when m is prime */
// when a and m are coprime-gcd(a,m) = 1
i64 Xuclid(i64 a, i64 b, i64 &x, i64 &y) {if(b == 0){x = 1; y = 0; return a;}i64 x1, y1; i64 d = Xuclid(b, a % b, x1, y1); x = y1; y = x1 - y1 * (a / b); return d;}
i64 modInv(i64 a, i64 m) {i64 x, y; i64 g = Xuclid(a, m, x, y); assert(g == 1); return (x % m + m) % m;}

template<typename T> T getMod(T a, T b){assert(("b = 0", b != 0));return ((a % b) + b) % b;}//a ∈ Z, b ∈ Z
template<typename type> type Nsum(type n){return (n * (n + 1)) / (type)2;}
template<typename T> T LOG(T base, T power){assert(power > 0 && base > 1); T dg = 0; while(power >= base){++dg; power /= base;}return dg;}
template<typename type> type Round(type a, type b) {if(a < b) return 1; if(a % b) return 1 + a / b; return a / b;}
template<typename T, typename... param> void debug(vs ss, T a, param... args){
    cout << ss.front() << " = " << a << '\n'; ss.erase(ss.begin()); debug(ss, args...);
}

//--------- overloaded << operator to print stl containers.. cout << container << ln
// for vector(1D, 2D), vector of pair & set....
template<typename T>
ostream& operator<< (ostream& out, const vector<T>& v){out << "[";size_t last = v.size() - 1;for(size_t i = 0; i < v.size(); ++i){out << v[i];if (i != last)out << ", ";}out << "]";return out;}

// for set & set of ....
template <typename T> 
ostream& operator<<(ostream& os, const set<T>& v){os << "{";for(auto it : v){os << it;if(it != *v.rbegin()) os << ", ";}os << "}";return os;}

// for map, map of vector & .....
template <typename T, typename S> ostream& operator<<(ostream& os, const map<T, S>& v){for(auto it : v) os << it.first << " : " << it.second << "\n";return os;}

// for pair & pair of .......
template <typename T, typename S> ostream& operator<<(ostream& os, const pair<T, S>& v){os << "("; os << v.first << ", " << v.second << ")";return os;}

// array<T, n> a = {}

int main(void){
    #ifdef ONPC
        cout << "========================== compilation done ==========================\n";
    #endif
    
    stop_sync;
    untie_ios;

    int t(1), tcase(0);
    cin >> t;
    while(++tcase, t--){
        i64 n;
        cin >> n;
        i64 ans = 0ll;
        while(n) {
            i64 p = LOG(3ll, n);
            auto df = [=]() { return binpow(3, p + 1) + p * binpow(3, p - 1);};
            ans += df();
            n -= binpow(3, p);
        }
        cout << ans << ln;
        
        /*#ifdef ONPC
            cout << "[testcase: " << tcase << "] ~~~~~~~~~~~~~~~~~~~~~~~~~ ";
            _timer_();
        #endif*/
    }
    #ifdef ONPC
        cout << "\nfinished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec\n";
    #endif
    return 0;
}
