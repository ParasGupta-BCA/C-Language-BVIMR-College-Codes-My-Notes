#include<stdio.h>
int main(){
int num,i;
scanf("enter the number:- ",&i);
for (i=0;i<10;i++){
    
    if (i==0)
    {
        printf("%d\n",i);
        goto end;
    }

}
end:
return 0;
}
