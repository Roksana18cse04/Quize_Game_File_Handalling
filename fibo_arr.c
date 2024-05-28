#include<stdio.h>

int main(){
    int fibbo[40];
    int n,i;
    printf("Enter the number of term : ");
    scanf("%d",&n);

    fibbo[0]=0;
    fibbo[1]=1;

    for(i=2;i<n;i++){
        fibbo[i] = fibbo[i-1] + fibbo[i-2];

    }
    printf("\n");


    for(i=0;i<n;i++){
        printf("%d ",fibbo[i]);
    }

    return 0;

}
