//convert lower to upper

#include<stdio.h>
#include <string.h>
 int main(void){
	 char a[20]="ibrahim reda";//lower
	 char b[20]="eLMSERY";//upper

	for(int i=0;a[i]!='\0';i++){
	if(a[i]>=97&&a[i]<123){
		a[i]-=32;
	}
	}
printf("%s \n",a);
for(int i=0;b[i]!='\0';i++){
	if(b[i]>=65&&b[i]<91){
		b[i]+=32;
	}


	}

printf("%s \n",b);

	 return 0;
 }
