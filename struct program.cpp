#include<stdio.h>
struct student
{
	int rollno;
	char name;
	float per;
};s1={101,"gaswanth",98.00},s2;
int main()
{
	struct student
	s3={103,"sreeja",99.00},s4;
	s2.rollno=134;
	strcpy(s2.name,"bhavya");
	s2.per=67.00;
	printf("enter s4 rollno");
	scanf("%d",&s4 rollno);
	printf("%s",&s4 name);
	scanf("%f",&s4 per);
	printf("%d%s%f",s1.rollno,s1.name,s1.per);
	printf("%d%s%f",s2.rollno,s2.name,s2.per);
	printf("%d%s%f",s3.rollno,s3.name,s3.per);
	printf("%d%s%f",s4.rollno,s4.name,s4.per);
	return 0;
}
