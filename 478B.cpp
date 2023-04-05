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

	lli n, m;
	cin >> n >> m;
	lli av = n / m;
	lli deb = n % m;
	lli temp1 = m - deb;
	lli ans1 = (av * (av - 1)) / 2;
	ans1 *= temp1;
	++av;
	lli ans2 = (av * (av - 1)) / 2;
	ans2 *= deb;
	cout << ans2 + ans1 << ' ';
	// lli temp = (m - 1) * 2;
	// if(temp < n){
	// 	if(n % 2 != 0 || m % 2 != 0){
	// 		// lli ans = m - 1;
	// 		// temp = n - temp;
	// 		// ans += (temp * (temp - 1)) / 2;
	// 		// cout << ans << ' ';

	// 		lli av = n / m;
	// 		lli deb = n % m;
	// 		lli temp1 = m - deb;
	// 		lli ans1 = (av * (av - 1)) / 2;
	// 		ans1 *= temp1;
	// 		++av;
	// 		lli ans2 = (av * (av - 1)) / 2;
	// 		ans2 *= deb;
	// 		cout << ans2 + ans1 << ' ';
	// 	}else{
	// 		if(n % m == 0){
	// 			lli ans = n / m;
	// 			cout << ans * (ans - 1) << ' ';
	// 		}else{
	// 			lli av = n / m;
	// 			lli deb = n % m;
	// 			lli temp1 = m - deb;
	// 			lli ans1 = (av * (av - 1)) / 2;
	// 			ans1 *= temp1;
	// 			++av;
	// 			lli ans2 = (av * (av - 1)) / 2;
	// 			ans2 *= deb;
	// 			cout << ans2 + ans1 << ' ';
	// 		}
	// 	}
	// }else{
	// 	cout << (n - m) << ' ';
	// }
	lli _max = n - m + 1;
	cout << (_max * (_max - 1)) / 2 << ln;
	return 0;
}