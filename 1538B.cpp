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
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int sum = 0;
		vi v(n);
		for(auto& i : v){
			cin >> i;
			sum += i;
		}
		int avg = sum / n;
		int cand = 0;
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			if(v[i] > avg){
				cand += (v[i]- avg);
				++cnt;
			}
		}
		for(int i = 0; i < n; ++i){
			if(cand < (avg - v[i])){
				break;
			}
			if(v[i] < avg){
				cand -= (avg - v[i]);
			}
		}
		if(cand == 0){
			cout << cnt << ln;
		}else{
			cout << -1 << ln;
		}
	}
	return 0;
}