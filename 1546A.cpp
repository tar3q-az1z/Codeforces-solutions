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

	// #ifdef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vi ai(n); 
		vi bi(n);
		int sum = 0;
		for(auto &i : ai){
			cin >> i;
			sum += i;
		}
		for(auto &i : bi){
			cin >> i;
			sum -= i;
		}
		if(sum != 0){
			cout << -1 << ln;
			continue;
		}
		vector<pair<int, int>> p;
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			if(ai[i] != bi[i]){
				for(int j = i + 1; j < n; ++j){
					if(ai[i] == bi[i] || ai[j] == bi[j]){
						continue;
					}
					if(ai[i] > bi[i] && ai[j] < bi[j]){
						++cnt;
						--ai[i]; ++ai[j];
						p.pb(make_pair(i + 1, j + 1));
						--j;
					}else if(ai[i] < bi[i] && ai[j] > bi[j]){
						++cnt;
						++ai[i]; --ai[j];
						p.pb(make_pair(j + 1, i + 1));
						--j;
					}
				}
			}
		}
		cout << cnt << ln;
		for(auto i : p){
			cout << i.first << ' ' << i.second << ln;
		}
		p.clear();
		ai.clear();
		bi.clear();
	}
	return 0;
}