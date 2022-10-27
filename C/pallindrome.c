#include<stdio.h>
void main()
{  
    int long long num, rev=0, k, copy;
    scanf("Enter a number %u", &num);
    copy = num;
    while(num!= 0)
    {
        k= num%10;
        rev= rev*10+k;
        num /= 10;
    }

    if(rev == copy) {
	    printf("It is a pallindrome\n");
    } else {
	    printf("It is not a pallindrome\n");
    }
}
