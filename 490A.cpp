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

	int t, ai, ones = 0, twos = 0, threes = 0;
	cin >> t;
	vi i1, i2, i3;
	for(int i = 0; i < t; ++i){
		cin >> ai;
		if(ai == 1) {++ones; i1.pb(i + 1);}
		else if(ai == 2) {++twos; i2.pb(i + 1);}
		else {++threes; i3.pb(i + 1);}
	}
	if(min({ones, twos, threes}) == 0){cout << '0' << ln; return 0;}
	int m = min({ones, twos, threes});
	cout << m << ln;
	for(int i = 0; i < m; ++i){
		cout << i1[i] << ' ' << i2[i] << ' ' << i3[i] << ln;
	}
	return 0;
}