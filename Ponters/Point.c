#include <stdio.h>
int main()
{
    printf("Lets Learn About Pointers\n");
    int a = 78;
    int *ptra = &a;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The Value of a is %d\n", *ptra);
    printf("The Value of a is %d\n", a);
    printf("The address of a is %x\n", &a);
    return 0;
}