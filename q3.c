#include<stdio.h>
int main(){
	
	int i,j,row,col,a[2][2];
	printf("Enter the size of array row :");
	scanf("%d",&row);
	printf("Enter the size of array col :");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			printf("%d  ",a[i][j]);	
		}
		printf("\n");
	}
}
