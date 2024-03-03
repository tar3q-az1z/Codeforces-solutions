#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
typedef long long int lli;
typedef size_t idx;
int main(){
	int  t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n>=1 && n<= 3){
			cout << n-1 << endl;
			continue;
		}
		int cnt = 0;
		for(int i = 2; i*i <= n; ++i){
			if(n%i == 0){
				n = n/(n/i);
				++cnt; 
				i = 1;
			}
			else{
				--n; ++cnt; i = 1;
			}
		}
		if(n == 1){
			cout << cnt << endl;
		}
		else{
			cout << cnt + (n - 1) << endl;
		}
	}
	return 0;
}