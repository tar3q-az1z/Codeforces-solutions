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
	int a, b;
	cin >> a;
	cin >> b;
	if(abs(a - b) % 2 == 0){
		int dif = abs(a - b);
		int var = dif / 2;
		var = ((float)var / 2.0 * ((float)var + 1));
		cout << 2 * var  << ln;
	}else{
		int dif = abs(a - b);
		int var1 = (dif + 1) / 2;
		var1 = ((float)var1 * ((float)(var1 + 1) / 2.0));
		int var2 = (dif - 1) / 2;
		var2 = (((float)var2 / 2.0) * (float)(var2 + 1));
		cout << var1 + var2 << ln;
	}
	return 0;
}