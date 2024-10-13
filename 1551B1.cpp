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
const int MOD = 1000000007;

#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ch[27] = {};
		for(int i = 0; i < s.length(); ++i){
			int d = s[i] - 'a';
			++ch[d];
		}
		int cnt = 0;
		for(int i = 0; i < 27; ++i){
			if(ch[i] > 2) cnt += 2;
			else cnt += ch[i];
		}
		cout << cnt / 2 << ln;
	}
	return 0;
}