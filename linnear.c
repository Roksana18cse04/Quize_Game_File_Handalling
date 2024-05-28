#include<stdio.h>


int main(){
    int num[100];
    int n,i;
    printf("Enter the number  : ");
    scanf("%d",&n);


    int value;

    int position = -1;
    printf("Array input : ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    printf("Check the number : ");
    scanf("%d",&value);

    for(i=0;i<n;i++){
        if(value==num[i]){
            position=i+1;
            break;
        }
    }

    if(position==-1){
        printf("Not Found\n");
    }
    else{
        printf("Found\n");
    }

    return 0;


}