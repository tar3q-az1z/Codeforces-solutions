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
	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int cnt = 0;
		vi v;
		for(int i = k + 1; i <= n; ++i){
			v.pb(i);
			++cnt;
		}
		for(int i = 1, j = k - 1; i <= k/2; ++i, --j){
			if(i + j == k){
				v.pb(max(i, j));
				++cnt;
			}		
		}
		cout << cnt << ln;
		for(int i = 0; i < v.size(); ++i){
			cout << v[i] << " ";
		}
		newline;
	}
	return 0;
}