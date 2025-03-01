#include <stdio.h>
int main(){
	int k;
	int i=1;
	double sum=0;
	scanf("%d",&k);
	do{
		sum+=1.0/i;
		i++;
		
	}while(sum<k);
	printf("%d",i);
return 0;
} 

