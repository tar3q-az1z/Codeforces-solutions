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
	int a, b, n;
	cin >> n;
	while(n--){
		cin >> a >> b;
		int cnt = 0;
		while(a && b){
			if(b < a) swap(a, b);
			if(a){
				cnt += (b / a);
				b = b % a;
			}
			if(b){
				cnt += (a / b);
				a = a % b;
			}
		}
		cout << cnt << ln;
	}

	return 0;
}