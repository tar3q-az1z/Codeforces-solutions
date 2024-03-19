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
	int t, n ;
	string s;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		bool temp = false;
		bool temp1 = false;
		for(int i = 0; i < n - 1; ++i){
			bool flag = false;
			for(int j = i + 1; j < n; ++j){
				if(s[i] == s[j] && flag == true){
					temp1 = true;
					cout << "NO\n";
					break;
				}
				if(s[i] != s[j]){
					flag = true;
				}
			}
			if(temp1 == true){
				temp = true;
				break;
			}
		}
		if(!temp){
			cout << "YES\n";
		}
	}
	return 0;
}
