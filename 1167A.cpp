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
		string s;
		cin >> s;
		int i = 0;
		for(i = 0; i < n; ++i){
			if(s[i] == '8'){
				break;
			}
		}
		if(n -(i + 1) >= 10){
			cout << "YES\n";
		}else cout << "NO\n";
	}
	return 0;
}