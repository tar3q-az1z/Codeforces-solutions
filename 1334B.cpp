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

	lli t, n = 0;
	double x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		vector<double> a(n);
		for(auto &i : a) cin >> i;
		sort(IT(a), greater<int>());
		double sum = 0;
		int ans = 0;
		for(int i = 0; i < n; ++i){
			sum += a[i];
			double avg = sum / (double) (i + 1);
			if(avg < (double) x) break;
			else ++ans;
		}
		cout << ans << ln;
	}
	return 0;
}
