#include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age\n");
    scanf("%d",&age);
    printf("You Have Entered %d As Your Age\n",age);
    if (age>=18){
        printf("Elegble For Vote!");
    }

    else if(age>=10){
        printf("You Are Not Elegble For Vote Because Your age is Between 10 to 18 ");
    }

    else {
        printf("Not Elegble For Vote!");
    }

}