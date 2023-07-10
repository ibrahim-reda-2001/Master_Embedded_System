#include<stdio.h>

int main(void){
int arr[15],n;
int *ptr=arr;
printf("Input the number of elements to store in the array (max 15)\n");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("element -  %d ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%d",ptr);
	ptr++;
}
printf("The elements of array in reverse order are : \n");
ptr=&arr[n-1];
for(int i=n;i>0;i--){
 	printf("element -  %d : %d\n",i,*ptr);
 	ptr--;


}

	return 0;
}
