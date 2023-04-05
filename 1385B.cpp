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
	int t, n, ai;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[51] = {};
		queue<int> per;
		for(int i = 0; i < 2 * n; ++i){
			cin >> ai;
			++arr[ai];
			if(arr[ai] == 1){
				per.push(ai);
			}
		}
		while(!per.empty()){
			cout << per.front() << ' ';
			per.pop();
		}
		newline;
	}
	return 0;
}