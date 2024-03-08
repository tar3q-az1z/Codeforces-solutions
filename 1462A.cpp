#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
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
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
//		vi v(n);
		cin >> n;
		vi v(n);
		for(auto &i : v) cin >> i;
		for(int i = 0, j = n - 1; i < n/2; ++i, --j){
			cout << v[i] << " " << v[j] << " ";
		}
		if(n % 2 != 0){
			cout << v[n / 2] ;
		}
		cout << ln;
	}
	return 0;
}
