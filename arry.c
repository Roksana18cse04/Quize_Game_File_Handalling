#include<stdio.h>
#define MAX_SIZE 1000


int main(){
    int arr[5]={1,89,67,45,8};// array declieare
    int n;
    int array[MAX_SIZE];
    int index;

    scanf("%d",&n);

    for(index=0;index<n;index++){
        scanf("%d",&array[index]);
    }

    for(index=0;index<n;index++){
        printf("%d ",array[index]);
    }
printf("\n");
    printf("Array [0] = %d ",arr[0]);
    printf("Array [0] = %d ",arr[1]);
    return 0;

}