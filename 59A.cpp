#include<iostream>
#include<string>
using namespace std;

int main(){
	string word;
	int up=0,low=0;
	cin>>word;
	for(int i=0;i<word.length();++i){
		if(word[i]>=65 && word[i]<=90){
			++up;
		}
		else if(word[i]>=97 && word[i]<=122){
			++low;
		}
	}
	if(up>low){
		for(int i=0;i<word.length();++i){
			if(word[i]>=97 && word[i]<=122){
				word[i]=(word[i]-97)+65;
			}
		}
		cout<<word<<"\n";
	}
	else if(up<=low){
		for(int i=0;i<word.length();++i){
			if(word[i]>=65 && word[i]<=90){
				word[i]=(word[i]-65)+97;
			}
		}
		cout<<word<<"\n";
	}
	return 0;
}

