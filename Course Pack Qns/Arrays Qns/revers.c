// It Contains Error In Code...:(
// It Contains Error In Code...:(
// It Contains Error In Code...:(

#include<stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={5,4,3,2,1};
    int temp=arr1[5];
    arr1[5]=arr2[5];
    arr2[5]=temp;

for(temp=0;temp<5;temp++){
    printf("%d",temp);
}
return 0;
}