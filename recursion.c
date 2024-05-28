#include<stdio.h>
unsigned long long fibbo(int n);
unsigned long long fact(int n);
void print(int n);//function declaration
int main(){
    int n;
    unsigned long long fibbonacci;
    unsigned long long factorial;
    scanf("%d",&n);
    fibbonacci = fibbo(n);
    factorial = fact(n);
    printf("fibonacci last term %d id %llu \n",n,fibbonacci);
    printf("Factorial %d id %llu \n",n,factorial);
    print(n);
    return 0;
}
///function definetion 
void print(int n){
    printf("%d ",n);
    if(n<=1){
        return;//base case stop recursive
    }
    print(n-1);//recursive call
}

unsigned long long fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibbo(n-1)+fibbo(n-2);
    }
}


unsigned long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}