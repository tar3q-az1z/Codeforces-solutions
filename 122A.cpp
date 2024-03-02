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

	int n;
	cin >> n;
	bool flag = false;
	int ar[] = {4, 44, 444, 7, 77, 777, 447, 474, 477, 744, 47, 74};
	for(int i = 0; i < 11; ++i){
		if(!(n % ar[i])){
			cout << "YES\n";
			flag = true;
			break;
		}
	}
	if(!flag) cout << "NO\n";
	return 0;
}
