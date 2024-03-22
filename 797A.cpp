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

vi trial(int n, int k){
	int cnt = 0;
	vi f;
	while(!(n % 2)){
		++cnt;
		f.pb(2);
		n /= 2;
		if(cnt == k - 1 && n != 1){
			f.pb(n);
			return f;
		}
	}
	for(int d = 3; d * d <= n; d += 2){
		if(n == 1) break;
		while(!(n % d)){
			++cnt;
			f.pb(d);
			n /= d;
			if(cnt == k - 1 && n != 1){
				f.pb(n);
				return f;
			}
		}
	}
	if(n > 1) f.pb(n);
	return f;
}
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, k;
	cin >> n >> k;
	if(k == 1){
		cout << n << "\n";
		return 0;
	}
	vi ans = trial(n, k);
	if(ans.size() == k){
		for(auto i : ans) cout << i << ' ';
		newline;
	}else cout << "-1\n";

	return 0;
}