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
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;

#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){
	fastios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n = 0;
	cin >> n;
	int a[n];
	int l = 0, r = 0;
	loop(0, n, 1) cin >> a[i];
	loop(0, n - 1, 1){
		if(a[i + 1] < a[i]){
			l = i;
			++i;
			if(i + 1 == n){r = i; break;}
			while(a[i + 1] < a[i]){
				++i;
				if(i + 1 == n) break;
			}
			r = i;
			swap(a[l], a[r]);
			break;
		}
	}
	loop(r, n - 1, 1){
		if(a[i + 1] < a[i]){
			cout << "no\n";
			return 0;
		}
	}
	for(int i = 0; i <= l - 1; ++i){
		if(a[i] > a[i + 1]){
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes\n";
	cout << l + 1 << ' ' << r + 1 << ln;

	return 0;
}