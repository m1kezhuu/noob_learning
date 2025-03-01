#include <stdio.h>
int main(){
	int i,L,R,temp;
	int t;
	scanf("%d %d",&L,&R);
	i=L;
	int num=0;
	while(i<=R){
		t=10;
		temp=i;
		while(t<=10000){
			if(temp%t==2){
				num++; 
				temp/=10;	
			}
		i++;	
		}
	}
	printf("%d",num);
return 0;
} 
