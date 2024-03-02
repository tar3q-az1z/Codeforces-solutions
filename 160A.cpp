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

	int n = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n, greater<int>());
	for(int i = 1; i < n; ++i) a[i] = a[i] + a[i - 1];
	for(int i = 0; i < n; ++i){
		int rest = a[n - 1] - a[i];
		if(a[i] > rest){
			cout << i + 1 << ln;
			return 0;
		}
	}
	return 0;
}
