#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>vi(n);
		for(auto& i : vi){
			cin >> i;
		}
		int min = vi[0];
		for(auto i : vi){
			if(i < min) min = i;
		}
		int cnt = 0;
		for(auto i : vi){
			if(i > min) ++cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}