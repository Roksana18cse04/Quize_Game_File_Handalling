/*
pointer :The pointer in C language is a variable which stores the address of another 

two type symbol:
Adrress of symbol '&'means: get the adress of the variable
Asteric symbol '*' means:get the value of ariable that the pointer in pointing too;

Uses of pointer:
- Dynamic memory allocation
-array function and structures


*/


#include<stdio.h>


int main(){
    int x=6;

    int y=9;
    
    int *p,*q;

    p = &x;
    q = &y;
    printf("Value of X   =  %d\n",x);
    printf("Address of X =  %d\n",&x);
    printf("Address of p =  %d\n",p);
    printf("content of p =  %d\n",*p);
    printf("Address of variable p  =  %d\n",&p);


    printf("x = %d\n",p);

    printf("y = %d\n",q);


    int sum=*p+*q;
    printf("Sum %d+%d = %d\n",*p,*q,sum); 


    //swaping
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;

    printf("x = %d\ny = %d\n",x,y);   
    return 0;



}