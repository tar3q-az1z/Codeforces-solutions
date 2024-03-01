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
	string f, s;
	cin >> f;
	cin >> s;
	for(idx i = 0; i < f.size(); ++i){
		if(f[i] >= 65 && f[i] <= 90){
			f[i] = (f[i] - 65) + 'a';
		}
	}
	for(idx i = 0; i < s.size(); ++i){
		if(s[i] >= 65 && s[i] <= 90){
			s[i] = (s[i] - 65) + 'a';
		}
	}
	if(f.compare(s) == 0) cout << 0 << ln;
	else if(f.compare(s) > 0) cout << 1 << ln;
	else cout << -1 << ln;
	return 0;
}
