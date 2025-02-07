#include<stdio.h>
int main()
{	//taking 3x4 matrix
	int array[3][4] = {1,2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6};
	int i,j;
	printf("\nThe matric you entered is here below:\n");
	
	for(i=0; i<3; i++){
		for (j = 0; j < 4; j++){
		printf("%d ",array[i][j]);
	 }
	 printf("\n");
	}
	printf("\nsuccessfully executed the code\n");
	return 0;
}
