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
	int n;
	while(t--){
		cin >> n;
//		vector<int> v(n);
		int sum = 0;
		for(int i = 0; i < n; ++i){
			int val ;
			cin >> val;
//			v.pb(val);
			sum = sum + val;
		}
		if(sum == 0) cout << 1 << ln;
		else if(((float)sum / (float)n) == 1.00000 ){
			cout << 0 << ln;
		}
		else if(sum < 0){
			cout << 1 << ln;
		}
		else{
			if(sum < n){
				cout << 1 << ln;
			}
			else{
				cout << sum - n << ln;
			}
		}
	}
	return 0;
}