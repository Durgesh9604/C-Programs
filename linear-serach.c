#include<stdio.h>

int main()
{
    int arr[1000]; 
    int n, key, found = 0, i;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array entered by the user:\t");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the value you want to find: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Value %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Value %d not found at any index\n", key);
    }

    return 0;
}
