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
	int t, n, x;
	cin >> t;
	
	while(t--){
		cin >> n >> x;
		if(n <= 2){
			cout << 1 << ln;
		}else{
			int cnt = 2;
			for(int i = 3; i < (x + i); i += x){
				if( n < x + i){
					cout << cnt << ln;
					break;
				}else ++cnt;
			}
		}
	}
	return 0;
}