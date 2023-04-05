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
	int size;
	string s;
	cin >> s;
	size = s.length();
	if(size % 2 == 0){
		cout << s[size / 2 - 1] << s[size / 2];
		for(int i = size / 2 - 2, j = size / 2 + 1; i >= 0; --i, ++j){
			cout << s[i] << s[j];
		}
		newline;
	}else{
		cout << s[size / 2];
		for(int i = size / 2 + 1, j = size / 2 - 1; i < size; ++i, --j){
			cout << s[i] << s[j];
		}
		newline;
		
	}
	return 0;
}