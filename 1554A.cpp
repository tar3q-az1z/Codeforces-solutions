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
#define newline cout << ln
const int MOD = 1000000007;
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){
	fastios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	lli t, n = 0;
	cin >> t;
	while(t--){
		cin >> n;
		lli a[n];
		lli mx = -1;
		vector<lli> lt;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
		}
		for(int i = 0; i < n; ++i){
			mx = a[i];
			if(i - 1 >= 0 && i + 1 != n){
				lli temp = mx * (max(a[i + 1], a[i - 1]));
				lt.pb(temp);
			}else if(i - 1 >= 0) lt.pb(mx * a[i - 1]);
			else lt.pb(mx * a[i + 1]);
		}
		cout << *max_element(lt.begin(), lt.end()) << ln;

	}
	return 0;
}