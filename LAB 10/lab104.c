#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fptr;
	fptr=fopen("person.txt","w+");
	if (fptr==NULL){
		printf("Error Occured\n");
		exit(1);
	}
	char name[50];
	int age;
	float height;
	printf("Enter name age and height of a person: ");
	scanf("%s %d %f",name,&age,&height);
	fprintf(fptr,"Name:%s Age:%d Height:%.2f",name,age,height);
	rewind(fptr);
	fscanf(fptr,"Name:%s Age:%d Height:%f",name,&age,&height);
	printf("The contents of the file are:\n");
	printf("Name:%s\nAge:%d\nHeight:%.2f\n",name,age,height);
	fclose(fptr);
	return 0;
}
