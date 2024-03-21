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
	while(n != 0 && m != 0){
		if(n >= 2 * m){
			lli cof = n / m;
			if(cof % 2 == 0) n -= (cof * m);
			else n -= ((cof - 1) * m);
		}
		else if(m >= 2 * n){
			lli cof = m / n;
			if(cof % 2 == 0) m -= (cof * n);
			else m -= ((cof - 1) * n);
		}
		else break;
	}
	cout << n << ' ' << m << ln;
	return 0;
}
