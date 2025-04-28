#include <stdio.h>
struct student
{
	int rno;
	char name[50];
	float marks;
};  //colon lagao

int main(){
	int i,n;
	struct student st[50];
	
	
	printf("enter no. of students you wanna store record of\n");
	scanf("%d",&n);
	
	for ( i = 0; i<n; i++){
	printf("enter the details of student %d\n",i+1);	
	printf("enter name-->");
	scanf("%s",st[i].name);   //Fixed: no & needed here for strings
	printf("\nenter marks--->");
	scanf("%f",&st[i].marks);
	//i will add roll no. later
	}
	printf("\ndone taking records\n");
	
	printf("\nprinting the records in ascending order\n");
	
	// Sort students based on names (ascending order)
	struct student temp;
	for (int i = 0; i < n - 1; i++) {
	 for (int j = i + 1; j < n; j++) {
	    if (st[i].marks > st[j].marks) {
		// Swap students[i] and students[j]
		temp = st[i];
		st[i] = st[j];
		st[j] = temp;
	    }
	}
	}
	
	for ( i = 0; i<n; i++){
	printf("\ndetails of student in ascending order %d\n");	
	printf("name --> %s",st[i].name);
	printf("marks -->%.2f",st[i].marks);
	}
	
	return 0;
}
