#include<stdio.h>
int main(){
    int Marks;
    printf("Enter Your Marks:- ");
    scanf("%d",&Marks);
    
if (Marks<=27)
{
    printf("Failed In Paper");
}

else if (Marks>=28)
{
    printf("Passed In Paper");
}

    switch (Marks)
    {

    case 50:
    {
        printf("Average :) Scored In Paper");
        break;
    }
    case 60:
    {
        printf("Average ;) Scored In Paper");
        break;
    }
    
    case 70:
    {
        printf("Good :-) Scored In Paper");
        break;
    }

}
}