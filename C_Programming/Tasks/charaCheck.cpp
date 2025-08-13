#include<stdio.h>

int main(){
	
	char ch;
	
	printf("Enter the character: ");
	
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("Character is lower case.");
	}else if(ch>='A' && ch<='Z'){
		printf("Character is Upper case.");
	}else if(ch>='0' && ch<='9'){
		printf("Character is Number.");
	}else{
		printf("Character is special character.");
	}
	
	return 0;
}
