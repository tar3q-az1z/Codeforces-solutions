#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long int lli;
typedef size_t idx;// <cstdio>


int main(){
	int t, a, b, c, d;
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d;
		int mx1 = max(a, b);
		int mx2 = max(c, d);
		int mn1 = min(a, b);
		int mn2 = min(c, d);
		if(mn1 > mx1 || mn2 > mx1 || mn1 > mx2 || mn2 > mx2){
			cout << "NO" << "\n";
		}
		else cout << "YES\n";
	}
	return 0;
}