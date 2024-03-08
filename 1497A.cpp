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
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vi v(n);
		for(auto& i : v) cin >> i;
		sort(v.begin(), v.end());
		vi v1;
		for(int i = 0; i < n - 1; ++i){
			int j = i + 1;
			if(v[i] == v[j]){
				while(v[i] == v[j]){
					v1.pb(v[i+1]);
					++j;
					if(j >= n) break;
				}
				cout << v[i] << " ";
				i = j - 1;
			}else{
				cout << v[i] << " ";
			}
		}
		if(v[n - 1] != v[n - 2]){
			cout << v[n - 1] << " ";
		}
		for(int i = 0; i < v1.size(); ++i){
			cout << v1[i] << " ";
		}
		cout << ln;
	}
	return 0;
}
