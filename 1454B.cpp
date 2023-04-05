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
	fastios;
	
	int t, n, ai;
	cin >> t;
	while(t--){
		cin >> n;
		vector<pair<int, int>> par;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			par.pb(make_pair(ai, i));
		}
		sort(par.begin(), par.end());
		int ind = -1;
		for(int i = 0; i < n; ++i){
			int a = par[i].first;
			if( i == n - 1 && par[i].second != -1){
				ind = par[i].second + 1;
				break;
			}
			if(a != par[i + 1].first){
				if(par[i].second == -1) continue;
				ind = par[i].second + 1;
				break;
			}else{
				par[i + 1].second = -1;
			}
		}
		cout << ind << ln;
	}
	return 0;
}