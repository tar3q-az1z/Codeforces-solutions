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
	int a, b, c, count = 0;
	cin >> a >> b >> c;
	if(a + b <= c){
		count += (c - (a + b)) + 1;
		a += count;
	}
	if(b + c <= a){
		count += (a - (b + c)) + 1;
		b += (a - (b + c)) + 1;
	}
	if(c + a <= b){
		count += (b - (c + a)) + 1;
		c += (b - (c + a)) + 1;
	}
	cout << count << ln;
	return 0;
}