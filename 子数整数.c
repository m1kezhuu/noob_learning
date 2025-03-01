//例如，五位数 20207 可以拆分成sub 1=202，sub 2=020 (=20) sub 3=207
//现在给定一个正整数 K，要求你编程求出 10000 到 30000 之间所有满足下述条件的五位数，条件是这些五位数的三个子数 sub 1,sub 2,sub 3都可被 K 整除。
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
