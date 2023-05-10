#include<stdio.h>
#define size 5
int main( void){

float degree[size];
//float average;
float sum=0;

for(int i =1;i<size+1;i++){
	printf("Enter student  num %d degree \n",i);
	fflush(stdout);fflush(stdin);
	scanf("%f",&degree[i-1]);
}
for(int i=0;i<size;i++){
	printf("the student %d degree is %.2f \n",i+1,degree[i]);
	fflush(stdout);fflush(stdin);
	sum+=degree[i];
}

printf("the total  equal %.3f\n",sum);
printf("the AVG  equal %.3f\n",sum/size);

	return 0;
}
