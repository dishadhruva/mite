#include<stdio.h>
struct  Employee_t{
    int id;
    char name[255];
    float salary;
    char department[50];
};

typedef struct Employee_t Employee;
void readEmployees(Employee emp[],int n);
void displayEmployees(Employee emp[],int n);
Employee findHighestSalary(Employee emp[],int n);

int main()
{
    int employeecount;
    printf("enter number of employee:");
    scanf("%d",&employeecount);
    Employee employees[1000];
    readEmployees(employees,employeecount);
    displayEmployees(employees,employeecount);
    Employee highestSalariedEmployee=findHighestSalary(employees,employeecount);
    printf("Employee with highest salary:%s\t%2f(%s)\n",highestSalariedEmployee.name,highestSalariedEmployee.salary,highestSalariedEmployee.department);
    return 0;
}

void readEmployees(Employee emp[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Employee %d detials:",i+1);
        printf("enter id:");
        scanf("%d",&emp[i].id);
        printf("\n enter name:");
        scanf("%50s",emp[i].name);
        printf("\n enter salary:");
        scanf("%f",&emp[i].salary);
        printf("\n enter department:");
        scanf("%50s",emp[i].department);
    }
    
}

void displayEmployees(Employee emp[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d employee:",i+1);
        printf("%d-%10s-%f-%10s\n",emp[i].id,emp[i].name,emp[i].salary,emp[i].department);
    }
}

Employee findHighestSalary(Employee emp[],int n)
{
   Employee highestSalaried=emp[0];
   for(int i=1;i<n;i++)
   {
       if(emp[i].salary>highestSalaried.salary)
       {
           highestSalaried=emp[i];
       }
   }
   return highestSalaried;
}















