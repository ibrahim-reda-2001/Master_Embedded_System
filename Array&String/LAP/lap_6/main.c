//  copy string
#include<stdio.h>
 int main(void){
	 char a[20]="ibrahim reda";
	 char b[20];
	 int i =0;
	 while(a[i]!='\0'){
		 b[i]=a[i];
		 i++;
	 }
	 b[i]=0;//that is because garabage  u must be at the end of array áÇÒã íßæä İ ÇáÇÎÑ ÕİÑ ÚÔÇä ÏÏå äåÇíå array
	 printf("%s \n" , b);

	 return 0;
 }
