#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int left=1,right=1000000,query;
	//char reply[3];
	while(left<right){
		query=(left+right+1)/2;
		printf("%d\n",query);
		fflush(stdout);
		char reply[3];
		scanf("%s",reply);
		if(strcmp(reply,"<")==0) right=query-1;
		else left=query;
	}
	printf("! %d\n",left);
	fflush(stdout);
	return 0;
}