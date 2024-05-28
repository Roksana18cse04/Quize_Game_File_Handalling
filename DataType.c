#include <stdio.h>
#include <stdbool.h>
int main(){
    int a=5;
    float b=0.5; //data_type Variable_Name = value --->Variable declaration
    char c='a';
    double d=2099.56;
    float f =100.123;
    float g=12.009;



	// your code goes here
	bool x=true;
	bool y=false;
	printf("%d\n%d\n",x,y);



    // Format specifier int -> %d;Float_->%f; char --> %c; Double-->%ld;
    printf("\na is = %d\n",a);
    printf("b is = %.2f\n",b);
    printf("b is = %.f\n",b);
    printf("b is = %f\n",b);

    /*because "%.f" means to print the floating-point number as an integer,
    so it rounds down to the nearest integer.*/
    
    printf("f is %.f\n",f);
    printf("f is %f\n",f);
    
    printf("g is %.f\n",g);
    printf("g is %.2f\n",g);
    printf("g is %.3f\n",g);
    printf("%c\n",c);
    printf("%f\n",d);
    return 0;


}