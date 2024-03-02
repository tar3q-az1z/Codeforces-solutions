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

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t, n; 
	cin >> t;
	while(t--){
		cin >> n;
		vi a(n);
		vi b(n);
		for(auto &i : a) cin >> i;
		for(auto &i : b) cin >> i;
		int dif[100001] = {};
		bool flag = false;
		for(int i = 0; i < n; ++i){
			if(a[i] > b[i]){
				flag = true;
				break;
			}
			dif[i] = b[i] - a[i];
		}
		if(flag) cout << "NO\n";
		else{
			for(int i = 0; i < n; ++i){
				if(dif[i] != 0){
					int v = dif[i];
					for(int j = i; dif[j] == v && j < n; ++j){
						dif[j] = 0;
					}
					break;
				}
			}
			bool temp = false;
			for(int i = 0; i < n; ++i){
				if(dif[i] != 0){
					temp = true;
					break;
				}
			}
			if(temp) cout << "NO\n";
			else cout << "YES\n";
		}
	}
	return 0;
}
