/*
soppouse 60 & 24 lcd and gcd find out
60 = 2 x 2 x 3 x 5
24 = 2 x 2 x 2 x 3
GCD = 2 x 2 x 3 =12
LCM = 2 x 2 x 3 x 2 x 5 =120
LCM = num1*num2/GCD


*/

#include<stdio.h>

int main(){
     int num1,num2,n1,n2,rem,gcd,lcm;
     scanf("%d%d",&num1,&num2);

     n1=num1;
     n2=num2;

     while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
     }

     gcd=n1;

     lcm = (num1*num2)/gcd;

     printf("%d & %d GCD = %d\n",num1,num2,gcd);
     printf("%d & %d LCM = %d\n",num1,num2,lcm);

}