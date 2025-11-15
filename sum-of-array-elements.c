#include<stdio.h>

int main()
{
    int n;int arr[1000];int i;int sum = 0;

    printf("\nsize of the array:");
    scanf("%d",&n);

    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("array entered by the user:\t");
    for(i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
        
    }
    printf("\nSum of all elements=>%d",sum);
    return 0;
    
}