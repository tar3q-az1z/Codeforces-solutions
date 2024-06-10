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
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(2 * n);
		for(auto &i : v) cin >> i;
		int cnt_odd = 0, cnt_even = 0;
		for(int i = 0; i < 2 * n; ++i){
			if(v[i] % 2 == 0) ++cnt_even;
			else ++cnt_odd;
		}
		if(cnt_even == cnt_odd) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}