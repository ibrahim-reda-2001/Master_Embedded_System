#include <stdio.h>
#define size1 3
#define size2 3

int main(void){

	int arr[size1][size2];
	int t[size1][size2];

	for(int i =0 ;i<size1;i++){
		for(int j=0;j<size2;j++){
			printf("Enter the item (%d,%d) : " ,i,j);
			fflush(stdout);fflush(stdin);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i =0 ;i<size1;i++){
			for(int j=0;j<size2;j++){
				printf("  %d  " ,arr[i][j]);

			}
			printf("\n");
		}
	printf("the tramspose matrix is : \n");
	for(int i =0 ;i<size1;i++){
				for(int j=0;j<size2;j++){
					t[i][j]=arr[j][i];

				}

			}
	for(int i =0 ;i<size1;i++){
				for(int j=0;j<size2;j++){
					printf("  %d  " ,t[i][j]);

				}
				printf("\n");
			}


	return 0;
}
