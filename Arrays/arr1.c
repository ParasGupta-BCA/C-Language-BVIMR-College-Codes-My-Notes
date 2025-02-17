#include <stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main()
{
    int i;
    struct marks student[3];
    {
        for (i = 0; i <= 2; i++)
        {
            student[i].total =
                student[i].sub1 +
                student[i].sub2 +
                student[i].sub3;
        }
        printf("Displaying Information \n");
        for (i = 0; i < 2; ++i)
        {
            printf("\n Marks :%d", i + 1);
        }
    };
    return 0;
}