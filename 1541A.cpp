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
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n % 2 == 0){
			for(int i = 1; i <= n; i += 2){
				cout << i + 1 << " " << i << " ";
			}
			cout << ln;
		}else{
			for(int i = 1; i <= n - 3; i += 2){
				cout << i + 1 << " " << i << " ";
			}
			cout << n - 1 << " " << n << " " << n - 2;
			cout << ln;
		}
	}
	return 0;
}