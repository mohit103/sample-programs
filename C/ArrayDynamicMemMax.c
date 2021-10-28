// Write a C program to find the 3rd maximum element in an array using dynamic
// memory allocation.
#include<stdlib.h>
#include<stdio.h>
int main()
{   
    int n, i, f, s=0, t=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int *p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Number: ");
        scanf("%d", p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", p[i]);
    }
    f=p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]>f)
        {
            t=s;
            s=f;
            f=p[i];
        }
        else if(p[i]>s)
        {
            t=s;
            s=p[i];
        }
        else if(p[i]>t) t=p[i];
    }
    printf("\nThird largest element: %d", t);
    return 0;
}
