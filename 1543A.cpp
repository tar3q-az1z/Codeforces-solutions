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
	lli t, a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a == b){
			cout << 0 << ' ' << 0 << ln;
			continue;
		}
		if(a > b) swap(a, b);
		lli gcd = b - a;
		lli temp = a % gcd;  
		cout << gcd << ' ' << min(temp, llabs(gcd - temp)) << ln;
	}
	return 0;
}