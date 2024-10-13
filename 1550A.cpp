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
		int cnt = 0;
		x -= 1; ++cnt;
		int i = 3;
		for( ; i >= 3; i += 2){
			if(x == 0) break;
			if(i <= x){
				x -= i;
				++cnt;
			}else{
				++cnt;
				x = 0;
			}
		}
		cout << cnt << ln;
	}
	return 0;
}