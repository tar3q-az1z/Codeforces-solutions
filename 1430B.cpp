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
//	fastios;
	
	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vi v(n);
		for(auto& i : v) cin >> i;
		sort(v.begin(), v.end());
		lli mx_poured = (lli)v[n - 1];
		int temp = 0;
		for(int i = n - 2; i >= 0; --i){
			if(temp == k) break;
			if(v[i] != 0){
				mx_poured += (lli)v[i];
				++temp;
			}
		}
		cout << mx_poured  << ln;

	}
	return 0;
}