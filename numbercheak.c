#include<stdio.h>
#include<math.h>
#include <stdbool.h>


bool isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);
int isPalindrome(int num);
int main(){

    int num;
    printf("Enter any integer number : ");
    scanf("%d",&num);
    // call isPrime() function

    if(isPrime(num)){
        printf("%d is Prime\n",num);
    }
    else{
        printf("%d is not Prime\n",num);
    }

/// call isArmsstrong() function 
    if(isArmstrong(num)){
        printf("%d is Armstrong\n",num);
    }
    else{
        printf("%d is not Not Armstrong\n",num);
    }

// call isperfect() function
    if(isPerfect(num)){
        printf("%d is Perfect\n",num);
    }
    else{
        printf("%d is not Perfect\n",num);
    }
// call ispalindrome

    if(isPalindrome(num)){
        printf("%d is Palindrome\n",num);
    }
    else{
        printf("%d is not Palindrome\n",num);
    }
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

int isArmstrong(int num){
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of nth power of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the result is equal to the original number
    if (result == num) {
        return 1; // It's an Armstrong number
    } else {
        return 0; // It's not an Armstrong number
    }
}


int isPerfect(int num){
    int i,n,sum;

    sum=0;
    n=num;

    for(i=1;i<n;i++){
        if(n%1==0){
            sum=sum+i;
        }
    }
    return num==sum;
}

int isPalindrome(int num){
    int n,r,sum=0,temp; 
    temp=n; 
    while(n>0){    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    } 
    if(temp==sum){
    return 1; } 
}
