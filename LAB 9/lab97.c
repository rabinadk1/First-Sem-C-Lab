#include <stdio.h>
typedef union
{
	char name[20];
	unsigned roll;
}stud;
typedef enum {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday} days;
int main()
{
	stud std;
	days Weekday=Sunday;
	printf("Enter name: ");
	scanf("%s",std.name);
	printf("Student's name is: %s\n",std.name);
	printf("Enter Roll Number: ");
	scanf("%u",&std.roll);
	printf("Student's name is: %u\n",std.roll);
	printf("Weekdays are:\n");
	printf("Sunday: %d\n",Sunday);
	printf("Monday: %d\n",Monday);
	printf("Tuesday: %d\n",Tuesday);
	printf("Wednesday: %d\n",Wednesday);
	printf("Thursday: %d\n",Thursday);
	printf("Friday: %d\n",Friday);
	printf("Saturday: %d\n",Saturday);
	printf("Weekday: %d\n",Weekday);
	return 0;
}
