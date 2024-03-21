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

	lli n, m, bi;
	cin >> n >> m;
	vl a;
    for(int i = 0; i < n; ++i){
	 	cin >> bi;
	 	a.pb(bi);
	 	if(i > 0) a[i] += a[i - 1];
	}
	for(int i = 0; i < m; ++i){
		cin >> bi;
		 int l = 0, r = n - 1, mid;
		 while(l <= r){
		 	mid = l + (r - l) / 2;
		 	if(l == r){mid = l; break;}
		 	if(bi == a[mid]) break;
		 	if(bi < a[mid]) r = mid;
		 	else l = mid + 1;
		 }
		 cout << mid + 1 << ' ';
		 if(mid > 0){
		 	cout << bi - a[mid - 1] << ln;
		 }else{
		 	cout << bi << ln;
		 }
	}
	return 0;
}