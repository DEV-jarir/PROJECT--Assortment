#include<stdio.h>
main(){
	
	int i,j,row,col,a[10][10],rn,cn,sum=0,sum2=0;
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
	printf("Enter row number :");
	scanf("%d",&rn);
		if(rn >= row){
			printf("Enter valid row number .");
		}
		else{
			printf("Element of row %d :",rn);
			for(j=0;j<col;j++){
				printf("%d ",a[rn][j]);
				sum += a[rn][j];	
		}
		printf("\nSum of row %d : %d",rn,sum);
		printf("\n\n");
		printf("Enter column number :");
		scanf("%d",&cn);
		if(cn >= col){
			printf("Enter valid column number .");
		}
		else{
			printf("Element of column %d :",cn);
			for(i=0;i<row;i++){
				printf("%d ",a[i][cn]);
				sum2 += a[i][cn];	
		}
		printf("\nSum of column %d : %d",cn,sum2);
	}
 }
}
