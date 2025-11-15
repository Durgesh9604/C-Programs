#include<stdio.h>

int main()
{
    int marks[1000];int n;int i;

    printf("\nenter the number of students:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("\nstudent marks[]:");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",marks[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(marks[i]<35)
        {
            printf("student failed roll number:%d\n",i);
        }
    }
    if(marks[i]>35)
    {
        printf("ELse ALL STUDENT ARE PASSED");
    }

    return 0;
    
}