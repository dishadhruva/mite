#include<stdio.h>
int searchlinear(float* salaries,int size,float searchsalary);

int main()
{
    float salaries[]={20.0f,10.0f,15.0f,12.0f,13.0f};
    int salariescount=5;
    float searchsalary=13.0f;
    int index=searchlinear(salaries,salariescount,searchsalary);
    printf("%.2f fount at index %d \n",searchsalary,index);
    return 0;
    }
    
int searchlinear(float* salaries,int size,float searchsalary)
{
    for(int i=0;i<size;i++)
    {
        if(salaries[i]==searchsalary)
        {
            return i;
        }
       
    }
     return -1;
}
















