#include<stdio.h>
int max(){
    int num1,num2;
    int result;
    printf("Enter The 1 Number ");
    scanf("%d",&num1);
    printf("Enter The 2 Number ");
    scanf("%d",&num2);
    if(num1>num2){
        result=num1;
    }
    else{
        result=num2;
    }
    printf("Max Number Is %d",result);
    return 0;
}