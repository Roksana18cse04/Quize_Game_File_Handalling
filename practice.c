#include<stdio.h>
/*int func(){
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    return i;
}*/
int convert(){
    double doller;
    double pound;
    
    scanf("%lf",&doller);
    pound=0.5*doller;
    printf("%lf pound ",pound);
}
int main(){
    //double doller;
    //double pound;
   // pound=convert();
   // ans=func();
    //printf("%d",ans);
    convert();
    return 0;

}