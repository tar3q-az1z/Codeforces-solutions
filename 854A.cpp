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
	
	int n;
	cin >> n;
	int ans1 = 0, ans2 = 0, dif = INT_MAX;
	for(int i = n - 1; i >= 2; --i){
		int temp = n - i;
		if(abs(temp - i) < dif && i != temp && __gcd(i, temp) == 1){
			ans1 = i;
			ans2 = n - i;
			dif = abs(ans2 - ans1);
		}
	}
	if(ans1 > ans2) swap(ans1, ans2);
	cout << ans1 << ' ' << ans2 << ln;
	return 0;
}
