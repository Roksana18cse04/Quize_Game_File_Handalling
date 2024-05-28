#include<stdio.h>

int main(){
    int array1[]={10,20,30,49,67},array2[5];
    printf("Array 1 : ");
    for(int i=0;i<5;i++){
        printf("%d ",array1[i]);
    }

    for(int i=0;i<5;i++){
        array2[i]=array1[i];
        
    }
printf("\nArray 2 : ");
    for(int i=0;i<5;i++){
          printf("%d ",array2[i]);
        
    }
  printf("\n");
}