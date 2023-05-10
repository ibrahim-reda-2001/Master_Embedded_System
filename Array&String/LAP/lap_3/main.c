#include <stdio.h>
#define size 5
int main(void){
 float x[size]={1,2,3,4,5};
float y;
 for(int i=0;i<size;i++){
	 y=5*x[i]+x[i]+3*x[i]+2;
	 printf("the y(%.2f) equal %.3f\n",x[i],y);
 }


	return 0;
}
