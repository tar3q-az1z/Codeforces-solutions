#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int top=0;
char st1[60],st2[60],st3[60],st4[60];
void push(char *brac){
	st1[top]=*brac;
	++top;
}
void push2(char *brac){
	st2[top]=*brac;
	++top;
}
void push3(char *brac){
	st3[top]=*brac;
	++top;
}
void push4(char *brac){
	st4[top]=*brac;
	++top;
}
void pop(){
	--top;
}
int main(){
	int t,i;
	//string str;
	char b1,b2,b3,str[60],brac1[60],brac2[60],brac3[60],brac4[60];
	bool flag1=true,flag2=true,flag3=true,flag4=true;
	cin>>t;
	getchar();
	while(t--){
		//cin.getline(str,60);
		scanf("%s",str); 
		b1=str[0];
		for(i=1;i<strlen(str);++i){
			if(str[i]!=b1){
				b2=str[i];
				break;
			}
		}
		for(;i<strlen(str);++i){
			if(str[i]!=b1 && str[i]!=b2){
				b3=str[i];
				break;
			}
		}
		for(i=0;i<strlen(str);++i){
			if(str[i]==b1){
				brac1[i]='(';brac2[i]='(';brac3[i]='(';brac4[i]='(';
			}
			else if(str[i]==b2){
				brac1[i]=')';brac2[i]=')';brac3[i]='(';brac4[i]='(';
			}
			else{
				brac1[i]='(';brac2[i]=')';
				brac3[i]='(';brac4[i]=')';
			}
		}
		for(i=0;i<strlen(str);++i){
			if(brac1[i]=='('){
				push(&brac1[i]);
			}
			else if(brac1[i]==')'){
				if((top==0) || (st1[top-1]!='(')){
					//flag1=false;
					top=-1;
					break;
				}
				else{
					pop();
				}
			}
		}
		if(top==0){
			flag1=true;
			top=0;
		}
		else{
			flag1=false;
			top=0;
		}
		
		for(i=0;i<strlen(str);++i){
			if(brac2[i]=='('){
				push2(&brac2[i]);
			}
			else if(brac2[i]==')'){
				if((top==0) || (st2[top-1]!='(')){
					//flag2=false;
					top=-1;
					break;
				}
				else{
					pop();
				}
			}
		}
		if(top==0){
			flag2=true;
			top=0;
		}
		else{
			flag2=false;
			top=0;
		}
		
		for(i=0;i<strlen(str);++i){
			if(brac3[i]=='('){
				push3(&brac3[i]);
			}
			else if(brac3[i]==')'){
				if((top==0) || (st3[top-1]!='(')){
					//flag2=false;
					top=-1;
					break;
				}
				else{
					pop();
				}
			}
		}
		if(top==0){
			flag3=true;
			top=0;
		}
		else{
			flag3=false;
			top=0;
		}
		
		for(i=0;i<strlen(str);++i){
			if(brac4[i]=='('){
				push4(&brac4[i]);
			}
			else if(brac4[i]==')'){
				if((top==0) || (st4[top-1]!='(')){
					//flag2=false;
					top=-1;
					break;
				}
				else{
					pop();
				}
			}
		}
		if(top==0){
			flag4=true;
			top=0;
		}
		else{
			flag4=false;
			top=0;
		}
		
		if(flag1 || flag2 || flag3 || flag4) cout<<"YES\n";
		else cout<<"NO\n";
		
		//brac1[strlen(brac1)]='\0';
		//brac2[strlen(brac2)]='\0';
		//fflush(stdout);//
		//fflush(stdin);
	}
	return 0;
}

