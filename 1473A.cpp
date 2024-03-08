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

bool ck(vi v, int n, int target){
	int left = 0, right = n - 1;
	while(left < right){
		int sum = v[left] + v[right];
		if(sum == target || sum < target) return true;
		else --right;
	}
	return false;
}
int main(){
	int t, n, d;
	cin >> t;
	while(t--){
		cin >> n >> d;
		vi v(n);
		for(auto &i : v) cin >> i;
		sort(v.begin(), v.end());
		bool flag = true;
		for(int i = 0; i < n; ++i){
			if(v[i] > d){
				flag = ck(v, n, d);
				if(!flag){
					break;
				}
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
