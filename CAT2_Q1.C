//c structure named employee
/*
Name : George Waweru Muriuki
Reg No :CT101/G/23698/24
*/
#include <stdio.h>
#include <string.h>
struct employee{
	char name [25];
	int id ;
	char depertment [20];
	float salary;
	char email [50];
}e1;


int main() {
	strcpy(e1.name , "John Doe");
	e1.id = 12345;
	strcpy(e1.depertment , "Human Resource");
	e1.salary = 55000.50;
	strcpy(e1.email, "john.doe@company.com");
	
	printf("Name :%s\n" ,e1.name);
	printf("ID :%d\n",e1.id);
	printf("Depertment :%s\n",e1.depertment);
	printf("Salary :%.2f\n",e1.salary);
	printf("Email : %s\n",e1.email);
	return 0;
}