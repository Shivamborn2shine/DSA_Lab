#include<stdio.h>
void addition_matrix(){
	//taking user input for row and columns r and c
	int r,c;
	printf("Enter the dimentions of you matrix for 3x4 type 3 4---here--->  ");
	scanf("%d%d",&r,&c);
	int array[r][c];
	int i,j;
	printf("Enter the no. of elements you want add-----> ");
	for(i=0; i< (r*c); i++){
		scanf("%d",&array[i/c][i%c]);
	}
	printf("\nThe matric you entered is here below:\n");
	
	for(i=0; i<r; i++){
		for (j = 0; j < c; j++){
		printf("%d ",array[i][j]);
	 }
	 printf("\n");
	}
	printf("\nsuccessfully executed the code\n");
}

int main()
{	
	int response = 1;
	while (response ==1){
	addition_matrix();
	printf("Do you want to do addition again type 1 for 'Yes' and 0 for 'No'\n");
	scanf("%d",&response);
	}
	return 0;
}
