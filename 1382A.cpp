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
	int t, n, m, ai;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int arr[1001] = {};
		for(int i = 0; i < n; ++i){
			cin >> ai;
			if(arr[ai] == 0){
				++arr[ai];
			}
		}
		bool flag = false;
		int ans = 0;
		for(int i = 0; i < m; ++i){
			cin >> ai;
			if(arr[ai] == 1 && !flag){
				ans = ai;
				flag = true;
			}
		}
		if(ans == 0){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << 1 << ' ' << ans ;
			newline;
		}
	}
	return 0;
}
