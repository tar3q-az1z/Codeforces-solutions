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

	int n = 0, s;
	cin >> s >> n;
	vector<pair<int, int>> a(n);
	int f, sec;
	bool pre = true;
	for(int i = 0; i < n; ++i){
		cin >> f >> sec;
		if(s > f) pre = false;
		a[i].first = f;
		a[i].second = sec;
	}
	if(pre){
		cout << "NO\n";
		return 0;
	}
	else{
		sort(IT(a));
		for(int i = 0; i < n; ++i){
			if(s <= a[i].first){
				cout << "NO\n";
				return 0;
			}
			if(s > a[i].first){
				s += a[i].second;
			}
		}
	}
	cout << "YES\n";
	return 0;
}
