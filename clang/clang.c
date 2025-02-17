#include<stdio.h>
int main(){
    int i,j,tmp,num[5]={20,15,30,40,5}
    clrscr();
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(num[j]<num[i]){
                tmp=num[i];
                num[i]=num[j];
                num[j]=tmp;}
            }
            
        }
for(i=0;i<5;i++){
    printf("%d\n",num[i]);
    getch();
}
}

