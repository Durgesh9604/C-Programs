#include<stdio.h>

int main()
{
    int arr[1000];int n;int i ;
    int max;int min;
    printf("szie of the array");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array given by user:");
    for (i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for (i = 0;i<n;i++)
    {
        max=arr[0];
        min=arr[0];
        if(arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}