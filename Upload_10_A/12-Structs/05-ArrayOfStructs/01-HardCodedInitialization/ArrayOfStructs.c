#include <stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char name[NAME_LENGTH];
	int age;
	float salary;
	char sex;
	char marital_status[MARITAL_STATUS];
};

int main(void)
{
	//variable declaration
	struct Employee Employee_record[5];

	char employee_rajesh[] = "Rajesh";
	char employee_samir[] = "Samir";
	char employee_kalyani[] = "Kalyani";
	char employee_sonali[] = "Sonali";
	char employee_satvik[] = "Satvik";

	int i;

	//code
	//Employee 1
	strcpy(Employee_record[0].name, employee_rajesh);
	Employee_record[0].age = 30;
	Employee_record[0].salary = 50000.0f;
	Employee_record[0].sex = 'M';
	strcpy(Employee_record[0].marital_status, "Unmarried");

	//eMPLOYEE 2
	strcpy(Employee_record[1].name, employee_samir);
	Employee_record[1].age = 32;
	Employee_record[1].salary = 100000.0f;
	Employee_record[1].sex = 'M';
	strcpy(Employee_record[1].marital_status, "Married");

	//Employee 3
	strcpy(Employee_record[2].name, employee_kalyani);
	Employee_record[2].age = 24;
	Employee_record[2].salary = 20000.0f;
	Employee_record[2].sex = 'F';
	strcpy(Employee_record[2].marital_status, "Married");

	//Employee 4
	strcpy(Employee_record[3].name, employee_sonali);
	Employee_record[3].age = 23;
	Employee_record[3].salary = 60000.0f;
	Employee_record[3].sex = 'F';
	strcpy(Employee_record[3].marital_status, "Unmarried");

	//Employee 5
	strcpy(Employee_record[4].name, employee_satvik);
	Employee_record[4].age = 32;
	Employee_record[4].salary = 555000.0f;
	Employee_record[4].sex = 'M';
	strcpy(Employee_record[4].marital_status, "Married");

	//Display
	printf("\n\n");
	printf("*****DISPLYAING EMPLOYEE RECORDS");
	for (i = 0; i < 5; i++)
	{
		printf("*****EMPLOYEE NUMBER %d*****\n\n", (i + 1));
		printf("Name : %s\n", Employee_record[i].name);
		printf("Age  : %d\n", Employee_record[i].age);
		printf("Salary : %f\n", Employee_record[i].salary);
		
		if (Employee_record[i].sex == 'M')
			printf("Sex : Male\n");
		else
			printf("Sex : Female\n");
		printf("Marital_status : %s\n", Employee_record[i].marital_status);

		printf("\n\n");
	}

	return(0);
}
