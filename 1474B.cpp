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

int r = 50000;
vi tr;
vector<bool> prime(r, true);

void isprime(){
	prime[0] = false;
	prime[1] = false;
	for(int i = 2; i * i <= r - 1; ++i){
		if(prime[i]){
			for(int j = i * i; j <= r - 1; j += i){
				prime[j] = false;
			}
		}
	}
	for(int i = 2; i < r; ++i){
		if(prime[i]) tr.pb(i);
	}
}

int fact_search(int n){
	int left = 0, right = tr.size() - 1, mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(left == right) break;
		if(n == tr[mid]) return tr[mid + 1];
		if(tr[mid] > n){
			if(tr[mid - 1] <= n) return tr[mid];
			else right = mid - 1;
		}
		else if(tr[mid] < n) left = mid + 1;
	}
	return tr[left];
}
int main(){
	int t, d;
	
	isprime();
	
	cin >> t;
	while(t--){
		cin >> d;
		int d1 =  fact_search(d);
		int d2 = fact_search(d1 + d - 1);
		cout << d1 * d2 << ln;
	}
	return 0;
}
