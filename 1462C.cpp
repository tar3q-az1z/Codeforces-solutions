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
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t, x;
	cin >> t;
	while(t--){
		cin >> x;
		if(x < 10){
			cout << x << ln;
			continue;
		}	
		int ml = 1, ans = 0;
		for(int i = 9; i >= 1; --i){
			if(i <= x){
				ans = ans + (i * ml);
				x -= i;
				ml *= 10;
			}
		}
		if(x != 0){
			cout << -1 << ln;
		}else cout << ans << ln;
	}

	return 0;
}
