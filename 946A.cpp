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
	int n;
	cin >> n;
	int sum1 = 0, sum2 = 0, ai;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ai >= 0) sum1 += ai;
		else sum2 += ai;
	}
	cout << sum1 - sum2 << ln;
	return 0;
}
