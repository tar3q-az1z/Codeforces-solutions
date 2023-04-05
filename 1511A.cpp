#include<iostream>
using namespace std;
int main(){
	int t,n,a,upvote,dwvote;
	cin>>t;
	while(t--){
		upvote=0;
		dwvote=0;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a;
			if(a==1){
				++upvote;
			}
			else if(a==2){
				++dwvote;
			}
			else{
				++upvote;
			}
		}
		cout<<upvote<<"\n";
	}
	return 0;
}