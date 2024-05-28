/*
range with prime number with using function
*/

#include<stdio.h>
#include <stdbool.h>

bool isPrime(int num);
void printPrimes(int lower_limits,int upper_limits);

int main(){
    int upper_limits,lower_limits;

    printf("Enter range : ");
    scanf("%d%d",&lower_limits,&upper_limits);
    printPrimes(lower_limits,upper_limits);


    return 0;
}

bool isPrime(int num){
    int i;
    if(num==1){
        return false;
    }
    if(num==2){
        return true;
    }
    if(num%2==0){
        return false;
    }
    for(i=3;i*i<=num/2;i +=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printPrimes(int lower_limits,int upper_limits){
    printf("All Prime number print between %d to %d :",lower_limits,upper_limits);
    while(lower_limits<=upper_limits){
        if(isPrime(lower_limits)){
            printf("%d ",lower_limits);
        }
        lower_limits++;
    }
}