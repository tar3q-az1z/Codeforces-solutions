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
	fastios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	vi a(n);
	for(auto &i : a) cin >> i;
	int ones = 0, twos = 0, ans = 0;
	for(int i = 0; i < n; ++i){
		int cnt = 0;
		if(a[i] == 1){
			while(a[i] != 2){
				++cnt;
				++i;
				if(i == n){
					ones = cnt;
					if(min(ones, twos) > ans) ans = min(ones, twos);
					break;
				}
			}
			--i;
			ones = cnt;
		}else{
			while(a[i] != 1){
				++cnt;
				++i;
				if(i == n){
					twos = cnt;
					if(min(ones, twos) > ans) ans = min(ones, twos);
					break;
				}
			}
			--i;
			twos = cnt;
		}
		if(min(ones, twos) > ans) ans = min(ones, twos);
	}
	cout << ans + ans << ln;
	return 0;
}