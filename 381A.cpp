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
	vi a(n);
	for(auto &i : a) cin >> i;
	int l = 0, r = n - 1, s = 0, d = 0;
	bool flag = true;
	while(l <= r){
		if(flag){
			if(a[l] > a[r]){
				s += a[l];
				++l;
			}else{
				s += a[r];
				--r;
			}
			flag = false;
		}else{
			if(a[l] > a[r]){
				d += a[l];
				++l;
			}else{
				d += a[r];
				--r;
			}
			flag = true;
		}
	}
	cout << s << ' ' << d << ln;
	return 0;
}