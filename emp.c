#include<stdio.h>
struct employee
{
    int age, phone number,salary;
    char name[25];
}emp[20];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as  name , age , phonr number,salary\n");
    for(i=0;i<n;i++)
    {
        scanf(" %s %d %d %d",&emp[i].name,emp[i].age,&emp[i].phone number,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_AGE\tEMP_PHONR NUMBER\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].NAME,emp[i].age,emp[i].phone number,emp[i].salary);
    }
      
}
  
