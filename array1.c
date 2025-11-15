#include<stdio.h>
int main()
{
    int arr[1000];int i;int n;
    printf("\nenter the range of the array:");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array:");
    for(i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}