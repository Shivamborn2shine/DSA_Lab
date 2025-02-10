#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    int arr1[50][50],arr2[50][50],mul[50][50];
    int i,j;
    int sum=0;
    int m=0;
    printf("Enter the dimentions of 1st array----here--> ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the dimentions of 2st array----here--> ");
    scanf("%d%d",&r2,&c2);
    //if statement here but after a execution
    printf("Enter the elements of the 1st matrice---here-->");
  for(i=0; i< (r1*c1); i++){
		scanf("%d",&arr1[i/c1][i%c1]);
  }
    printf("\nEnter the elements of the 2nd matrice---here-->");
  for(i=0; i< (r2*c2); i++){
    scanf("%d",&arr2[i/c2][i%c2]);
  }

printf("\nNow we have the matrices you entered as follows \n");
printf("1st matrice\n");
 for(i=0; i< (r1*c1); i++){
		printf("%d",arr1[i/c1][i%c1]);
        if(i%c1==c1-1){
                printf("\n") ;
                }
 }
 printf("2nd matrice\n");
 for(i=0; i< (r2*c2); i++){
		printf("%d",arr2[i/c2][i%c2]);
        if(i%c2==c2-1){
                printf("\n") ;
                }
 }
 printf("Now Processing the multiplication of the matrices is :\n");
for(i=0; i<(r1*c1); i++){
         printf("%d",sum);
       sum = sum + (arr1[i/c1][i%c1] * arr2[i/c2][i%c2]);
        if(i%c1==c1-1){
                mul[m/c2][m%c2] =   sum;   //m is index or iterative for mul as i is being used
                sum = 0;
                printf("\n1 row done\n") ;
                }
    }
    printf("multiplication of  the matrices is as follows\n");
 for(i=0; i< (r1*c2); i++){
		printf("%d",arr1[i/c2][i%c2]);
        if(i%c2==c2-1){
                printf("\n") ;
                }
 }

return 0;
}
