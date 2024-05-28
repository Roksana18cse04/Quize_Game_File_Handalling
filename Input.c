#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("Enter charecter  : ");
    scanf(" %c", &c);
    printf("Enter Integer Number : ");
    scanf("%d",&a);
     printf("Enter Any number Number : ");
    scanf("%lf",&d);
    printf("Enter Float Number : ");
    scanf("%.2f",&b);

   

    printf(" A is %d\n",a);
    printf(" B is %.2f\n",b);
    printf(" C is %c\n",c);
    printf(" D is %lf\n",d);
}
