#include<stdio.h>
//call by value
int addValue(int a,int b){    
    int result ;
    result=a+b;
    return result;
}

///call by reference   & function with return and arguments
int SubValue(int *num1,int *num2){
    int sub;
    sub = *num2-*num1;
    return sub;
}
// function with no return no argument
void generatefibo(){
    int a,b,c,i,terms;

    a=0;
    b=1;
    c=0;
    printf("Enter number of terms : ");
    scanf("%d",&terms);
    printf("Fibonacci Terms = %d \n",terms);
    printf("This is fibonacci serise  : ");
    for(int i=0;i<=terms;i++){
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;

    }
    printf("\n");
}

/// no return but with arguments
void PrintNaturalNumber(int start , int end){
    printf("Print Natural number %d to %d : ",start,end);
    while(start<=end){
        printf("%d ",start);
        start++;
    }
    printf("\n");
}

/// return but no arguments

int Multiplication(){
    int num1;
    int num2;
    int mul;
    printf("Enter any two integer number : ");
    scanf("%d%d",&num1,&num2);
    mul=num1*num2;
    return mul;
}
int main(){
    int n1,n2;
    int Add,Sub,mul;
    printf("Enter any two integer number : ");
    scanf("%d%d",&n1,&n2);
    Add = addValue(n1,n2);
    Sub = SubValue(&n1,&n2);
    mul = Multiplication();

    printf(" %d + %d = %d \n",n1,n2,Add);
    printf(" %d - %d = %d \n",n2,n1,Sub);
    printf("Multiplication = %d \n",mul);

    generatefibo();
    PrintNaturalNumber(n1,n2);
    return 0;
}