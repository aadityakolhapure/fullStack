#include<stdio.h>
int main(){
	
	int start;
	int end;
	
	
	printf("enter the starting of loop: ");
	scanf("%d",&start);
	
	printf("\n enter the ending of loop: ");
	scanf("%d",&end);
	
	for(int i = start;i<=end;i++){
		printf("%d\t",i);
	}
}
