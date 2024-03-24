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
	int a[n], cnt = 0;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(i > 0){
			if(a[i] > a[i - 1]) ++cnt;
		}
	}
	if(cnt + 1 == n){cout << '0' << ' ' << '0' << ln; return 0;}
	if(n == 2){cout << '1' << ' ' << '2' << ln; return 0;}
	int l = 0, r = 0, i = 0, j = 0;
	if(a[0] != 1){
		l = 0;
		while(a[i] != 1){
			++r;
			++i;
			if(i == n) break;
		}
		for(i = l, j = r; i < (r - l + 1) / 2; ++i, --j) swap(a[i], a[j]);
		cnt = 0;
		for(i = 1; i < n; ++i){
			if(a[i] > a[i - 1]) ++cnt;
		}
		if(cnt + 1 == n){cout << l + 1 << ' ' << r + 1 << ln; return 0;}
		else {cout << '0' << ' ' << '0' << ln; return 0;}
	}
	if(a[n - 1] != n){
		r = l = n - 1;
		i = n - 1;
		while(a[i] != n){
			--i; --l;
		}
		for(i = l, j = r; i < ((r - l + 1) / 2) + l; ++i, --j) swap(a[i], a[j]);
		cnt = 0;
		for(i = 1; i < n; ++i){
			if(a[i] > a[i - 1]) ++cnt;
		}
		if(cnt + 1 == n){cout << l + 1 << ' ' << r + 1 << ln; return 0;}
		else{cout << '0' << ' ' << '0' << ln; return 0;}			
	}
	for(int i = 1; i < n - 1; ++i){
		if(a[i] > a[i - 1] && a[i] > a[i + 1]){l = i; break;}
	}
	for(int i = l + 1; i < n - 1; ++i){
		if(a[i] < a[i - 1] && a[i] < a[i + 1]){r = i; break;}
	}
	for(i = l, j = r; i < ((r - l + 1) / 2) + l; ++i, --j) swap(a[i], a[j]);
	//if((r - l) % 2 == 0) swap(a[(l + r) / 2], a[(l + r) / 2 + 1]);
	cnt = 0;
	for(i = 1; i < n; ++i){
		if(a[i] > a[i - 1]) ++cnt;
	}
	if(cnt + 1 == n){cout << l + 1 << ' ' << r + 1 << ln; return 0;}
	else{cout << '0' << ' ' << '0' << ln; return 0;}
	return 0;
}