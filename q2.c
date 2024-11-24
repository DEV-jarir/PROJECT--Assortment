#include<stdio.h>
int main(){

	int i,j,large,row,col,a[10][10];
	printf("Enter the size of Array Row :");
	scanf("%d",&row);
	printf("Enter the size of Array Col :");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	large = a[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(large<a[i][j]){
				large = a[i][j];
			}
		}
	}
	printf("Largest element is %d",large);
}
