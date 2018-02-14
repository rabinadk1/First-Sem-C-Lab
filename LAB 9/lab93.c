#include <stdio.h>
typedef struct
{
	char name[50];
	unsigned roll;
}std;
std func(std);
int main()
{
	std stud1,stud2;
	printf("Enter the name and roll number of student: ");
	scanf("%[^\n] %u",stud1.name,&stud1.roll);
	stud2=func(stud1);
	printf("The details of second student are:\nName: %s\nRoll Number: %u",stud2.name,stud2.roll);
	return 0;
}
std func(std stud)
{
	stud.roll++;
	return stud;
}
