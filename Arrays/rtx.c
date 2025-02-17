#include<stdio.h>
int main(){

    int sub1,sub2,sub3,sub4,sub5;

    printf("enter the 1 subject");
    scanf("%d",&sub1);
    printf("enter the 2 subject");
    scanf("%d", &sub2);
    printf("enter the 3 subject");
    scanf("%d", & sub3);
    printf("enter the 4 subject");
    scanf("%d", & sub4);
    printf("enter the 5 subject");
    scanf("%d", & sub5);
    int sumofresult=sub1+sub2+sub3+sub4+sub5;
    printf ("average of 5 subject is %d",sumofresult/500);
    return 0;
}