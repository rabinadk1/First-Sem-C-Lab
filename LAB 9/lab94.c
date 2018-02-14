#include <stdio.h>
typedef struct {
	char name[50],address[200];
	long long phone;
	unsigned employee_no;
}company;
void display(company*);
int main()
{
	company c;
	printf("Enter the name, address, phone number and number of employee: ");
	scanf("%[^\n] %[^\n] %lld %u",c.name,c.address,&c.phone,&c.employee_no);
	display(&c);
	return 0;
}
void display(company* c)
{
	printf("The details of company are:\n");
	printf("Name: %s\nAddress: %s\nPhone Number: %lld\nNumber of Employees: %u",c->name,c->address,c->phone,c->employee_no);
}
