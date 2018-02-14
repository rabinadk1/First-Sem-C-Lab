#include <stdio.h>
struct company {
	char name[50],address[200];
	long long phone;
	unsigned employee_no;
};

int main()
{
	struct company c;
	printf("Enter the name, address, phone number and number of employee: ");
	scanf("%[^\n] %[^\n] %lld %u",c.name,c.address,&c.phone,&c.employee_no);
	printf("The details of company are:\n");
	printf("Name: %s\nAddress: %s\nPhone Number: %lld\nNumber of Employees: %u",c.name,c.address,c.phone,c.employee_no);
	return 0;
}
