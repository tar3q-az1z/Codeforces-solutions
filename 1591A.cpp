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

	int t, n = 0;
	cin >> t;
	while(t--){
		cin >> n;
		vi a(n);
		int h = 1;
		for(auto &i : a) cin >> i;
		for(int i = 0; i < n - 1; ++i){
			if(a[i] == 0 && a[i + 1] == 0){
				h = -1;
				break;
			}
		}
		if(h == -1){
			cout << h << ln;
			continue;
		}
		// cout << 'h' << h << ln;

		for(int i = 0; i < n; ++i){
			if(i > 0){
				if(a[i] == 1){
					if(a[i - 1] == 1) h += 5;
					else h += 1;
				}
			}else if(a[i] == 1) h += 1;
		}
		cout << h << ln;
	}
	return 0;
}