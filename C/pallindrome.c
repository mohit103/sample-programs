#include<stdio.h>
void main()
{  
    int num, rev=0, k, onum;
    printf("Enter a number: ");
    scanf("%d", &num);
    onum=num;
    while(num!=0)
    {
        k= num%10;
        rev= rev*10+k;
        num/=10;
    }
    if(rev==onum) printf("It is a pallindrome\n");
    else printf("It is not a pallindrome\n");
}
