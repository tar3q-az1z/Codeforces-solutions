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
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		vi v1(n), v2(n);
		for(auto& i : v1) cin >> i;
		for(auto& i : v2) cin >> i;
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), greater<int>());
		bool flag = true;
		for(int i = 0; i < n; ++i){
			if((v1[i] + v2[i]) > x){
				flag = false;
			}
		}
		if(flag){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}
	return 0;
}