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
		vi even, odd;
		int ai;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			if(ai % 2 == 0) even.pb(ai);
			else odd.pb(ai);
		}
		for(int i = 0; i < odd.size(); ++i){
			cout << odd[i] << " ";
		}
		for(int i = 0; i < even.size(); ++i){
			cout << even[i] << " ";
		}
		newline;
	}
	return 0;
}
