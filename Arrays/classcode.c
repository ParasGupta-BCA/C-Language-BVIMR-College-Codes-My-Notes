#include<stdio.h>
void main(){
int num[5];
printf("Enter the number ");
for (int i=0;i<5;i++){
    scanf("%d",(num[i]));
    printf("value of number is %d",i+1);
}
}