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

	int t, n, ai, m;
	cin >> t;
	while(t--){
		cin >> n;
		vi a;
		int temp = 0;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			a.pb(ai);
			if(i == 0) m = ai;
			else if(ai > m){m = ai; temp = i;}
		}
		double sum = 0.0000;
		for(int i = 0; i < n; ++i){
			if(i != temp){
				sum += (double)a[i];
			}
		}
		sum /= (double)n - 1;
		precision(9);
		cout << m + sum << ln;
	}
	return 0;
}