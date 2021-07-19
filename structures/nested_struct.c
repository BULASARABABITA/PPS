#include<stdio.h>
struct student
{
	char name[50];
	int Rno;
	struct bdate
	{
		int day,month,year;
	}d1,d2;
}s1,s2;
int main()
{
  printf("Enter name of student1 :  ");
  scanf("%s",s1.name); 
  printf("\nEnter roll number of student1 :  ");
  scanf("%d",&s1.Rno);
  printf("\nEnter the date of birth of student 1 (DD MM YY) :");
  scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
  printf("\nEnter name of student2 :  ");
  
  scanf("%s",s2.name);
  printf("\nEnter roll number of student1 :  ");
  scanf("%d",&s2.Rno);
  printf("\nEnter the date of birth of student 1 (DD MM YY) :");
  scanf("%d %d %d",&s2.d2.day,&s2.d2.month,&s2.d2.year);
  printf("\n%4d  %4s     %d-%d-%d",s1.Rno,s1.name,s1.d1.day,s1.d1.month,s1.d1.year); 
  printf("\n%4d  %4s     %d-%d-%d",s2.Rno,s2.name,s2.d2.day,s2.d2.month,s2.d2.year);
  return 0; 	
}

