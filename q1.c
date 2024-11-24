#include<stdio.h>

main(){
	
	int i,n,a[n];
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter array element :\n");
	for(i=0;i<n;i++){
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);	
	}
	printf("Negative element from the array : ");
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("%d ",a[i]);
		}	
	}
}
