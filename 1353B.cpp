#define _USE_MATH_DEFINES

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define vl vector<lli>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define IT(x) x.begin(), x.end()
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;
#define precision(n) cout << fixed << setprecision(n) // n places after dec.point
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vi a(n), b(n);
		for(auto &i : a) cin >> i;
		for(auto &i : b) cin >> i;
		sort(IT(a));
		sort(IT(b), greater<int>());
		for(int i = 0; i < n; ++i){
			if(k == 0) break;
			if(a[i] < b[i]){swap(a[i], b[i]); --k;}
		}
		int sum = 0;
		for(auto i : a) sum += i;
		cout << sum << ln;
	}

	return 0;
}
