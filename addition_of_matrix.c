#include<stdio.h>
int main()
{	//taking user input for row and columns r and c
	int r1,c1,r2,c2;
	printf("Enter the dimentions of you matrix for 3x4 type like this 3 4  \n");
	
	printf("enter the dimentions of 1st matrix---here below---> \n");
	scanf("%d%d",&r1,&c1);
	printf("enter the dimentions of 2nd matrix---here below---> \n");
	scanf("%d%d",&r2,&c2);
	
	int array1[r1][c1];
	int array2[r2][c2];
	
	int i,j; //for printing matrix we initialized
	
	if(r1==r2 & c1==c2){
		printf("Enter the no. of elements you want add in 1st matrix-----> ");
		for(i=0; i< (r1*c1); i++){
			scanf("%d",&array1[i/c1][i%c1]);
		}
		
		printf("Enter the no. of elements you want add in 2nd matrix-----> ");
		for(i=0; i< (r2*c2); i++){
			scanf("%d",&array2[i/c2][i%c2]);
		}
		
		printf("\nThe the addition of 2 matrices you entered is here below:\n");
		
		for(i=0; i<r1; i++){
			for (j = 0; j < c1; j++){
			printf("%d ",array1[i][j] + array2[i][j] );
		 }
		 printf("\n");
		}
		printf("\nsuccessfully executed the code\n");
		}
	else{  printf("Enter valid dimentions\n");	}
		
	return 0;
}
