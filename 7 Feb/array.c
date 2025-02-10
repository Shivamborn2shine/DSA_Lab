#include<stdio.h>
int main()
{	
	int array[50];
	int i,n;
	printf("Enter the no. of elements you want add-----> ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
	printf("\nThe elements you enter are here below:\n");
	for(i=0; i<n; i++){
		printf("%d ",array[i]);
	}
	printf("\nsuccessfully executed the code\n");
	return 0;
}
