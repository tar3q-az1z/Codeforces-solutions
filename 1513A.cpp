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
	int n, t, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(n % 2 == 0){
			if( k <= (n / 2 - 1)){
				int l = n;
				for(int i = 1; i <= n; ++i){
					cout << i  << ' ';
					if(k){
						cout << l << ' ';
						--n; --l;
						--k;
					}
				}
				cout << ln;
			}else cout << -1 << ln;
		}else{
			if(k <= (n - 1) / 2){
				int l = n;
				for(int i = 1; i <= n; ++i){
					cout << i  << ' ';
					if(k){
						cout << l << ' ';
						--n; --l;
						--k;
					}
				}
				cout << ln;
			}else cout << -1 << ln;
		}
	}
	return 0;
}