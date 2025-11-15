#include<stdio.h>

int main()
{
    int arr[1000];int n;int i;int count_odd=0;int even_count=0;

    printf("\nenter the size of the array:");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Print array by user:\t");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        
        if(arr[i]%2!=0)
        {
            count_odd++;
        }
        
    }
    printf("\nthe number of even elements %d and number of odd elements %d",even_count,count_odd);

    return 0;
}