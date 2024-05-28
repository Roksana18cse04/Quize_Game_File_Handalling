#include<stdio.h>

int main(){
    int a[4]={10,20,40,30};
    int b[6];
    int sum,s;
    sum=0;
    s=0;
    for(int i=0;i<6;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<4;i++){
        sum = sum + a[i];
    }

    for(int i=0;i<6;i++){
        s = s + b[i];
    }
    printf("Sum of array : %d\n",sum);
    printf("Sum of array of b = %d\n",s);
    
}