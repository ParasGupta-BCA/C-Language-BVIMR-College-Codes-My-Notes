#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d",&num);
    
    while (num!=0);
    {
        sum+=num%10;
        num=num/10;
    }
    return 0;
}