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
	int n, a, b, c, d;
	cin >> n;
	int sum = -1, rank = 0;
	while(n--){
		cin >> a >> b >> c >> d;
		if(sum == -1){
			sum = (a + b + c + d);
		}else if(a + b + c + d > sum){
			++rank;
		}
	}
	cout << rank + 1 << ln;
	return 0;
}
