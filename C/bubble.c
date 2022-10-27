#include<stdio.h>
int main()
{
    int i, n, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Number #%d: ", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
