// Write a C program to search an element in a 2D-Array using dynamic memory
// allocation.
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void main()
{
    int i, n, m, j, num, c=0;
    printf("Enter the dimensions: ");
    scanf("%d%d", &n, &m);
    int *p[n];
    for(i=0;i<n;i++)
    {
        p[i]=(int*)calloc(m, sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Number: ");
            scanf("%d", &p[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ", p[i][j]);
        }
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
              if(p[i][j]==num) 
            {
                c++;
		goto done;
            }
        }
    }
   done:
    if (c) {
    	printf("Element found at %d,%d\n", i,j);
    } else {
	    printf("Element not found\n");
    }

}
