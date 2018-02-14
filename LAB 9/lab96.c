#include <stdio.h>
typedef struct
{
	char name[20],address[50];
	unsigned age;
	float avg;
}std;
void display(std []);
int main()
{
	std stud[12];
	printf("Enter name, address, age and average marks scored of 12 students:\n");
	for(int i=0;i<12;i++){
		scanf("%[^\n] %[^\n] %u %f",stud[i].name,stud[i].address,&stud[i].age,&stud[i].avg);
		getchar();
	}
	display(stud);
	return 0;
}
void display(std stud[])
{
	printf("The details of the students are:\n\n");
	for(int i=0;i<12;i++)
		printf("Name:%s\nAddress:%s\nAge:%u\nAverage Marks:%.2f\n\n",stud[i].name,stud[i].address,stud[i].age,stud[i].avg);
}
