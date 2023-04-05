#include<stdio.h>
#include<string.h>
int main(){
	int t,x,y,i,px,py,flag1,flag2,temp,l;
	char str[1000005];
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		getchar();
		scanf("%s",str);
		l=strlen(str);
		px=0;
		py=0;
		temp=0;
		flag1=0;
		flag2=0;
		for(i=0;i<l;i++){
			if(px==x && py==y){
				temp=1;
				break;
			}
			else if(str[i]=='R' && flag1==0){
				if(x>0){
					px++;
					if(px==x) flag1=1;
				}
			}
			else if(str[i]=='L' && flag1==0){
				if(x<0){
					px--;
					if(px==x) flag1=1;
				}
			}
			else if(str[i]=='U' && flag2==0){
				if(y>0){
					py++;
					if(py==y) flag2=1;
				}
			}
			else if(str[i]=='D' && flag2==0){
				if(y<0){
					py--;
					if(py==y) flag2=1;
				}
			}
		}
		if(px==x && py==y && temp==0) printf("YES\n");
		else if(temp==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}