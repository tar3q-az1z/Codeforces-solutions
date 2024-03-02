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
	int t, n, k1, k2;
	cin >> t;
	while(t--){
		cin >> n >> k1 >> k2;
		vi f(k1);
		vi s(k2);
		for(auto &i : f) cin >> i;
		for(auto &i : s) cin >> i;
	
		while(1){
			int cd1 = *max_element(f.begin(), f.end());
			int cd2 = *max_element(s.begin(), s.end());
			if(cd1 == 0){
				cout << "NO\n";
				break;
			}
			if(cd2 == 0){
				cout << "YES\n";
				break;
			}
			if(cd1 > cd2){
				f.pb(cd2);
				int ind = max_element(s.begin(), s.end()) - s.begin();
				s[ind] = 0;
			}else{
				s.pb(cd1);
				int ind = max_element(f.begin(), f.end()) - f.begin();
				f[ind] = 0;
			}
		}
	}
	return 0;
}
