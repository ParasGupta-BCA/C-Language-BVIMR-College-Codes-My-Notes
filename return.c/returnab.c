#include<stdio.h>
void sum();
void main(){
    printf("\n Calculate the sum of two numbers");
    sum();
}
void sum(){
    int a,b;

    printf("\n Enter the First Number");
    scanf("%d",&a);

    printf("\n Enter the Second Number");
    scanf("%d",&b);

    printf("Sum Of Number Is:- %d",a+b);
}

// int main(){
//     printf("\nEnter Two Numbers ")
// }
