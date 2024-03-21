// Author : Mars_Coder
// Date   : 18/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define print(x) cerr << #x << " : " << x << ln;
int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	string s;
	cin >> s;
	if(s.size() < 3){cout << s << ln; return 0;}
	if(s.size() == 3){
		if(s[0] == 'W' && s[1] == 'U' && s[2] == 'B'){s.clear(); cout << s << ln;}
		else cout << s <<  ln;
		return 0;
	}
	string temp_string;
	int i;
	bool flag = 0;
	int cnt = 0;
	for(i = 0; i < (s.size()) - 2; ++i){
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
			if((i != s.size() - 3) & (flag) && cnt < 2) temp_string.push_back(' ');
			i += 2;
			++cnt;
		}else {temp_string.push_back(s[i]); flag = 1; cnt = 0; s[i] = '0';}
	}
	print(temp_string);
	int sz = s.size();
	string add;
	print(s[sz - 1]);
	for(i = sz - 1; i >= 2; --i){
		if(s[i] == 'B' && s[i - 1] == 'U' && s[i - 2] == 'W' || (s[i] == '0')) break;
		else add.push_back(s[i]);
	}
	print(add);
	reverse(add.begin(), add.end());
	print(add);
	temp_string += add;
	for(i = temp_string.size() - 1; i >= 0; --i){
		if(temp_string[i] == ' '){
			temp_string.pop_back();
		}else break;
	}
	print(temp_string);
	cout << temp_string << ln;
	return 0;
}
