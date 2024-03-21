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
	int n, x, y, ox_neg = 0, ox_pos = 0;
	cin >> n;
	while(n--){
		cin >> x >> y;
		if(x < 0){
			++ox_neg;
		}else{
			++ox_pos;
		}
	}
	if((ox_neg == 1) || (ox_pos == 1) || (ox_neg == 0) || (ox_pos == 0)){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	return 0;
}