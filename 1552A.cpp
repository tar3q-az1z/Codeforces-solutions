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

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		string c = s;
		int cnt = 0;
		sort(c.begin(), c.end());
		for(int i = 0; i < n; ++i){
			if(s[i] != c[i]) ++cnt;
		}
		cout << cnt << ln;
	}


	return 0;
}