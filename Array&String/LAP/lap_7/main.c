//  length string
#include<stdio.h>
#include <string.h>
 int main(void){
	 char a[20]="ibrahim reda";
	int counter=0;
	for(int i=0;a[i]!='\0';i++){
		counter++;
	}

	printf("The length  of word  : %d \n",counter);
	printf("The length  of word  : %d \n",strlen(a));

	 return 0;
 }
