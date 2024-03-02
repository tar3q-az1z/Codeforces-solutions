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
	int t;
	cin >> t;
	while(t--){
		int n, val;
		cin >> n;
		vector<pair<int, bool>> v;
		for(int i = 0; i < n; ++i){
			cin >> val;
			v.push_back(make_pair(val, false));
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n - 1; ++i){
			for(int j = i + 1; j < n; ++j){
				if(v[i].second == false && v[j].second == false){
					if(abs(v[i].first - v[j].first) <= 1){
						if(v[i].first < v[j].first){
							v[i].second = true;
							break;
						}else{
							v[j].second = true;
						}
					}
				}
			}
		}
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			if(!v[i].second){
				++cnt ;
			}
		}
		if(cnt == 1){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
