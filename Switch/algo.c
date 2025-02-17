#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("Enter Value For N");
    scanf("%d",&n);
    while (i<=n){
        fact=fact*i;
        i=i+1;
    }
    printf("Factorial: %d\n",fact);
    return 0;
    }