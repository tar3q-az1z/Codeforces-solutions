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
	
	int n, q;
	cin >> n >> q;
	vi v(n);
	int ones = 0;
	for(auto& i : v){
		cin >> i;
		if(i == 1){
			++ones;
		}
	}
	int t, x;
	for(int i = 0; i < q; ++i){
		cin >> t >> x;
		if(t == 1){
			v[x - 1] = 1 - v[x - 1];
			if(v[x - 1] == 0){
				--ones;
			}else{
				++ones;
			}
		}else{
			if(ones >= x){
				cout << 1 << ln;
			}else{
				cout << 0 << ln;
			}
		}
	}
	
	return 0;
}
